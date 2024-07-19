#pragma once
#ifndef MANAGE
#define MANAGE
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <ctime>
#include <Windows.h>
#include <ctime>
#include <string>
#include <list>
#include <fstream>
#include "Starbuck.h"
#include "CUSTOMER.h"
using namespace std;
class Manage : KhachHang
{
private:
	string ten = "";
	//quanly
	string mnv;
	string mk;
	//momo
	int momo_money = 0;
	string momo_sdt;
	int momo_shd = 0;
	//bank
	int bank_money = 0;
	string bank_stk;
	string bank;
	int bank_shd = 0;
	//cash
	int idbill_cash = 0;
	int total_cash = 0;
	int receive = 0;
	int refund_cash = 0;
	//billpaid
	int idbill = 0;
	int offline = 0;
	string day;
	string time;
	int table = 0;
	int cashier = 0;
	int number_dr = 0;
	int total = 0;
	int shipfee = 0;
	int total_payment = 0;
	int receive_money = 0;
	int refund = 0;
	//billdrink
	int bill = 0;
	int stt = 0;
	string drinks;
	int money_dr = 0;
	int sl = 0;
	int sum_money = 0;
	//point:
	string sdt_td;
	int point = 0;
protected:
	void draw_line(int size, char kytu) {
		cout << setfill(kytu);
		cout << left << setw(size) << kytu << endl;
		cout << setfill(' ');
	}
	void format(string str, int size, bool end, bool middle) {
		if (!middle) {
			if (!end) {
				cout << left << "| " << setw(size) << str;
			}
			else {
				cout << left << "| " << setw(size) << str << right << "|";
			}
		}
		else {
			string s = "";
			for (int i = 0; i < size / 2 - str.length() / 2; i++) {
				s = s + " ";
			}
			s = s + str;
			if (!end) {
				cout << left << "| " << setw(size) << s;
			}
			else {
				cout << left << "| " << setw(size) << s << right << "|";
			}
		}
	}
	void Total(string str, int size, string total) {
		cout << left << setw(size - total.length()) << str << right << total;
	}
	string PrintCurrency(long long money) {
		string moneystring = to_string(money);
		int comma = 0, locate = 0;
		comma = (moneystring.length() - 1) / 3;
		locate = moneystring.length() - comma * 3;
		while (comma > 0) {
			moneystring.insert(locate, ",");
			locate += 4;
			comma--;
		}
		return moneystring + " VND";
	}
	bool CheckMnv(string mnv)
	{
		list <Manage> staff;
		Manage nvien;
		ifstream read;
		bool flag = 0;
		read.open("Management.txt", ios::out);
		if (!read)
		{
			cout << "Khong the doc File. Vui long thu lai. " << endl;
		}
		else
		{
			staff.clear();
			string line;
			while (getline(read, line))
			{
				size_t pos = line.find(',');				//mnv. 
				size_t pos1 = line.find('\n', pos + 1);		//mk. 
				nvien.mnv = line.substr(0, pos);
				nvien.mk = line.substr(pos + 1, pos1 - pos - 1);
				staff.push_back(nvien);
			}
			read.close();
		}
		if (mnv.length() != 6)
		{
			cout << "Ma quan ly khong hop le hoac khong ton tai. " << endl;
			return false;
		}
		if (mnv[0] == ' ' || mnv.back() == ' ')
		{
			cout << "Ma nhan vien chi duoc co ky tu so. " << endl;
			return false;
		}
		for (int i = 0; i < mnv.length(); i++)
		{
			if (mnv[i] >= '0' && mnv[i] <= '9')
			{
				continue;
			}
			else
			{
				cout << "Ma nhan vien chi duoc co ky tu so. " << endl;
				return false;
			}
		}
		for (auto i = staff.begin(); i != staff.end(); ++i)
		{
			if (mnv == (*i).mnv)
			{
				flag = 1;
				break;
			}
		}
		if (flag)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool CheckPassword(string password)
	{
		if (password.length() >= 8 && password.length() <= 16)
		{
			for (int i = 0; i < password.length(); i++)
			{
				if (password[i] == ' ')
				{
					cout << "Password khong duoc chua ky tu khoang trang!" << endl;
					return false;
				}
				else
				{
					return true;
				}
			}
		}
		else
		{
			cout << "Password phai tu (8 - 16) ky tu." << endl;
			return false;
		}
	}
	bool CheckPassLogin(string password)
	{
		ifstream docuser;
		docuser.open("Management.txt", ios::app);
		if (docuser.is_open())
		{
			string dong;
			while (getline(docuser, dong))
			{
				size_t pos = dong.find(',');			//idnhanvien
				size_t pos1 = dong.find('\n', pos + 1);	//password
				if (pos != SIZE_MAX && dong.substr(pos + 1, pos1 - pos - 1) == password)
				{
					docuser.close();
					return true;
				}
			}
			docuser.close();
		}
		return false;
	}
	bool LoginStaff()
	{
		string mnv, mk;
		middle(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ LOGIN ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ", 120, 1);
		middle("   Moi ban nhap thong tin quan ly de dang nhap:   ", 120, 1);
	re_mnv:
		cout << "------------------------------" << endl;
		cout << "Ma quan ly: ";
		getline(cin, mnv);
		if (!CheckMnv(mnv))
		{
			cout << "Vui long nhap lai. " << endl;
			goto re_mnv;
		}
		else
		{
			if (mnv == "260603")
			{
				ten = "NGUYEN HOANG QUYET";
			}
			else if (mnv == "260403")
			{
				ten = "PHAN MINH PHUNG";
			}
		re_pass:
			cout << "------------------------------" << endl;
			cout << "Mat khau: ";
			getline(cin, mk);
			if (!CheckPassword(mk))
			{
				cout << "Vui long nhap lai. " << endl;
				goto re_pass;
			}
			else
			{
				if (!CheckPassLogin(mk))
				{
					cout << "Sai mat khau. Dang nhap that bai. " << endl;
					return false;
				}
				else
				{
					return true;
				}
			}
		}
	}
	int MomoProfit(int momo)
	{
		ifstream read;
		read.open("MomoStarbuck.txt", ios::out);
		if (!read)
		{
			cout << "Khong the mo file. Vui long kiem tra va thu lai. " << endl;
		}
		else
		{
			string line;
			while (getline(read, line))
			{
				size_t pos = line.find(',');
				size_t pos1 = line.find(',', pos + 1);
				size_t pos2 = line.find('\n', pos1 + 1);
				momo += stoi(line.substr(0, pos));
			}
			read.close();
			return momo;
		}
	}
	int BankProfit(int bank)
	{
		ifstream read;
		read.open("BankStarbuck.txt", ios::out);
		if (!read)
		{
			cout << "Khong the mo file. Vui long kiem tra va thu lai. " << endl;
		}
		else
		{
			string line;
			while (getline(read, line))
			{
				size_t pos = line.find(',');
				size_t pos1 = line.find(',', pos + 1);
				size_t pos2 = line.find(',', pos1 + 1);
				size_t pos3 = line.find('\n', pos2 + 1);
				bank += stoi(line.substr(0, pos));
			}
			read.close();
			return bank;
		}
	}
	int CashProfit(int cash)
	{
		ifstream read;
		read.open("CashStarbuck.txt", ios::out);
		if (!read)
		{
			cout << "Khong the mo file. Vui long kiem tra va thu lai. " << endl;
		}
		else
		{
			string line;
			while (getline(read, line))
			{
				size_t pos = line.find(',');				//idbill
				size_t pos1 = line.find(',', pos + 1);		//total
				size_t pos2 = line.find(',', pos1 + 1);		//receive
				size_t pos3 = line.find('\n', pos2 + 1);	//refund
				cash += stoi(line.substr(pos + 1, pos1 - pos - 1));
			}
			read.close();
			return cash;
		}
	}
	void Profit()
	{
		ifstream read;
		int momo_profit = 0, bank_profit = 0, cash_profit = 0, choose_profit = 0;
		momo_profit = MomoProfit(momo_profit);
		bank_profit = BankProfit(bank_profit);
		cash_profit = CashProfit(cash_profit);
	profit_money:
		system("cls");
		middle(" ------------------------------ LOI NHUAN CUA STARBUCK ------------------------------ ", 100, 1);
		cout << "Momo: + " << PrintCurrency(momo_profit) << endl;
		cout << "Ngan hang: + " << PrintCurrency(bank_profit) << endl;
		cout << "Tien mat: + " << PrintCurrency(cash_profit) << endl;
	re_profit:
		cout << "Xem bien dong so du: " << endl;
		cout << "1. Momo    " << "\t\t\t" << "2. Ngan hang. " << endl;
		cout << "3. Tien mat" << "\t\t\t" << "0. Quay lai. " << endl;
		cin >> choose_profit;
		cin.ignore();
		if (choose_profit == 1)
		{
			list <Manage> manager;
			Manage quanly;
			int momo = 0;
			read.open("MomoStarbuck.txt", ios::out);
			if (!read)
			{
				cout << "Khong the mo file. Vui long kiem tra va thu lai. " << endl;
			}
			else
			{
				middle(" ------------------------------ MOMO ------------------------------ ", 100, 1);
				manager.clear();
				string line;
				while (getline(read, line))
				{
					size_t pos = line.find(',');
					size_t pos1 = line.find(',', pos + 1);
					size_t pos2 = line.find('\n', pos1 + 1);
					quanly.momo_money = stoi(line.substr(0, pos));
					quanly.momo_sdt = line.substr(pos + 1, pos1 - pos - 1);
					quanly.momo_shd = stoi(line.substr(pos1 + 1, pos2 - pos1 - 1));
					manager.push_back(quanly);
				}
				read.close();
			}
			for (auto itr = manager.begin(); itr != manager.end(); ++itr)
			{
				momo += (*itr).momo_money;
				cout << "Nhan tien tu " << (*itr).momo_sdt << " de thanh toan hoa don: " << (*itr).momo_shd << "." << endl;
				cout << "+ " << PrintCurrency((*itr).momo_money) << endl;
				cout << "So du vi Momo cua Starbuck: " << PrintCurrency(momo) << "." << endl;
				cout << "--------------------------------------------------" << endl;
			}
			system("pause");
			goto profit_money;
		}
		else if (choose_profit == 2)
		{
			list <Manage> manager1;
			Manage quanly1;
			int bank = 0;
			read.open("BankStarbuck.txt", ios::out);
			if (!read)
			{
				cout << "Khong the mo file. Vui long kiem tra va thu lai. " << endl;
			}
			else
			{
				middle(" ------------------------------ NGAN HANG ------------------------------ ", 100, 1);
				manager1.clear();
				string line;
				while (getline(read, line))
				{
					size_t pos = line.find(',');
					size_t pos1 = line.find(',', pos + 1);
					size_t pos2 = line.find(',', pos1 + 1);
					size_t pos3 = line.find('\n', pos2 + 1);
					quanly1.bank_money = stoi(line.substr(0, pos));
					quanly1.bank_stk = line.substr(pos + 1, pos1 - pos - 1);
					quanly1.bank = line.substr(pos1 + 1, pos2 - pos1 - 1);
					quanly1.bank_shd = stoi(line.substr(pos2 + 1, pos3 - pos2 - 1));
					manager1.push_back(quanly1);
				}
				read.close();
			}
			for (auto itr = manager1.begin(); itr != manager1.end(); ++itr)
			{
				bank += (*itr).bank_money;
				cout << "Nhan tien tu STK " << (*itr).bank_stk << " qua ngan hang " << (*itr).bank << " de thanh toan hoa don: " << (*itr).bank_shd << "." << endl;
				cout << "So tien: + " << PrintCurrency((*itr).bank_money) << endl;
				cout << "So du cuoi cua Ngan hang cua Starbuck: " << PrintCurrency(bank) << "." << endl;
				cout << "--------------------------------------------------" << endl;
			}
			system("pause");
			goto profit_money;
		}
		else if (choose_profit == 3)
		{
			list <Manage> manager2;
			Manage quanly2;
			int cash = 0;
			read.open("CashStarbuck.txt", ios::out);
			if (!read)
			{
				cout << "Khong the mo file. Vui long kiem tra va thu lai. " << endl;
			}
			else
			{
				middle(" ------------------------------ TIEN MAT ------------------------------ ", 100, 1);
				manager2.clear();
				string line;
				while (getline(read, line))
				{
					size_t pos = line.find(',');						//idbill
					size_t pos1 = line.find(',', pos + 1);				//total
					size_t pos2 = line.find(',', pos1 + 1);				//receive
					size_t pos3 = line.find('\n', pos2 + 1);			//refund
					quanly2.idbill_cash = stoi(line.substr(0, pos));
					quanly2.total_cash = stoi(line.substr(pos + 1, pos1 - pos - 1));
					quanly2.receive = stoi(line.substr(pos1 + 1, pos2 - pos1 - 1));
					quanly2.refund_cash = stoi(line.substr(pos2 + 1, pos3 - pos2 - 1));
					manager2.push_back(quanly2);
				}
				read.close();
			}
			draw_line(50, '-');
			for (auto itr = manager2.begin(); itr != manager2.end(); ++itr)
			{
				cash += (*itr).total_cash;
				cout << "Nhan tien tu Bill " << (*itr).idbill_cash << " tai quan STARBUCK. " << endl;
				cout << "So tien: + " << PrintCurrency((*itr).total_cash) << endl;
				cout << "Khach dua: " << PrintCurrency((*itr).receive) << endl;
				cout << "Tien tra lai: " << PrintCurrency((*itr).refund_cash) << endl;
				cout << "So du tien mat cuoi cua Starbuck: " << PrintCurrency(cash) << "." << endl;
				cout << "--------------------------------------------------" << endl;
			}
			system("pause");
			goto profit_money;
		}
		else if (choose_profit == 0)
		{
			middle(" ------------------------------ QUAY LAI ------------------------------ ", 100, 1);
		}
		else
		{
			cout << "Lua chon khong hop le. Vui long chon lai. " << endl;
			goto re_profit;
		}
	}
	string Mode(int offline)
	{
		if (offline == 0)
			return "Online";
		else if (offline == 1)
			return "Offline";
	}
	void kiemke(list<Manage>managerhd)
	{
		draw_line(121, '-');
		format("Bill ", 7, 0, 1);
		format("Hinh thuc ", 12, 0, 1);
		format("Ngay, gio ", 24, 0, 1);
		format("SL do uong ", 13, 0, 1);
		format("Tong thanh toan ", 18, 0, 1);
		format("Tien nhan ", 16, 0, 1);
		format("Tien tra lai ", 17, 1, 1);
		cout << endl;
		draw_line(121, '-');
		for (auto itr = managerhd.begin(); itr != managerhd.end(); ++itr)
		{
			format(to_string((*itr).idbill), 7, 0, 1);
			format(Mode((*itr).offline) + ' ', 12, 0, 1);
			format((*itr).day + ", " + (*itr).time, 24, 0, 1);
			format(to_string((*itr).number_dr) + ' ', 13, 0, 1);
			format(PrintCurrency((*itr).total_payment), 18, 0, 1);
			format(PrintCurrency((*itr).receive_money), 16, 0, 1);
			format(PrintCurrency((*itr).refund), 17, 1, 1);
			cout << endl;
			draw_line(121, '-');
		}
	}
	void order_table(int billid, list<Manage>hd)
	{
		Manage hoadon;
		ifstream read;
		read.open("kiemke.txt", ios::out);
		if (!read)
		{
			cout << "Khong the mo File. Vui long kiem tra lai va thu lai. " << endl;
		}
		else
		{
			hd.clear();
			string line;
			while (getline(read, line))
			{
				size_t pos = line.find(',');				//idbill
				size_t pos1 = line.find(',', pos + 1);		//stt
				size_t pos2 = line.find(',', pos1 + 1);		//drinks
				size_t pos3 = line.find(',', pos2 + 1);		//money_dr
				size_t pos4 = line.find(',', pos3 + 1);		//sl
				size_t pos5 = line.find('\n', pos4 + 1);	//sum_money
				hoadon.bill = stoi(line.substr(0, pos));
				hoadon.stt = stoi(line.substr(pos + 1, pos1 - pos - 1));
				hoadon.drinks = line.substr(pos1 + 1, pos2 - pos1 - 1);
				hoadon.money_dr = stoi(line.substr(pos2 + 1, pos3 - pos2 - 1));
				hoadon.sl = stoi(line.substr(pos3 + 1, pos4 - pos3 - 1));
				hoadon.sum_money = stoi(line.substr(pos4 + 1, pos5 - pos4 - 1));
				hd.push_back(hoadon);
			}
		}
		draw_line(116, '-');
		format("STT ", 6, 0, 1);
		format("Drinks ", 60, 0, 1);
		format("Unit Price", 12, 0, 1);
		format("Quantity ", 10, 0, 1);
		format("Total amount ", 17, 1, 1);
		cout << endl;
		draw_line(116, '-');
		for (auto itr = hd.begin(); itr != hd.end(); ++itr)
		{
			if ((*itr).bill == billid)
			{
				format(to_string((*itr).stt) + " ", 6, 0, 1);
				format((*itr).drinks, 60, 0, 0);
				format(PrintCurrency((*itr).money_dr), 12, 0, 1);
				format(to_string((*itr).sl) + " ", 10, 0, 1);
				format(PrintCurrency((*itr).sum_money), 17, 1, 1);
				cout << endl;
				draw_line(116, '-');
			}
		}
	}
	void Inventory()
	{
		system("cls");
		int choose_seen = 0, billid = 0;
		bool flag = 0;
		ifstream read;
		list <Manage> managerhd;
		Manage qlhd;
		middle(" ------------------------------ KIEM KE HOA DON DUOC XUAT TRUC TIEP TAI QUAN STARBUCK ------------------------------ ", 120, 1);
		read.open("BillPaid.txt");
		if (!read)
		{
			cout << "Khong the doc File. Vui long kiem tra lai. " << endl;
		}
		else
		{
			managerhd.clear();
			string line;
			while (getline(read, line))
			{
				size_t pos = line.find(',');				//idbill. 
				size_t pos1 = line.find(',', pos + 1);		//offline. 
				size_t pos2 = line.find(',', pos1 + 1);		//day.
				size_t pos3 = line.find(',', pos2 + 1);		//time.
				size_t pos4 = line.find(',', pos3 + 1);		//table.
				size_t pos5 = line.find(',', pos4 + 1);		//thungan.
				size_t pos6 = line.find(',', pos5 + 1);		//number_dr.
				size_t pos7 = line.find(',', pos6 + 1);		//total.
				size_t pos8 = line.find(',', pos7 + 1);		//shipfee.
				size_t pos9 = line.find(',', pos8 + 1);		//total_payment.
				size_t pos10 = line.find(',', pos9 + 1);	//receive_money.
				size_t pos11 = line.find('\n', pos10 + 1);	//refund.
				qlhd.idbill = stoi(line.substr(0, pos));
				qlhd.offline = stoi(line.substr(pos + 1, pos1 - pos - 1));
				qlhd.day = line.substr(pos1 + 1, pos2 - pos1 - 1);
				qlhd.time = line.substr(pos2 + 1, pos3 - pos2 - 1);
				qlhd.table = stoi(line.substr(pos3 + 1, pos4 - pos3 - 1));
				qlhd.cashier = stoi(line.substr(pos4 + 1, pos5 - pos4 - 1));
				qlhd.number_dr = stoi(line.substr(pos5 + 1, pos6 - pos5 - 1));
				qlhd.total = stoi(line.substr(pos6 + 1, pos7 - pos6 - 1));
				qlhd.shipfee = stoi(line.substr(pos7 + 1, pos8 - pos7 - 1));
				qlhd.total_payment = stoi(line.substr(pos8 + 1, pos9 - pos8 - 1));
				qlhd.receive_money = stoi(line.substr(pos9 + 1, pos10 - pos9 - 1));
				qlhd.refund = stoi(line.substr(pos10 + 1, pos11 - pos10 - 1));
				managerhd.push_back(qlhd);
			}
			read.close();
		}
	re_kiemke:
		kiemke(managerhd);
		cout << "~~~~~~~~~~~~~~" << endl;
		cout << "Xin chao quan ly " << ten << ", ban co muon xem lai chi tiet mot hoa don nao khong? " << endl;
		cout << "1. Co" << "\t\t\t" << "2. Khong" << endl;
		cout << "Lua chon: ";
		cin >> choose_seen;
		cin.ignore();
		if (choose_seen == 1)
		{
			middle(" ------------------------- XEM CHI TIET HOA DON ------------------------- ", 120, 1);
		re_billid:
			cout << "Xin moi nhap vao So cua hoa don muon xem chi tiet: ";
			cin >> billid;
			cin.ignore();
			for (auto i = managerhd.begin(); i != managerhd.end(); ++i)
			{
				if ((*i).idbill == billid)
				{
					list <Manage> hd;
					flag = 1;
					cout << "Da tim thay Hoa don co So hoa don tuong ung ban muon xem chi tiet. " << endl;
					Sleep(2000);
					system("cls");
					middle(" ------------------------- CHI TIET HOA DON ------------------------- ", 100, 1);
					draw_line(120, '-');
					middle("S T A R B U C K ", 120, 1);
					middle("Address: Nguyen Van Cu, Quan 5, TP. HCM ", 120, 1);
					middle("Phone number: 0924.857.004 - 0938.287.413", 120, 1);
					if ((*i).offline == 1)
					{
						middle("BILL ", 120, 1);
					}
					else
					{
						middle("STARBUCK ONLINE INVOICE ", 120, 1);
					}
					middle("Invoice no : " + to_string((*i).idbill), 120, 1);
					middle("Date: " + (*i).day, 120, 0);
					middle("Time: " + (*i).time, 120, 0);
					if ((*i).offline == 1)
					{
						middle("Table number: " + to_string((*i).table), 120, 0);
						middle("Cashier: Cashier " + to_string((*i).cashier), 120, 0);
					}
					order_table(billid, hd);
					draw_line(120, '-');
					Total("Number of drinks: ", 120, to_string((*i).number_dr));
					cout << endl;
					if ((*i).shipfee == 0)
					{
						Total("Total payment: ", 120, PrintCurrency((*i).total_payment));
						cout << endl;
					}
					else
					{
						Total("Total: ", 120, PrintCurrency((*i).total));
						cout << endl;
						Total("Delivery Fee: ", 120, PrintCurrency((*i).shipfee));
						cout << endl;
						Total("Total payment: ", 120, PrintCurrency((*i).total_payment));
						cout << endl;
					}
					Total("Money given by guests: ", 120, PrintCurrency((*i).receive_money));
					cout << endl;
					Total("Refunds: ", 120, PrintCurrency((*i).refund));
					cout << endl;
					draw_line(120, '-');
					middle("THANK YOU! SEE YOU AGAIN! ", 120, 1);
					middle("Powered by NEOSOFT ", 120, 1);
					draw_line(120, '=');
					break;
				}
			}
			if (!flag)
			{
				cout << "Khong tim thay Hoa don co So hoa don tuong ung. Vui long kiem tra lai So cua Hoa don muon xem chi tiet va thu lai. " << endl;
				goto re_billid;
			}
		}
		else if (choose_seen == 2)
		{
			cout << endl << " ----- Khong xem chi tiet -----" << endl << endl << endl << endl;
		}
		else
		{
			system("cls");
			cout << "Ban da lua chon khong phu hop. Vui long chon lai. " << endl;
			goto re_kiemke;
		}
	}
	void AccumulatePoints()
	{
		cout << "----------- TICH DIEM TAI HE THONG CUA HANG STARBUCK -----------" << endl;
		ifstream read;
		list<Manage> tichdiem;
		Manage td;
		read.open("Tich Diem.txt", ios::out);
		if (!read)
		{
			cout << "Khong the doc File. " << endl;
		}
		else
		{
			tichdiem.clear();
			string line;
			while (getline(read, line))
			{
				size_t pos = line.find('-');
				size_t pos1 = line.find('\n', pos + 1);
				td.sdt_td = line.substr(0, pos);
				td.point = stoi(line.substr(pos + 1, pos1 - pos - 1));
				tichdiem.push_back(td);
			}
			read.close();
		}
		cout << "------------------------------------------" << endl;
		for (auto itr = tichdiem.begin(); itr != tichdiem.end(); ++itr)
		{
			cout << (*itr).sdt_td << '-' << (*itr).point << endl;
			cout << "------------------------------------------" << endl;
		}
	}
	void QuanLy()
	{
	re_nhanvien:
		system("cls");
		if (LoginStaff())
		{
			cout << "Dang nhap thanh cong. " << endl;
			Sleep(2000);
			int choose = 0;
		re_manage:
			system("cls");
			middle(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ LOGIN ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ", 120, 1);
			cout << "STARBUCK xin chao, quan ly " << ten << "," << endl;
			cout << "Ban muon thuc hien thao tac nao tiep theo: " << endl;
			cout << "1. Xem loi nhuan quan thu duoc. " << endl;
			cout << "2. Xem kiem ke hoa don duoc xuat truc tiep cua quan. " << endl;
			cout << "3. Xem he thong doi thuong cua cua hang. " << endl;
			cout << "0. Dang xuat. " << endl;
			cin >> choose;
			cin.ignore();
			if (choose == 1)
			{
				system("cls");
				Profit();
				system("pause");
				cout << "Quay lai trang Quan ly sau 3 giay. " << endl;
				Wait();
				goto re_manage;
			}
			else if (choose == 2)
			{
				Inventory();
				system("pause");
				cout << "Quay lai trang Quan ly sau 3 giay. " << endl;
				Wait();
				goto re_manage;
			}
			else if (choose == 3)
			{
				system("cls");
				AccumulatePoints();
				system("pause");
				cout << "Quay lai trang Quan ly sau 3 giay. " << endl;
				Wait();
				goto re_manage;
			}
			else if (choose == 0)
			{
				system("cls");
				cout << "Dang xuat sau 3 giay. " << endl;
				Wait();
			}
			else
			{
				cout << "Thao tac khong hop le. Vui long chon lai. " << endl;
				goto re_manage;
			}
		}
		else
		{
			int staffs = 0;
		re_staffs:
			cout << "Ban da nhap sai tai khoan duoc cung cap cho quan ly. Ban muon thuc hien thao tac gi tiep theo: " << endl;
			cout << "1. Nhap lai tai khoan quan ly. " << endl;
			cout << "2. Quay lai Starbuck HOME. " << endl;
			cin >> staffs;
			cin.ignore();
			if (staffs == 1)
			{
				goto re_nhanvien;
			}
			else if (staffs == 2)
			{
				cout << "Quay lai Starbuck HOME sau 3 giay. " << endl;
				Wait();
				system("cls");
			}
			else
			{
				cout << "Lua chon thao tac tiep theo khong hop le. Vui long kiem tra va chon lai. " << endl;
				goto re_staffs;
			}
		}
	}
public:
	void StarbuckforEveryone()
	{
		int who = 0;
	choose_who:
		system("cls");
		cout << "STARBUCK CHAO MUNG BAN " << endl;
		cout << "Ban la: " << endl;
		cout << "1. Quan ly. " << "\t\t\t" << "2. Khach hang. " << endl;
		cout << "0. Thoat STARBUCK. " << endl;
		cout << "Lua chon cua ban: ";
		cin >> who;
		cin.ignore();
		if (who == 1)
		{
			QuanLy();
			goto choose_who;
		}
		else if (who == 2)
		{
			WelcometoStarbuck();
			cout << "Quay lai STARBUCK HOME sau 3 giay. " << endl;
			Wait();
			goto choose_who;
		}
		else if (who == 0)
		{
			system("cls");
			cout << "Thoat STARBUCK. " << endl;
			system("pause");
		}
		else
		{
			cout << "Lua chon cua ban khong hop le. Vui long nhap lai. " << endl;
			goto choose_who;
		}
	}
};
#endif