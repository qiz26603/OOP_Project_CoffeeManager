#pragma once
#ifndef CUSTOMER
#define CUSTOMER
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
#pragma warning (disable: 26451)
using namespace std;
class KhachHang : Starbuck
{
private:
	bool ship = 0;
	int stt = 0;
	string drinks = "";
	int money_dr = 0;
	int sl = 0;
	int sum_money = 0;
	string td_sdt;
	int td_point = 0;
	void Total(string str, int size, string total) {
		cout << left << setw(size - total.length()) << str << right << total;
	}
	string getTime()
	{
		time_t now = time(0);
		tm* timeinfo = localtime(&now);
		int hour = timeinfo->tm_hour;
		int minute = timeinfo->tm_min;
		int second = timeinfo->tm_sec;
		int day = timeinfo->tm_mday;
		int month = timeinfo->tm_mon + 1;
		int year = timeinfo->tm_year + 1900;
		string date, time;
		if (month < 10)
		{
			if (day < 10)
			{
				date = "0" + to_string(day) + "/0" + to_string(month) + "/" + to_string(year);
				if (hour < 10)
				{
					if (minute < 10)
					{
						if (second < 10)
						{
							time = "0" + to_string(hour) + ":0" + to_string(minute) + ":0" + to_string(second);
						}
						else
						{
							time = "0" + to_string(hour) + ":0" + to_string(minute) + ":" + to_string(second);
						}
					}
					else
					{
						if (second < 10)
						{
							time = "0" + to_string(hour) + ":" + to_string(minute) + ":0" + to_string(second);
						}
						else
						{
							time = "0" + to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
						}
					}
				}
				else
				{
					if (minute < 10)
					{
						if (second < 10)
						{
							time = to_string(hour) + ":0" + to_string(minute) + ":0" + to_string(second);
						}
						else
						{
							time = to_string(hour) + ":0" + to_string(minute) + ":" + to_string(second);
						}
					}
					else
					{
						if (second < 10)
						{
							time = to_string(hour) + ":" + to_string(minute) + ":0" + to_string(second);
						}
						else
						{
							time = to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
						}
					}
				}
			}
			else
			{
				date = to_string(day) + "/0" + to_string(month) + "/" + to_string(year);
				if (hour < 10)
				{
					if (minute < 10)
					{
						if (second < 10)
						{
							time = "0" + to_string(hour) + ":0" + to_string(minute) + ":0" + to_string(second);
						}
						else
						{
							time = "0" + to_string(hour) + ":0" + to_string(minute) + ":" + to_string(second);
						}
					}
					else
					{
						if (second < 10)
						{
							time = "0" + to_string(hour) + ":" + to_string(minute) + ":0" + to_string(second);
						}
						else
						{
							time = "0" + to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
						}
					}
				}
				else
				{
					if (minute < 10)
					{
						if (second < 10)
						{
							time = to_string(hour) + ":0" + to_string(minute) + ":0" + to_string(second);
						}
						else
						{
							time = to_string(hour) + ":0" + to_string(minute) + ":" + to_string(second);
						}
					}
					else
					{
						if (second < 10)
						{
							time = to_string(hour) + ":" + to_string(minute) + ":0" + to_string(second);
						}
						else
						{
							time = to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
						}
					}
				}
			}
		}
		else
		{
			if (day < 10)
			{
				date = "0" + to_string(day) + "/" + to_string(month) + "/" + to_string(year);
				if (hour < 10)
				{
					if (minute < 10)
					{
						if (second < 10)
						{
							time = "0" + to_string(hour) + ":0" + to_string(minute) + ":0" + to_string(second);
						}
						else
						{
							time = "0" + to_string(hour) + ":0" + to_string(minute) + ":" + to_string(second);
						}
					}
					else
					{
						if (second < 10)
						{
							time = "0" + to_string(hour) + ":" + to_string(minute) + ":0" + to_string(second);
						}
						else
						{
							time = "0" + to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
						}
					}
				}
				else
				{
					if (minute < 10)
					{
						if (second < 10)
						{
							time = to_string(hour) + ":0" + to_string(minute) + ":0" + to_string(second);
						}
						else
						{
							time = to_string(hour) + ":0" + to_string(minute) + ":" + to_string(second);
						}
					}
					else
					{
						if (second < 10)
						{
							time = to_string(hour) + ":" + to_string(minute) + ":0" + to_string(second);
						}
						else
						{
							time = to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
						}
					}
				}
			}
			else
			{
				date = to_string(day) + "/" + to_string(month) + "/" + to_string(year);
				if (hour < 10)
				{
					if (minute < 10)
					{
						if (second < 10)
						{
							time = "0" + to_string(hour) + ":0" + to_string(minute) + ":0" + to_string(second);
						}
						else
						{
							time = "0" + to_string(hour) + ":0" + to_string(minute) + ":" + to_string(second);
						}
					}
					else
					{
						if (second < 10)
						{
							time = "0" + to_string(hour) + ":" + to_string(minute) + ":0" + to_string(second);
						}
						else
						{
							time = "0" + to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
						}
					}
				}
				else
				{
					if (minute < 10)
					{
						if (second < 10)
						{
							time = to_string(hour) + ":0" + to_string(minute) + ":0" + to_string(second);
						}
						else
						{
							time = to_string(hour) + ":0" + to_string(minute) + ":" + to_string(second);
						}
					}
					else
					{
						if (second < 10)
						{
							time = to_string(hour) + ":" + to_string(minute) + ":0" + to_string(second);
						}
						else
						{
							time = to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
						}
					}
				}
			}
		}
		cout << "Thoi gian: " << time << ", " << date << endl;
		return date + ';' + time;
	}
	void Loading()
	{
		cout << "Loading ...";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
	}
	void table_order(list<KhachHang>& customer)
	{
		draw_line(116, '-');
		format("STT ", 6, 0, 1);
		format("Drinks ", 60, 0, 1);
		format("Unit Price", 12, 0, 1);
		format("Quantity ", 10, 0, 1);
		format("Total amount ", 17, 1, 1);
		cout << endl;
		draw_line(116, '-');
		for (auto itr = customer.begin(); itr != customer.end(); ++itr)
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
	bool CheckExisTable(int table)
	{
		ifstream readtable;
		readtable.open("BillPaid.txt", ios::out);
		if (readtable)
		{
			string dong;
			while (getline(readtable, dong))
			{
				size_t pos = dong.find(',');
				if (pos != SIZE_MAX && stoi(dong.substr(0, pos)) == table)
				{
					readtable.close();
					return true;
				}
			}
			readtable.close();
		}
		return false;
	}
	bool CheckExisIDBill(int idbill)
	{
		ifstream readidbill;
		readidbill.open("BillPaid.txt", ios::out);
		if (readidbill)
		{
			string dong;
			while (getline(readidbill, dong))
			{
				size_t pos = dong.find(',');
				size_t pos1 = dong.find(',', pos + 1);
				if (pos != SIZE_MAX && stoi(dong.substr(pos + 1, pos1 - pos - 1)) == idbill)
				{
					readidbill.close();
					return true;
				}
			}
			readidbill.close();
		}
		return false;
	}
	bool CheckPhoneNumber(string phone)
	{
		if (phone.length() != 10)
		{
			cout << "So dien thoai khong dung (Tieu chuan: 10 ky tu)." << endl;
			return false;
		}
		else
		{
			for (int i = 0; i < phone.length(); i++)
			{
				if (phone[i] >= '0' && phone[i] <= '9')
				{
					return true;
				}
				else if (phone[i] == ' ')
				{
					return false;
				}
				else
				{
					return false;
				}
			}
		}
	}
	bool check_timeOff()
	{
		time_t now = time(0);
		tm* ltm = localtime(&now);
		int hour = ltm->tm_hour;
		if (hour < 8 || hour >= 22)
		{
			cout << "Bay gio la: " << ltm->tm_hour << ":" << ltm->tm_min << "," << ltm->tm_mday << "/" << 1 + ltm->tm_mon << "/" << 1900 + ltm->tm_year << endl;
			cout << "\t\t XIN LOI QUY KHACH ! CUA HANG STARBUCKS HIEN TAI CHUA MO CUA! " << endl;
			cout << "GIO HOAT DONG CUA QUAN STARBUCK CUA CHUNG TOI LA: 08:00 - 22:00 " << endl << "QUY KHACH VUI LONG QUAY LAI SAU VAO GIO MO CUA CUA QUAN STARBUCK !" << endl;
			return false;
		}
		else
		{
			cout << "------------------------- CHAO MUNG BAN DEN VOI QUAY GOI MON TRUC TIEP TAI QUAN STARBUCK -------------------------" << endl;
			return true;
		}
	}
	bool check_timeOnl()
	{
		time_t now = time(0);
		tm* ltm = localtime(&now);
		int hour = ltm->tm_hour;
		if (hour < 8 || hour >= 21)
		{
			cout << "Bay gio la: " << ltm->tm_hour << ":" << ltm->tm_min << "," << ltm->tm_mday << "/" << 1 + ltm->tm_mon << "/" << 1900 + ltm->tm_year << endl;
			cout << "\t\t XIN LOI QUY KHACH ! DICH VU GOI MON ONLINE TAI CUA HANG STARBUCKS CHUA MO ! " << endl;
			cout << "GIO HOAT DONG CUA DICH VU GOI MON ONLINE TAI QUAN STARBUCK CUA CHUNG TOI LA: 08:00 - 21:00 " << endl << "QUY KHACH VUI LONG QUAY LAI SAU !" << endl;
			return false;
		}
		else
		{
			cout << "------------- CHAO MUNG BAN DEN VOI DICH VU GOI MON ONLINE CUA QUAN STARBUCK -------------" << endl;
			cout << "Bay gio la: " << ltm->tm_hour << ":" << ltm->tm_min << "," << ltm->tm_mday << "/" << 1 + ltm->tm_mon << "/" << 1900 + ltm->tm_year << endl << endl << endl << endl;
			return true;
		}
	}
	string timebill(int hour, int minute)
	{
		string newtime;
		if (hour < 10)
		{
			if (minute < 10)
			{
				newtime = "0" + to_string(hour) + ":0" + to_string(minute);
			}
			else
			{
				newtime = "0" + to_string(hour) + ":" + to_string(minute);
			}
		}
		else
		{
			if (minute < 10)
			{
				newtime = to_string(hour) + ":0" + to_string(minute);
			}
			else
			{
				newtime = to_string(hour) + ":" + to_string(minute);
			}
		}
		return newtime;
	}

	int randSHD()
	{
		int shd = 0;
	re_hd:
		srand(time(0));
		shd = 100000 + rand() % (1000000 - 100000);
		if (CheckExisIDBill(shd))
		{
			goto re_hd;
		}
		return shd;
	}
	int randTable()
	{
	re_rand:
		int table = 0;
		srand(time(0));
		table = rand() % (30) + 1;
		if (table == 0 || (CheckExisTable(table)))
		{
			goto re_rand;
		}
		return table;
	}
	int randThuNgan()
	{
		srand(time(0));
		return rand() % (10) + 1;
	}
	bool check_sdt(string a)
	{
		if (a.empty() == 1)
		{
			cout << "Ban chua nhap so dien thoai. Xin moi nhap. " << endl;
			return false;
		}
		if (a.length() < 10 || a.length() > 10 || a[0] != '0')
		{
			cout << "So dien thoai khong dung dinh dang. Xin moi nhap lai. " << endl;
			return false;
		}
		if (a == "0123456789" || a == "9876543210" || a == "0000000000" || a == "0111111111" || a == "0222222222" || a == "0333333333" || a == "0444444444" || a == "0555555555" || a == "0666666666" || a == "0777777777" || a == "0888888888" || a == "0999999999")
		{
			cout << "So dien thoai khong dung dinh dang. Xin moi nhap lai. " << endl;
			return false;
		}
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] >= '0' && a[i] <= '9')
			{
				continue;
			}
			if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
			{
				cout << "So dien thoai khong duoc chua ky tu alphabet. Xin moi nhap lai. " << endl;
				return false;
			}
			else
			{
				cout << "So dien thoai khong duoc chua ky tu dac biet. Xin moi nhap lai" << endl;
				return false;
			}
		}
		return true;
	}
	bool check_ExistPhonenumber(string phone)
	{
		ifstream readphonenumber;
		readphonenumber.open("Tich Diem.txt", ios::out);
		if (readphonenumber)
		{
			string line;
			while (getline(readphonenumber, line))
			{
				size_t pos = line.find('-');
				if (pos != SIZE_MAX && line.substr(0, pos) == phone)
				{
					readphonenumber.close();
					return true; // ton tai sdt trong tep
				}
			}
			readphonenumber.close();
		}
		return false;
	}
	string PrintPoint(int point) {
		string pointstring = to_string(point);
		int comma = 0, locate = 0;
		comma = (pointstring.length() - 1) / 3;
		locate = pointstring.length() - comma * 3;
		while (comma > 0) {
			pointstring.insert(locate, ",");
			locate += 4;
			comma--;
		}
		return pointstring;
	}
	int tichdiem(int bill)
	{
		string phonenumber;
		int point = 0, point0 = 0, discount = 0;
		int chon_1 = 0;
		int chon_2;
		int diem = 0, voucher = 0;
		list<KhachHang> tichdiem;
		KhachHang td;
		ofstream write;
		ifstream read;
	re_choosetd:
		cout << "----------------------------------------" << endl;
		cout << "Ban co muon tich diem doi thuong khong ?" << endl;
		cout << "1. Co " << "\t\t\t" << "2. Khong " << endl;
	re_again:
		cout << "Lua chon cua ban la: ";
		cin >> chon_1;
		cout << "------------------------------------------" << endl;
		cin.ignore();
		if (chon_1 == 1)
		{
			read.open("Tich Diem.txt", ios::out);
			if (!read)
			{
				cout << "Khong the mo File. Vui long kiem tra lai. " << endl;
			}
			else
			{
				tichdiem.clear();
				string line;
				while (getline(read, line))
				{
					size_t pos = line.find('-');			//sdt
					size_t pos1 = line.find('\n', pos + 1);	//Point
					td.td_sdt = line.substr(0, pos);
					td.td_point = stoi(line.substr(pos + 1, pos1 - pos - 1));
					tichdiem.push_back(td);
				}
				read.close();
			}
			cout << "Ban da co so dien thoai tich diem chua" << endl;
			cout << "1. Co " << endl;
			cout << "2. Chua " << endl;
		re_again1:
			cout << "Lua chon cua ban la: ";
			cin >> diem;
			cin.ignore();
			cout << "------------------------------------------" << endl;
			switch (diem)
			{
			case 1:
			{
			re_numberphone:
				cout << "Xin moi nhap so dien thoai: ";
				getline(cin, phonenumber);
				if (!check_ExistPhonenumber(phonenumber))
				{
					int choose_tichdiem = 0;
				re_tich:
					cout << "So dien thoai chua duoc dang ky. " << endl;
					cout << "Ban muon thuc hien thao tac nao tiep theo: " << endl;
					cout << "1. Nhap lai so dien thoai da co de tich diem. " << endl;
					cout << "2. Quay lai va dang ky so dien thoai de tich diem. " << endl;
					cin >> choose_tichdiem;
					cin.ignore();
					if (choose_tichdiem == 1)
					{
						cout << "------------------------------------------" << endl;
						goto re_numberphone;
					}
					else if (choose_tichdiem == 2)
					{
						goto re_choosetd;
					}
					else
					{
						cout << "Ban da chon thao tac khong hop le. Vui long chon lai. " << endl;
						goto re_tich;
					}
				}
				else
				{
					for (auto itr = tichdiem.begin(); itr != tichdiem.end(); ++itr)
					{
						if ((*itr).td_sdt == phonenumber)
						{
							cout << "So dien thoai tich diem da duoc xac nhan: " << (*itr).td_sdt << endl;
							cout << "Diem hien tai cua ban la: " << (*itr).td_point << endl;
							cout << "------------------------------------------" << endl;
							point = (*itr).td_point;
							point0 = point;
						ag:
							cout << "Cua hang co mot so uu dai sau, moi ban xem qua: " << endl;
						again:
							cout << "~~~~~~~~~~" << endl;
							cout << "1. Voucher Giam gia 20% Hoa Don (1500 Diem). " << endl;
							cout << "2. Voucher Giam gia 50% Hoa Don (5000 Diem)." << endl;
							cout << "3. Voucher Giam gia 80% Hoa Don (10000 Diem)." << endl;
							cout << "0. Khong doi Voucher. " << endl;
							cout << "Lua chon cua ban la: ";
							cin >> chon_2;
							cin.ignore();
							switch (chon_2)
							{
							case 1:
							{
								if (point < 1500)
								{
									cout << "Diem cua ban khong du de doi voucher nay. Vui long xem lai diem va chon lai voucher khac." << endl;
									goto ag;
								}
								else
								{
									voucher = 20;
									cout << "Doi Voucher thanh cong. " << endl;
									point = point - 1500;
									discount = 0.2 * bill;
								}
								break;
							}
							case 2:
							{
								if (point < 5000)
								{
									cout << "Diem cua ban khong du de doi voucher nay. Vui long xem lai diem va chon lai voucher khac." << endl;
									goto ag;
								}
								else
								{
									voucher = 50;
									cout << "Doi Voucher thanh cong. " << endl;
									point = point - 5000;
									discount = 0.5 * bill;
								}
								break;
							}
							case 3:
							{
								if (diem < 10000)
								{
									cout << "Diem cua ban khong du de doi voucher nay. Vui long xem lai diem va chon lai voucher khac." << endl;
									goto ag;
								}
								else
								{
									voucher = 80;
									cout << "Doi Voucher thanh cong. " << endl;
									point = point - 10000;
									discount = 0.8 * bill;
								}
								break;
							}
							case 0:
							{
								voucher = 0;
								cout << "Khong doi voucher. " << endl;
								discount = 0;
								break;
							}
							default:
							{
								cout << "Ban da nhap sai. Xin moi nhap lai." << endl;
								goto again;
								break;
							}
							}
							point = point + (bill / 1000);
							(*itr).td_point = point;
							cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
							cout << "Tong tien:                " << PrintCurrencyRefund(bill) << endl;
							cout << "Diem hien tai cua ban la: " << PrintPoint(point0) << endl;
							cout << "Voucher:                  " << voucher << "%" << endl;
							cout << "Giam gia:                 " << PrintCurrencyRefund(discount) << endl;
							cout << "Diem sau khi mua hang la: " << PrintPoint(point) << endl;
							cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
							write.open("Tich Diem.txt");
							if (!write)
							{
								cout << "Khong the mo File de ghi. Vui long kiem tra lai. " << endl;
							}
							else
							{
								for (auto i = tichdiem.begin(); i != tichdiem.end(); ++i)
								{
									write << (*i).td_sdt << '-' << (*i).td_point << endl;
								}
							}
							write.close();
							break;
						}
					}
				}
				break;
			}
			case 2:
			{
			re_phone:
				cout << "Xin moi nhap so dien thoai dang ky: ";
				getline(cin, phonenumber);
				if (!check_sdt(phonenumber))
				{
					goto re_phone;
				}
				if (check_ExistPhonenumber(phonenumber))
				{
					cout << "So dien thoai da duoc dang ky. Vui long nhap so dien thoai khac. " << endl;
					goto re_phone;
				}
				cout << "------------------------------------------" << endl;
				cout << "Da dang ky so dien thoai tich diem thanh cong. " << endl;
				cout << "Diem hien tai cua ban la: " << point << endl;
				point0 = point;
				write.open("Tich Diem.txt", ios::app);
				if (!write)
				{
					cout << "Khong the ghi file. " << endl;
				}
				else
				{
					write << phonenumber << '-' << point << endl;
				}
				write.close();
			ag1:
				cout << "------------------------------------------" << endl;
				cout << "Cua hang co mot so uu dai sau, moi ban xem qua: " << endl;
			again2:
				cout << "~~~~~~~~~~" << endl;
				cout << "1. Voucher Giam gia 20% Hoa Don (1500 Diem). " << endl;
				cout << "2. Voucher Giam gia 50% Hoa Don (5000 Diem)." << endl;
				cout << "3. Voucher Giam gia 80% Hoa Don (8000 Diem)" << endl;
				cout << "0. Khong doi Voucher. " << endl;
				cout << "Lua chon cua ban la: ";
				cin >> chon_2;
				cin.ignore();
				switch (chon_2)
				{
				case 1:
				{
					if (point < 1500)
					{
						cout << "Diem cua ban khong du de doi voucher nay. Vui long xem lai diem va chon lai voucher khac." << endl;
						goto ag1;
					}
					else
					{
						voucher = 20;
						cout << "Doi Voucher thanh cong. " << endl;
						point = point - 1500;
						discount = 0.2 * bill;
					}
					break;
				}
				case 2:
				{
					if (point < 5000)
					{
						cout << "Diem cua ban khong du de doi voucher nay. Vui long xem lai diem va chon lai voucher khac." << endl;
						goto ag1;
					}
					else
					{
						voucher = 50;
						cout << "Doi Voucher thanh cong. " << endl;
						point = point - 5000;
						discount = 0.5 * bill;
					}
					break;
				}
				case 3:
				{
					if (diem < 10000)
					{
						cout << "Diem cua ban khong du de doi voucher nay. Vui long xem lai diem va chon lai voucher khac." << endl;
						goto ag1;
					}
					else
					{
						voucher = 80;
						cout << "Doi Voucher thanh cong. " << endl;
						point = point - 10000;
						discount = 0.8 * bill;
					}
					break;
				}
				case 0:
				{
					voucher = 0;
					cout << "Khong doi voucher. " << endl;
					discount = 0;
					break;
				}
				default:
				{
					cout << "Ban da nhap sai. Xin moi nhap lai." << endl;
					goto again2;
					break;
				}
				}
				point = point + (bill / 1000);
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << "Tong tien:                " << PrintCurrencyRefund(bill) << endl;
				cout << "Diem hien tai cua ban la: " << PrintPoint(point0) << endl;
				cout << "Voucher:                  " << voucher << "%" << endl;
				cout << "Giam gia:                 " << PrintCurrencyRefund(discount) << endl;
				cout << "Diem sau khi mua hang la: " << PrintPoint(point) << endl;
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				write.open("Tich Diem.txt");
				if (!write)
				{
					cout << "Khong the mo File de ghi. Vui long kiem tra lai. " << endl;
				}
				else
				{
					for (auto i = tichdiem.begin(); i != tichdiem.end(); ++i)
					{
						write << (*i).td_sdt << '-' << (*i).td_point << endl;
					}
					write << phonenumber << '-' << point << endl;
				}
				write.close();
				break;
			}
			default:
			{
				cout << "Ban da nhap sai. Xin moi nhap lai. " << endl;
				goto re_again1;
				break;
			}
			}
		}
		else if (chon_1 == 2)
		{
			cout << "Khong tich diem. " << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "Tong tien:                " << PrintCurrencyRefund(bill) << endl;
			discount = 0;
		}
		else
		{
			system("cls");
			cout << "Ban da nhap sai. Xin moi nhap lai." << endl;
			goto re_again;
		}
		return discount;
	}
	void XuatBill(int receive_money, bool online)
	{
		list <KhachHang> customer;
		KhachHang kh;
		system("cls");
		ifstream read;
		ofstream write;
		string date, day, time;
		int idbill = 0, locate = 0, table = 0, thungan = 0, number_dr = 0, total = 0, total_payment = 0, shipfee = 0, refund = 0;
		bool offline = 1;
		read.open("Billnow.txt", ios::out);
		if (!read)
		{
			cout << "Khong the doc File. " << endl;
		}
		else
		{
			customer.clear();
			string line;
			while (getline(read, line))
			{
				size_t pos = line.find(',');				//STT. 
				size_t pos1 = line.find(',', pos + 1);		//Drinks. 
				size_t pos2 = line.find(',', pos1 + 1);		//Money_drink.
				size_t pos3 = line.find(',', pos2 + 1);		//So luong.
				size_t pos4 = line.find('\n', pos3 + 1);	//Sum_money.
				kh.stt = stoi(line.substr(0, pos));
				kh.drinks = line.substr(pos + 1, pos1 - pos - 1);
				kh.money_dr = stoi(line.substr(pos1 + 1, pos2 - pos1 - 1));
				kh.sl = stoi(line.substr(pos2 + 1, pos3 - pos2 - 1));
				kh.sum_money = stoi(line.substr(pos3 + 1, pos4 - pos3 - 1));
				customer.push_back(kh);
			}
			read.close();
		}
		date = getTime();
		day = date.substr(0, 10);
		time = date.substr(11, 8);
		table = randTable();
		thungan = randThuNgan();
		idbill = randSHD();
		for (auto itr = customer.begin(); itr != customer.end(); ++itr)
		{
			number_dr += (*itr).sl;
			total_payment += (*itr).sum_money;
		}
		draw_line(120, '-');
		middle("S T A R B U C K ", 120, 1);
		middle("Address: Nguyen Van Cu, Quan 5, TP. HCM ", 120, 1);
		middle("Phone number: 0924.857.004 - 0938.287.413", 120, 1);
		if (online == 0)
		{
			middle("BILL ", 120, 1);
			write.open("CashStarbuck.txt", ios::app);
			if (!write)
			{
				cout << "Khong the mo File. Vui long kiem tra lai. " << endl;
			}
			else
			{
				write << idbill << "," << total_payment << "," << receive_money << "," << (receive_money - total_payment) << endl;
				write.close();
			}
		}
		else if (online == 1)
		{
			middle("STARBUCK ONLINE INVOICE ", 120, 1);
			offline = 0;
			table = 0;
			thungan = 0;
			shd = idbill;
		}
		middle("Invoice no : " + to_string(idbill), 120, 1);
		middle("Date: " + day, 120, 0);
		middle("Time: " + time, 120, 0);
		if (online == 0)
		{
			middle("Table number: " + to_string(table), 120, 0);
			middle("Cashier: Cashier " + to_string(thungan), 120, 0);
		}
		table_order(customer);
		draw_line(120, '-');
		Total("Number of drinks: ", 120, to_string(number_dr));
		cout << endl;
		total = total_payment;
		if (ship)
		{
			shipfee = 20000;
			Total("Total: ", 120, PrintCurrency(total));
			cout << endl;
			Total("Delivery Fee: ", 120, PrintCurrency(shipfee));
			cout << endl;
			total_payment += shipfee;
			receive_money += shipfee;
			Total("Total payment: ", 120, PrintCurrency(total_payment));
			cout << endl;
		}
		else
		{
			Total("Total payment: ", 120, PrintCurrency(total_payment));
			cout << endl;
		}
		Total("Money given by guests: ", 120, PrintCurrency(receive_money));
		cout << endl;
		refund = receive_money - total_payment;
		Total("Refunds: ", 120, PrintCurrencyRefund(refund));
		cout << endl;
		draw_line(120, '-');
		write.open("kiemke.txt", ios::app);
		if (!write)
		{
			cout << "Khong the mo File de ghi. Vui long thu lai. " << endl;
		}
		else
		{
			for (auto itr = customer.begin(); itr != customer.end(); ++itr)
			{
				write << idbill << ',' << (*itr).stt << ',' << (*itr).drinks << ',' << (*itr).money_dr << ',' << (*itr).sl << ',' << (*itr).sum_money << endl;
			}
		}
		write.close();
		write.open("Billnow.txt", ios::trunc);
		write.close();
		write.open("BillPaid.txt", ios::app);
		if (!write)
		{
			cout << "Khong the mo File de ghi. Vui long thu lai. " << endl;
		}
		else
		{
			write << idbill << ',' << offline << ',' << day << ',' << time << ',' << table << ',' << thungan << ',' << number_dr << ',' << total << ',' << shipfee << ',' << total_payment << ',' << receive_money << ',' << refund << endl;
		}
		write.close();
		middle("THANK YOU! SEE YOU AGAIN! ", 120, 1);
		middle("Powered by NEOSOFT ", 120, 1);
		draw_line(120, '=');
	}
protected:
	int shd = 0;
	void middle(string str, int size, bool middle) {
		if (middle) {
			string s = "";
			for (int i = 0; i < size / 2 - str.length() / 2; i++) {
				s = s + " ";
			}
			s = s + str;
			cout << left << " " << setw(size) << s << endl;
		}
		else
		{
			cout << left << " " << setw(size) << str << endl;
		}
	}
	void Wait()
	{
		cout << "----- 1 -----" << endl;
		Sleep(1000);
		cout << "----- 2 -----" << endl;
		Sleep(1000);
		cout << "----- 3 -----" << endl;
		Sleep(1000);
	}
	string ReceiveOrder()
	{
		int a, b, c;
		time_t now = time(0);
		tm* ltm = localtime(&now);
		int hour = ltm->tm_hour;
		int minute = ltm->tm_min;
	again_2:
		cout << "\t\t\t\tXIN MOI QUY KHACH CHON HINH THUC NHAN DON HANG " << endl;
		cout << "\t\t1: GIAO HANG TAN NOI (WITHIN 3M RADIUS - DELIVERY FEE: 20.000 VND) " << endl;
		cout << "\t\t2: LAY DON HANG TRUC TIEP TAI CUA HANG STARBUCK (WITHIN 1 HOUR)" << endl;
		cout << "\t\t\t\tLUA CHON CUA QUY KHACH LA: ";
		cin >> a;
		cin.ignore();
		switch (a)
		{
		case 1:
		{
		again:
			ship = 1;
			string newtime01, newtime02;
			int newminute01 = (minute + 30) % 60;
			int newhour01 = hour + ((minute + 30) / 60);
			int newminute02 = (minute + 45) % 60;
			int newhour02 = hour + ((minute + 45) / 60);
			newtime01 = timebill(newhour01, newminute01);
			newtime02 = timebill(newhour02, newminute02);
			return " DON HANG CUA QUY KHACH SE DUOC GIAO DEN TRONG KHOANG " + newtime01 + " - " + newtime02;
			break;
		}
		case 2:
		{
		again_1:
			cout << "\t\t\t\t 1: LAY HANG TRONG VONG 5 PHUT " << endl;
			cout << "\t\t\t\t 2: LAY HANG TRONG VONG 10 PHUT " << endl;
			cout << "\t\t\t\t 3: LAY HANG TRONG VONG 15 PHUT " << endl;
			cout << "\t\t\t\t 4: LAY HANG TRONG VONG 20 PHUT " << endl;
			cout << "\t\t\t\t 5: LAY HANG TRONG VONG 25 PHUT " << endl;
			cout << "\t\t\t\t 6: LAY HANG TRONG VONG 30 PHUT " << endl;
			cout << "\t\t\t\t 7: LAY HANG TRONG VONG 35 PHUT " << endl;
			cout << "\t\t\t\t 8: LAY HANG TRONG VONG 40 PHUT " << endl;
			cout << "\t\t\t\t 9: LAY HANG TRONG VONG 45 PHUT " << endl;
			cout << "\t\t\t\t10: LAY HANG TRONG VONG 50 PHUT " << endl;
			cout << "\t\t\t\t11: LAY HANG TRONG VONG 55 PHUT " << endl;
			cout << "\t\t\t\t12: LAY HANG TRONG VONG 1 TIENG " << endl;
			cout << "\t\t\t\tLUA CHON CUA QUY KHACH LA: ";
			cin >> c;
			cin.ignore();
			switch (c)
			{
			case 1:
			{
				cout << "\t\t\t\t LAY HANG TRONG VONG 5 PHUT " << endl;
				string newtime0;
				minute += 5;
				int newminute0 = (minute) % 60;
				int newhour0 = hour + (minute / 60);
				newtime0 = timebill(newhour0, newminute0);
				return " MOI QUY KHACH GHE QUA CUA HANG VAO LUC " + newtime0 + " DE NHAN DON HANG MA QUY KHACH DA DAT !";
				break;
			}
			case 2:
			{
				cout << "\t\t\t\t LAY HANG TRONG VONG 10 PHUT " << endl;
				string newtime1;
				minute += 10;
				int newminute1 = (minute) % 60;
				int newhour1 = hour + (minute / 60);
				newtime1 = timebill(newhour1, newminute1);
				return " MOI QUY KHACH GHE QUA CUA HANG VAO LUC " + newtime1 + " DE NHAN DON HANG MA QUY KHACH DA DAT !";
				break;
			}
			case 3:
			{
				cout << "\t\t\t\t LAY HANG TRONG VONG 15 PHUT " << endl;
				string newtime2;
				minute += 15;
				int newminute2 = (minute) % 60;
				int newhour2 = hour + (minute / 60);
				newtime2 = timebill(newhour2, newminute2);
				return " MOI QUY KHACH GHE QUA CUA HANG VAO LUC " + newtime2 + " DE NHAN DON HANG MA QUY KHACH DA DAT !";
				break;
			}
			case 4:
			{
				cout << "\t\t\t\t LAY HANG TRONG VONG 20 PHUT " << endl;
				string newtime3;
				minute += 20;
				int newminute3 = (minute) % 60;
				int newhour3 = hour + (minute / 60);
				newtime3 = timebill(newhour3, newminute3);
				return " MOI QUY KHACH GHE QUA CUA HANG VAO LUC " + newtime3 + " DE NHAN DON HANG MA QUY KHACH DA DAT !";
				break;
			}
			case 5:
			{
				cout << "\t\t\t\t LAY HANG TRONG VONG 25 PHUT " << endl;
				string newtime4;
				minute += 25;
				int newminute4 = (minute) % 60;
				int newhour4 = hour + (minute / 60);
				newtime4 = timebill(newhour4, newminute4);
				return " MOI QUY KHACH GHE QUA CUA HANG VAO LUC " + newtime4 + " DE NHAN DON HANG MA QUY KHACH DA DAT !";
				break;
			}
			case 6:
			{
				cout << "\t\t\t\t LAY HANG TRONG VONG 30 PHUT " << endl;
				string newtime5;
				minute += 30;
				int newminute5 = (minute) % 60;
				int newhour5 = hour + (minute / 60);
				newtime5 = timebill(newhour5, newminute5);
				return " MOI QUY KHACH GHE QUA CUA HANG VAO LUC " + newtime5 + " DE NHAN DON HANG MA QUY KHACH DA DAT !";
				break;
			}
			case 7:
			{
				cout << "\t\t\t\t LAY HANG TRONG VONG 35 PHUT " << endl;
				string newtime6;
				minute += 35;
				int newminute6 = (minute) % 60;
				int newhour6 = hour + (minute / 60);
				newtime6 = timebill(newhour6, newminute6);
				return " MOI QUY KHACH GHE QUA CUA HANG VAO LUC " + newtime6 + " DE NHAN DON HANG MA QUY KHACH DA DAT !";
				break;
			}
			case 8:
			{
				cout << "\t\t\t\t LAY HANG TRONG VONG 40 PHUT " << endl;
				string newtime7;
				minute += 40;
				int newminute7 = (minute) % 60;
				int newhour7 = hour + (minute / 60);
				newtime7 = timebill(newhour7, newminute7);
				return " MOI QUY KHACH GHE QUA CUA HANG VAO LUC " + newtime7 + " DE NHAN DON HANG MA QUY KHACH DA DAT !";
				break;
			}
			case 9:
			{
				cout << "\t\t\t\t LAY HANG TRONG VONG 45 PHUT " << endl;
				string newtime8;
				minute += 45;
				int newminute8 = (minute) % 60;
				int newhour8 = hour + (minute / 60);
				newtime8 = timebill(newhour8, newminute8);
				return " MOI QUY KHACH GHE QUA CUA HANG VAO LUC " + newtime8 + " DE NHAN DON HANG MA QUY KHACH DA DAT !";
				break;
			}
			case 10:
			{
				cout << "\t\t\t\t LAY HANG TRONG VONG 50 PHUT " << endl;
				string newtime9;
				minute += 50;
				int newminute9 = (minute) % 60;
				int newhour9 = hour + (minute / 60);
				newtime9 = timebill(newhour9, newminute9);
				return " MOI QUY KHACH GHE QUA CUA HANG VAO LUC " + newtime9 + " DE NHAN DON HANG MA QUY KHACH DA DAT !";
				break;
			}
			case 11:
			{
				cout << "\t\t\t\t LAY HANG TRONG VONG 55 PHUT " << endl;
				string newtime10;
				minute += 55;
				int newminute10 = (minute) % 60;
				int newhour10 = hour + (minute / 60);
				newtime10 = timebill(newhour10, newminute10);
				return " MOI QUY KHACH GHE QUA CUA HANG VAO LUC " + newtime10 + " DE NHAN DON HANG MA QUY KHACH DA DAT !";
				break;
			}
			case 12:
			{
				cout << "\t\t\t\t LAY HANG TRONG VONG 1 TIENG " << endl;
				string newtime11;
				minute += 60;
				int newminute11 = (minute) % 60;
				int newhour11 = hour + (minute / 60);
				newtime11 = timebill(newhour11, newminute11);
				return " MOI QUY KHACH GHE QUA CUA HANG VAO LUC " + newtime11 + " DE NHAN DON HANG MA QUY KHACH DA DAT !";
				break;
			}
			default:
			{
				cout << "QUY KHACH DA NHAP SAI ! VUI LONG NHAP LAI !" << endl;
				goto again_1;
				break;
			}
			}
			break;
		}
		default:
		{
			cout << "\t\t\t\tQUY KHACH DA NHAP SAI ! VUI LONG NHAP LAI !" << endl;
			system("cls");
			goto again_2;
			break;
		}
		}
	}
	bool OrderAndPaymentLive()
	{
		if (check_timeOff())
		{
			Order();
			int pay = 0;
		re_pay:
			cout << "Moi ban chon hinh thuc thanh toan: " << endl;
			cout << "1. Tien mat" << "\t\t\t" << "2. Chuyen khoan" << endl;
			cin >> pay;
			cin.ignore();
			if (pay == 1)
			{
			re_recei_mon:
				int receive_money = 0, discount = 0;
				cout << "Thanh toan bang tien mat. " << endl;
				discount = tichdiem(sum_mon);
				sum_mon -= discount;
				cout << "Tong thanh toan: " << PrintCurrency(sum_mon) << endl;
				cout << "Nhap tien nhan tu khach: ";
				cin >> receive_money;
				if (receive_money < 30000 || receive_money % 5000 != 0 || receive_money < sum_mon)
				{
					cout << "So tien thanh toan khong du hoac chua hop le. Vui long kiem tra lai tien thanh toan. " << endl;
					goto re_recei_mon;
				}
				cout << "Tien khach dua: " << PrintCurrency(receive_money) << endl;
				cout << "Tien tra lai: " << PrintCurrencyRefund(receive_money - sum_mon) << endl;
				cout << endl << "DA THANH TOAN THANH CONG. " << endl;
				sum_mon = 0;
				cout << "Vui long cho vai giay de xuat hoa don. " << endl;
				Loading();
				XuatBill(receive_money, 0);
			}
			else if (pay == 2)
			{
				ofstream write;
				int ck = 0, discount = 0;
				discount = tichdiem(sum_mon);
				sum_mon -= discount;
				cout << "Tong thanh toan: " << PrintCurrency(sum_mon) << endl;
			re_payck:
				cout << "Thanh toan bang hinh thuc chuyen khoan. Vui long chon cach thanh toan. " << endl;
				cout << "1) Momo: 0924857004 hoac 0938287413" << endl << "2) BIDV: 6701389344 hoac MBBANK: 518887979" << endl;
				cin >> ck;
				cin.ignore();
				if (ck == 1)
				{
					string sdt;
				re_phone:
					cout << "Vui long nhap so dien thoai Momo cua ban de chung toi tien hanh xac nhan thanh toan: " << endl;
					cin >> sdt;
					cin.ignore();
					if (!CheckPhoneNumber(sdt))
					{
						cout << "So dien thoai khong hop le. Vui long nhap lai. " << endl;
						goto re_phone;
					}
					cout << "Dang tien hanh xac nhan thanh toan. Vui long cho vai giay. " << endl;
					Loading();
					cout << endl << "DA THANH TOAN THANH CONG. " << endl;
					cout << "Vui long cho vai giay de xuat hoa don. " << endl;
					Loading();
					XuatBill(sum_mon, 0);
					write.open("MomoStarbuck.txt", ios::app);
					if (write)
					{
						write << sum_mon << ',' << sdt << ',' << shd << endl;
					}
					else
					{
						cout << "Khong the mo File. Vui long kiem tra lai. " << endl;
					}
					write.close();
					shd = 0;
					sum_mon = 0;
				}
				else if (ck == 2)
				{
				re_paycks:
					string bank, stk;
					int choose_bank = 0;
					cout << "Vui long chon ngan hang ban da su dung thanh toan (dua theo so 1 -> 10 theo danh sach duoi day): " << endl;
					cout << "1) Vietcombank" << "\t\t\t\t\t" << " 2) Vietinbank" << endl;
					cout << "3) Techcombank" << "\t\t\t\t\t" << " 4) MBbank    " << endl;
					cout << "5) VPbank     " << "\t\t\t\t\t" << " 6) ACB       " << endl;
					cout << "7) BIDV       " << "\t\t\t\t\t" << " 8) TPbank    " << endl;
					cout << "9) VIB        " << "\t\t\t\t\t" << "10) Agribank  " << endl;
					cout << "Ngan hang ban da su dung de thanh toan la: ";
					cin >> choose_bank;
					switch (choose_bank)
					{
					case 1:
					{
						bank = "Vietcombank";
						break;
					}
					case 2:
					{
						bank = "Vietinbank";
						break;
					}
					case 3:
					{
						bank = "Techcombank";
						break;
					}
					case 4:
					{
						bank = "MBbank";
						break;
					}
					case 5:
					{
						bank = "VPbank";
						break;
					}
					case 6:
					{
						bank = "ACB";
						break;
					}
					case 7:
					{
						bank = "BIDV";
						break;
					}
					case 8:
					{
						bank = "TPbank";
						break;
					}
					case 9:
					{
						bank = "VIB";
						break;
					}
					case 10:
					{
						bank = "Agribank";
						break;
					}
					default:
					{
						cout << "Lua chon cua ban la khong hop le. Vui long chon lai. " << endl;
						goto re_payck;
					}
					}
					cout << bank << endl;
					cout << "Vui long nhap so tai khoan ngan hang cua ban de chung toi tien hanh xac nhan thanh toan: " << endl;
					cin >> stk;
					cin.ignore();
					cout << "Dang tien hanh xac nhan thanh toan. Vui long cho vai giay. " << endl;
					Loading();
					cout << endl << "DA THANH TOAN THANH CONG. " << endl;
					cout << "Vui long cho vai giay de xuat hoa don. " << endl;
					Loading();
					XuatBill(sum_mon, 0);
					write.open("BankStarbuck.txt", ios::app);
					if (write)
					{
						write << sum_mon << ',' << stk << ',' << bank << ',' << shd << endl;
					}
					else
					{
						cout << "Khong the mo File. Vui long kiem tra lai. " << endl;
					}
					write.close();
					shd = 0;
					sum_mon = 0;
				}
				else
				{
					cout << "Lua chon cua ban khong hop le. Vui long chon lai. " << endl;
					goto re_paycks;
				}
			}
			else
			{
				cout << "Ban da lua chon khong hop le. Vui long chon lai. " << endl;
				goto re_pay;
			}
			return true;
		}
		else
		{
			cout << "Quay lai Cua hang Starbuck sau 3 giay. " << endl;
			Wait();
			return false;
		}
	}
	bool OrderAndPaymentOnline()
	{
		if (check_timeOnl())
		{
			int a = 0, b = 0, discount = 0;
			time_t now = time(0);
			tm* ltm = localtime(&now);
			string recei_order = "";
			ofstream write;
			Order();
			discount = tichdiem(sum_mon);
			sum_mon -= discount;
			cout << "Tong thanh toan: " << PrintCurrency(sum_mon) << endl;
			recei_order = ReceiveOrder();
		again_2:
			cout << "                           ----------------------------------------------------------------" << endl;
			cout << "                           |         XIN MOI CHON HINH THUC CHUYEN KHOAN:                 |" << endl;
			cout << "                           |      NHAN PHIM 1: THANH TOAN BANG VI DIEN TU MOMO            |" << endl;
			cout << "                           |      NHAN PHIM 2: THANH TOAN BANG CHUYEN KHOAN NGAN HANG     |" << endl;
			cout << "                           ----------------------------------------------------------------" << endl;
			cout << "LUA CHON CUA QUY KHACH LA: ";
			cin >> a;
			cin.ignore();
			switch (a)
			{
			case 1:
			{
				string sdt;
			re_phone:
				cout << " Momo: 0924857004 hoac 0938287413" << endl;
				Sleep(2000);
				cout << "Vui long nhap so dien thoai Momo cua ban de chung toi tien hanh xac nhan thanh toan: " << endl;
				cin >> sdt;
				cin.ignore();
				if (!CheckPhoneNumber(sdt))
				{
					cout << "So dien thoai khong hop le. Vui long nhap lai. " << endl;
					goto re_phone;
				}
			again_1:
				cout << endl;
				cout << "     \t\t\t\t    XAC THUC GIAO DICH ! " << endl;
				cout << "\t\t\t\tNHAN PHIM 1: THUC HIEN GIAO DICH   " << endl;
				cout << "\t\t\t\tNHAN PHIM 2: HUY GIAO DICH " << endl;
				cout << "\t\t\t\tLUA CHON CUA QUY KHACH LA: ";
				cin >> b;
				switch (b)
				{
				case 1:
				{
					cout << "Dang tien hanh xac nhan thanh toan. Vui long cho vai giay. " << endl;
					Loading();
					cout << endl << "DA THANH TOAN THANH CONG. " << endl;
					write.open("MomoStarbuck.txt", ios::app);
					if (write)
					{
						write << sum_mon << ',' << sdt << endl;
					}
					else
					{
						cout << "Khong the mo File. Vui long kiem tra lai. " << endl;
					}
					write.close();
					cout << "Vui long cho vai giay de xuat hoa don ONLINE. " << endl;
					Loading();
					XuatBill(sum_mon, 1);
					cout << recei_order << endl;
					write.open("MomoStarbuck.txt", ios::app);
					if (write)
					{
						write << sum_mon << ',' << sdt << ',' << shd << endl;
					}
					else
					{
						cout << "Khong the mo File. Vui long kiem tra lai. " << endl;
					}
					write.close();
					shd = 0;
					sum_mon = 0;
					break;
				}
				case 2:
				{
					cout << "\t\t\t\t\t\t\t\tHUY GIAO DICH " << endl;
					cout << "\t\t\t\tQUAY TRO LAI CHON HINH THUC CHUYEN KHOAN! " << endl;
					goto again_2;
					break;
				}
				default:
				{
					cout << "\t\t\t\QUY KHACH DA NHAP SAI ! VUI LONG NHAP LAI !" << endl << endl;
					goto again_1;
					break;
				}
				}
				break;
			}
			case 2:
			{
				ofstream write;
				int ck = 0;
			again_3:
				cout << "BIDV: 6701389344 hoac MBBANK: 518887979" << endl;
				Sleep(2000);
				string bank, stk;
				int choose_bank = 0;
				cout << "Vui long chon ngan hang ban da su dung thanh toan (dua theo so 1 -> 10 theo danh sach duoi day): " << endl;
				cout << "1) Vietcombank" << "\t\t\t\t\t" << " 2) Vietinbank" << endl;
				cout << "3) Techcombank" << "\t\t\t\t\t" << " 4) MBbank    " << endl;
				cout << "5) VPbank     " << "\t\t\t\t\t" << " 6) ACB       " << endl;
				cout << "7) BIDV       " << "\t\t\t\t\t" << " 8) TPbank    " << endl;
				cout << "9) VIB        " << "\t\t\t\t\t" << "10) Agribank  " << endl;
				cout << "Ngan hang ban da su dung de thanh toan la: ";
				cin >> choose_bank;
				switch (choose_bank)
				{
				case 1:
				{
					bank = "Vietcombank";
					break;
				}
				case 2:
				{
					bank = "Vietinbank";
					break;
				}
				case 3:
				{
					bank = "Techcombank";
					break;
				}
				case 4:
				{
					bank = "MBbank";
					break;
				}
				case 5:
				{
					bank = "VPbank";
					break;
				}
				case 6:
				{
					bank = "ACB";
					break;
				}
				case 7:
				{
					bank = "BIDV";
					break;
				}
				case 8:
				{
					bank = "TPbank";
					break;
				}
				case 9:
				{
					bank = "VIB";
					break;
				}
				case 10:
				{
					bank = "Agribank";
					break;
				}
				default:
				{
					cout << "Lua chon cua ban la khong hop le. Vui long chon lai. " << endl;
					goto again_3;
				}
				}
				cout << bank << endl;
				cout << "Vui long nhap so tai khoan ngan hang cua ban de chung toi tien hanh xac nhan thanh toan: " << endl;
				cin >> stk;
				cin.ignore();
			again_4:
				cout << endl;
				cout << "     \t\t\t\t    XAC THUC GIAO DICH ! " << endl;
				cout << "\t\t\t\tNHAN PHIM 1: THUC HIEN GIAO DICH   " << endl;
				cout << "\t\t\t\tNHAN PHIM 2: HUY GIAO DICH " << endl;
				cout << "\t\t\t\tLUA CHON CUA QUY KHACH LA: ";
				cin >> b;
				switch (b)
				{
				case 1:
				{
					cout << "Dang tien hanh xac nhan thanh toan. Vui long cho vai giay. " << endl;
					Loading();
					cout << endl << "DA THANH TOAN THANH CONG. " << endl;
					cout << "Vui long cho vai giay de xuat hoa don. " << endl;
					Loading();
					XuatBill(sum_mon, 1);
					cout << recei_order << endl;
					write.open("BankStarbuck.txt", ios::app);
					if (write)
					{
						write << sum_mon << ',' << stk << ',' << bank << ',' << shd << endl;
					}
					else
					{
						cout << "Khong the mo File. Vui long kiem tra lai. " << endl;
					}
					write.close();
					shd = 0;
					sum_mon = 0;
					break;
				}
				case 2:
				{
					cout << "\t\t\t\t\t\t\t\tHUY GIAO DICH " << endl;
					cout << "\t\t\t\tQUAY TRO LAI CHON HINH THUC CHUYEN KHOAN! " << endl;
					goto again_2;
					break;
				}
				default:
				{
					cout << "QUY KHACH DA NHAP SAI ! VUI LONG NHAP LAI !" << endl;
					goto again_4;
					break;
				}
				}
				break;
			}
			default:
			{
				cout << "QUY KHACH DA NHAP SAI ! VUI LONG NHAP LAI !" << endl;
				goto again_2;
				break;
			}
			}
			return true;
		}
		else
		{
			cout << "Quay lai Cua hang Starbuck sau 3 giay. " << endl;
			Wait();
			return false;
		}
	}
public:
	void WelcometoStarbuck()
	{
		int option = 0;
	re_option:
		system("cls");
		cout << "\t\t\t\t\t\t CHAO MUNG BAN DEN VOI CUA HANG STARBUCK CUA CHUNG TOI " << endl;
		cout << "Neu ban muon order vui long chon 1 trong cac thao tac sau: " << endl;
		draw_line(123, '-');
		format("1: Xem Menu cua quan Starbuck.          ", 120, 1, 1);
		cout << endl;
		format("2: Goi mon truc tiep tai quan Starbuck. ", 120, 1, 1);
		cout << endl;
		format("3: Goi mon cua quan Starbuck truc tuyen.", 120, 1, 1);
		cout << endl;
		format("0: Roi cua hang.                        ", 120, 1, 1);
		cout << endl;
		draw_line(123, '-');
		cout << "Lua chon cua ban la: ";
		cin >> option;
		cin.ignore();
		switch (option)
		{
		case 1:
		{
			Menu();
			system("pause");
			goto re_option;
			break;
		}
		case 2:
		{
			if (!OrderAndPaymentLive())
			{
				goto re_option;
			}
			else
			{
				system("pause");
			}
			break;
		}
		case 3:
		{
			if (OrderAndPaymentOnline())
			{
				system("pause");
			}
			else
			{
				goto re_option;
			}
			break;
		}
		case 0:
		{
			system("cls");
			cout << "Cam on ban da den voi quan Starbuck cua chung toi. Hen gap lai ban. " << endl;
			system("pause");
			break;
		}
		default:
		{
			cout << "Lua chon cua ban la khong hop le. Vui long chon lai.\nQuay lai Starbuck sau 3 giay. " << endl;
			Wait();
			goto re_option;
		}
		}
	}
};
#endif CUSTOMER