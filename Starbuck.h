#pragma once
#ifndef STARBUCK
#define STARBUCK
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <ctime>
#include <Windows.h>
#include <ctime>
#include <string>
#include <list>
#include <fstream>
#pragma warning (disable: 4996)
#pragma warning (disable: 4267)
#pragma warning (disable: 4244)
#pragma warning (disable: 4101)
#pragma warning (disable: 4102)
#pragma warning (disable: 4109)
#pragma warning (disable: 4129)
#pragma warning (disable: 4715)
#pragma warning (disable: 26495)
#pragma warning (disable: 26451)
using namespace std;
class Starbuck
{
private:
	int stt = 0;
	string drinks = "";
	int money_dr = 0;
	int sl = 0;
	int sum_money = 0;
	string ExchangeDrinks(int stt)
	{
		string drink = "";
		switch (stt)
		{
		case 1: {
			drink = "Coffee";
			break;
		}
		case 2: {
			drink = "Caramel";
			break;
		}
		case 3: {
			drink = "Mocha";
			break;
		}
		case 4: {
			drink = "Espresso";
			break;
		}
		case 5: {
			drink = "Almondmilk Hazelnut";
			break;
		}
		case 6: {
			drink = "Almondmilk Hazelnut Cream";
			break;
		}
		case 7: {
			drink = "Vanilla Cream";
			break;
		}
		case 8: {
			drink = "Caramel Cream";
			break;
		}
		case 9: {
			drink = "Strawberry & Cream";
			break;
		}
		case 10: {
			drink = "Java Chip";
			break;
		}
		case 11: {
			drink = "Green Tea Cream";
			break;
		}
		case 12: {
			drink = "Chocolate Chip Cream";
			break;
		}
		case 13: {
			drink = "Mango Passion Fruit";
			break;
		}
		case 14: {
			drink = "Raspberry Black Currant";
			break;
		}
		case 15: {
			drink = "Matcha & Espresso Fusion (Hot)";
			break;
		}
		case 16: {
			drink = "Matcha & Espresso Fusion (Iced)";
			break;
		}
		case 17: {
			drink = "Black Tea with Ruby Grapefruit & Honey (Hot)";
			break;
		}
		case 18: {
			drink = "Black Tea with Ruby Grapefruit & Honey (Iced)";
			break;
		}
		case 19: {
			drink = "Iced Shaken Hibiscus Tea with Pomegranate Pearls";
			break;
		}
		case 20: {
			drink = "Iced Shaken Strawberry Green Tea Lemonade";
			break;
		}
		case 21: {
			drink = "Chai Tea Latte";
			break;
		}
		case 22: {
			drink = "English Breakfast Tea Latte";
			break;
		}
		case 23: {
			drink = "Green Tea Latte";
			break;
		}
		case 24: {
			drink = "Earl Grey Tea Latte";
			break;
		}
		case 25: {
			drink = "Black Iced Shaken Lemon Tea";
			break;
		}
		case 26: {
			drink = "Green Iced Shaken Lemon Tea";
			break;
		}
		case 27: {
			drink = "Hibiscus Iced Shaken Lemon Tea";
			break;
		}
		case 28: {
			drink = "Earl Grey Black Tea";
			break;
		}
		case 29: {
			drink = "English Breakfast Black Tea";
			break;
		}
		case 30: {
			drink = "Golden Monkey Black Tea";
			break;
		}
		case 31: {
			drink = "Teavana Emperor's Cloud & Mist";
			break;
		}
		case 32: {
			drink = "Mint Citrus";
			break;
		}
		case 33: {
			drink = "Zen Clouds Oolong";
			break;
		}
		case 34: {
			drink = "Hibiscus Caffeine - Free Herbal Tea";
			break;
		}
		case 35: {
			drink = "Chamomile Caffeine - Free Herbal Tea";
			break;
		}
		case 36: {
			drink = "Signature Hot Chocolate";
			break;
		}
		case 37: {
			drink = "Steamed Milk";
			break;
		}
		case 38: {
			drink = "Soy Milk";
			break;
		}
		case 39: {
			drink = "Crow Brew";
			break;
		}
		case 40: {
			drink = "Vanilla Sweet Cream Cold Brew";
			break;
		}
		case 41: {
			drink = "Caffe Latte";
			break;
		}
		case 42: {
			drink = "Cappuccino";
			break;
		}
		case 43: {
			drink = "Flat White";
			break;
		}
		case 44: {
			drink = "Almondmilk Hazelnut Latte";
			break;
		}
		case 45: {
			drink = "Caffe Mocha";
			break;
		}
		case 46: {
			drink = "Caramel Macchiato";
			break;
		}
		case 47: {
			drink = "Cold Foam Iced Espresso";
			break;
		}
		case 48: {
			drink = "Caffe Americano";
			break;
		}
		case 49: {
			drink = "Asian Dolce Latte";
			break;
		}
		case 50: {
			drink = "Espresso";
			break;
		}
		case 51: {
			drink = "Con Panna";
			break;
		}
		case 52: {
			drink = "Macchiato";
			break;
		}
		case 53: {
			drink = "Freshly Brewed Coffee";
			break;
		}
		case 54: {
			drink = "Iced Dolce Misto";
			break;
		}
		}
		return drink;
	}
	string STT(int i)
	{
		if (i < 10)
		{
			return "0" + to_string(i);
		}
		else
		{
			return to_string(i);
		}
	}
	int ExchangePrice(int stt, string size)
	{
		int price = 0;
		if (stt == 1)
		{
			if (size == "M")
			{
				price = 80000;
			}
			else if (size == "L")
			{
				price = 90000;
			}
			else if (size == "XL")
			{
				price = 100000;
			}
		}
		else if (stt >= 2 && stt <= 9)
		{
			if (size == "M")
			{
				price = 90000;
			}
			else if (size == "L")
			{
				price = 100000;
			}
			else if (size == "XL")
			{
				price = 110000;
			}
		}
		else if (stt >= 10 && stt <= 12)
		{
			if (size == "M")
			{
				price = 95000;
			}
			else if (size == "L")
			{
				price = 105000;
			}
			else if (size == "XL")
			{
				price = 115000;
			}
		}
		else if (stt >= 13 && stt <= 14)
		{
			if (size == "M")
			{
				price = 80000;
			}
			else if (size == "L")
			{
				price = 90000;
			}
			else if (size == "XL")
			{
				price = 100000;
			}
		}
		else if (stt >= 15 && stt <= 16)
		{
			if (size == "S")
			{
				price = 65000;
			}
			else if (size == "M")
			{
				price = 75000;
			}
			else if (size == "L")
			{
				price = 85000;
			}
		}
		else if (stt >= 17 && stt <= 18)
		{
			if (size == "S")
			{
				price = 60000;
			}
			else if (size == "M")
			{
				price = 70000;
			}
			else if (size == "L")
			{
				price = 80000;
			}
		}
		else if (stt >= 19 && stt <= 20)
		{
			if (size == "S")
			{
				price = 0;
			}
			else if (size == "M")
			{
				price = 70000;
			}
			else if (size == "L")
			{
				price = 85000;
			}
		}
		else if (stt >= 21 && stt <= 24)
		{
			if (size == "S")
			{
				price = 60000;
			}
			else if (size == "M")
			{
				price = 70000;
			}
			else if (size == "L")
			{
				price = 80000;
			}
		}
		else if (stt >= 25 && stt <= 27)
		{
			if (size == "S")
			{
				price = 0;
			}
			else if (size == "M")
			{
				price = 65000;
			}
			else if (size == "L")
			{
				price = 75000;
			}
		}
		else if (stt >= 28 && stt <= 35)
		{
			if (size == "S")
			{
				price = 45000;
			}
			else if (size == "M")
			{
				price = 55000;
			}
			else if (size == "L")
			{
				price = 65000;
			}
		}
		else if (stt == 36)
		{
			if (size == "S")
			{
				price = 60000;
			}
			else if (size == "M")
			{
				price = 70000;
			}
			else if (size == "L")
			{
				price = 80000;
			}
		}
		else if (stt >= 37 && stt <= 38)
		{
			if (size == "S")
			{
				price = 30000;
			}
			else if (size == "M")
			{
				price = 40000;
			}
			else if (size == "L")
			{
				price = 50000;
			}
		}
		else if (stt == 39)
		{
			if (size == "S")
			{
				price = 0;
			}
			else if (size == "M")
			{
				price = 65000;
			}
			else if (size == "L")
			{
				price = 75000;
			}
		}
		else if (stt == 40)
		{
			if (size == "S")
			{
				price = 0;
			}
			else if (size == "M")
			{
				price = 70000;
			}
			else if (size == "L")
			{
				price = 80000;
			}
		}
		else if (stt >= 41 && stt <= 42)
		{
			if (size == "S")
			{
				price = 60000;
			}
			else if (size == "M")
			{
				price = 70000;
			}
			else if (size == "L")
			{
				price = 80000;
			}
		}
		else if (stt == 43)
		{
			if (size == "S")
			{
				price = 65000;
			}
			else if (size == "M")
			{
				price = 75000;
			}
			else if (size == "L")
			{
				price = 85000;
			}
		}
		else if (stt >= 44 && stt <= 46)
		{
			if (size == "S")
			{
				price = 70000;
			}
			else if (size == "M")
			{
				price = 80000;
			}
			else if (size == "L")
			{
				price = 90000;
			}
		}
		else if (stt == 47)
		{
			if (size == "S")
			{
				price = 0;
			}
			else if (size == "M")
			{
				price = 65000;
			}
			else if (size == "L")
			{
				price = 75000;
			}
		}
		else if (stt == 48)
		{
			if (size == "S")
			{
				price = 50000;
			}
			else if (size == "M")
			{
				price = 60000;
			}
			else if (size == "L")
			{
				price = 70000;
			}
		}
		else if (stt == 49)
		{
			if (size == "S")
			{
				price = 65000;
			}
			else if (size == "M")
			{
				price = 75000;
			}
			else if (size == "L")
			{
				price = 85000;
			}
		}
		else if (stt == 50)
		{
			if (size == "S")
			{
				price = 40000;
			}
			else if (size == "M")
			{
				price = 55000;
			}
			else if (size == "L")
			{
				price = 0;
			}
		}
		else if (stt >= 51 && stt <= 52)
		{
			if (size == "S")
			{
				price = 50000;
			}
			else if (size == "M")
			{
				price = 60000;
			}
			else if (size == "L")
			{
				price = 0;
			}
		}
		else if (stt == 53)
		{
			if (size == "S")
			{
				price = 45000;
			}
			else if (size == "M")
			{
				price = 55000;
			}
			else if (size == "L")
			{
				price = 65000;
			}
		}
		else if (stt == 54)
		{
			if (size == "S")
			{
				price = 0;
			}
			else if (size == "M")
			{
				price = 60000;
			}
			else if (size == "L")
			{
				price = 70000;
			}
		}
		return price;
	}
protected:
	int sum_mon = 0;
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
	string PrintCurrency(long long money) {
		if (money == 0)
		{
			return "X";
		}
		else
		{
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
	}
	string PrintCurrencyRefund(long long money) {
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
	void Frappucino()
	{
		draw_line(149, '-');
		format(" F R A P P U C I N O ", 146, 1, 1);
		cout << endl;
		format(" BLENDED BEVERAGES ", 146, 1, 1);
		cout << endl;
		draw_line(149, '~');
		format("STT ", 6, 0, 1);
		format("DRINKS ", 72, 0, 1);
		format("TALL (M, 12oz) ", 20, 0, 1);
		format("GRANDE (L, 16oz) ", 20, 0, 1);
		format("VENTI (XL, 20oz) ", 20, 1, 1);
		cout << endl;
		draw_line(149, '-');
		format("Frappuccino - Blended Beverage ", 80, 1, 1);
		cout << endl;
		draw_line(149, '-');;
		for (int i = 1; i <= 12; i++)
		{
			format((STT(i)), 6, 0, 1);
			format((ExchangeDrinks(i)), 72, 0, 0);
			format((PrintCurrency(ExchangePrice(i, "M")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "XL")) + " "), 20, 1, 1);
			cout << endl;
		}
		draw_line(149, '-');
		format("Blended Juice Drinks ", 80, 1, 1);
		cout << endl;
		draw_line(149, '-');
		for (int i = 13; i <= 14; i++)
		{
			format((STT(i)), 6, 0, 1);
			format((ExchangeDrinks(i)), 72, 0, 0);
			format((PrintCurrency(ExchangePrice(i, "M")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "XL")) + " "), 20, 1, 1);
			cout << endl;
		}
		draw_line(149, '-');
	}
	void TeavanaTea()
	{
		draw_line(149, '-');
		format(" T E A V A N A T E A S ", 146, 1, 1);
		cout << endl;
		draw_line(149, '~');
		format("STT ", 6, 0, 1);
		format("DRINKS ", 50, 0, 1);
		format("SHORT (S, 8oz) ", 20, 0, 1);
		format("TALL (M, 12oz) ", 20, 0, 1);
		format("GRANDE (L, 16oz) ", 20, 0, 1);
		format("VENTI (XL, 20oz) ", 20, 1, 1);
		cout << endl;
		draw_line(149, '-');
		format("Signature Tea Beverages ", 58, 1, 1);
		cout << endl;
		draw_line(149, '-');
		for (int i = 15; i <= 20; i++)
		{
			format((STT(i)), 6, 0, 1);
			format((ExchangeDrinks(i)), 50, 0, 0);
			format((PrintCurrency(ExchangePrice(i, "S")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "M")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L") + 10000) + " "), 20, 1, 1);
			cout << endl;
		}
		draw_line(149, '-');
		format("Tea Lattes ", 58, 1, 1);
		cout << endl;
		draw_line(149, '-');
		for (int i = 21; i <= 24; i++)
		{
			format((STT(i)), 6, 0, 1);
			format((ExchangeDrinks(i)), 50, 0, 0);
			format((PrintCurrency(ExchangePrice(i, "S")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "M")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L") + 10000) + " "), 20, 1, 1);
			cout << endl;
		}
		draw_line(149, '-');
		format("Iced Shaken Lemon Tea ", 58, 1, 1);
		cout << endl;
		draw_line(149, '-');
		for (int i = 25; i <= 27; i++)
		{
			format((STT(i)), 6, 0, 1);
			format((ExchangeDrinks(i)), 50, 0, 0);
			format((PrintCurrency(ExchangePrice(i, "S")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "M")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L") + 10000) + " "), 20, 1, 1);
			cout << endl;
		}
		draw_line(149, '-');
		format("Black Tea ", 58, 1, 1);
		cout << endl;
		draw_line(149, '-');
		for (int i = 28; i <= 30; i++)
		{
			format((STT(i)), 6, 0, 1);
			format((ExchangeDrinks(i)), 50, 0, 0);
			format((PrintCurrency(ExchangePrice(i, "S")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "M")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L") + 10000) + " "), 20, 1, 1);
			cout << endl;
		}
		draw_line(149, '-');
		format("Green & White Tea ", 58, 1, 1);
		cout << endl;
		draw_line(149, '-');
		for (int i = 31; i <= 33; i++)
		{
			format((STT(i)), 6, 0, 1);
			format((ExchangeDrinks(i)), 50, 0, 0);
			format((PrintCurrency(ExchangePrice(i, "S")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "M")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L") + 10000) + " "), 20, 1, 1);
			cout << endl;
		}
		draw_line(149, '-');
		format("Caffeine - Free Herbal Tea ", 58, 1, 1);
		cout << endl;
		draw_line(149, '-');
		for (int i = 34; i <= 35; i++)
		{
			format((STT(i)), 6, 0, 1);
			format((ExchangeDrinks(i)), 50, 0, 0);
			format((PrintCurrency(ExchangePrice(i, "S")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "M")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L") + 10000) + " "), 20, 1, 1);
			cout << endl;
		}
		draw_line(149, '-');
		format("Chocolate & Classics ", 58, 1, 1);
		cout << endl;
		draw_line(149, '-');
		for (int i = 36; i <= 38; i++)
		{
			format((STT(i)), 6, 0, 1);
			format((ExchangeDrinks(i)), 50, 0, 0);
			format((PrintCurrency(ExchangePrice(i, "S")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "M")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L") + 10000) + " "), 20, 1, 1);
			cout << endl;
		}
		draw_line(149, '-');
	}
	void ColdBrewandEspresso()
	{
		draw_line(149, '-');
		format(" C O L D B R E W ", 146, 1, 1);
		cout << endl;
		draw_line(149, '~');
		format("STT ", 6, 0, 1);
		format("DRINKS ", 50, 0, 1);
		format("SHORT (S, 8oz) ", 20, 0, 1);
		format("TALL (M, 12oz) ", 20, 0, 1);
		format("GRANDE (L, 16oz) ", 20, 0, 1);
		format("VENTI (XL, 20oz) ", 20, 1, 1);
		cout << endl;
		draw_line(149, '-');
		for (int i = 39; i <= 40; i++)
		{
			format((STT(i)), 6, 0, 1);
			format((ExchangeDrinks(i)), 50, 0, 0);
			format((PrintCurrency(ExchangePrice(i, "S")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "M")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L") + 10000) + " "), 20, 1, 1);
			cout << endl;
		}
		draw_line(149, '-');
		format(" E S P R E S S O & C O F F E E ", 146, 1, 1);
		cout << endl;
		draw_line(149, '~');
		format("STT ", 6, 0, 1);
		format("DRINKS ", 50, 0, 1);
		format("SHORT (S, 8oz) ", 20, 0, 1);
		format("TALL (M, 12oz) ", 20, 0, 1);
		format("GRANDE (L, 16oz) ", 20, 0, 1);
		format("VENTI (XL, 20oz) ", 20, 1, 1);
		cout << endl;
		draw_line(149, '-');
		format("Espresso Beverages ", 58, 1, 1);
		cout << endl;
		draw_line(149, '-');
		for (int i = 41; i <= 52; i++)
		{
			format((STT(i)), 6, 0, 1);
			format((ExchangeDrinks(i)), 50, 0, 0);
			format((PrintCurrency(ExchangePrice(i, "S")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "M")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L")) + " "), 20, 0, 1);
			if (i < 50)
			{
				format((PrintCurrency(ExchangePrice(i, "L") + 10000) + " "), 20, 1, 1);
				cout << endl;
			}
			else
			{
				format((PrintCurrency(ExchangePrice(i, "L") + 0) + " "), 20, 1, 1);
				cout << endl;
			}
		}
		draw_line(149, '-');
		format("Coffee ", 58, 1, 1);
		cout << endl;
		draw_line(149, '-');
		for (int i = 53; i <= 54; i++)
		{
			format((STT(i)), 6, 0, 1);
			format((ExchangeDrinks(i)), 50, 0, 0);
			format((PrintCurrency(ExchangePrice(i, "S")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "M")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L")) + " "), 20, 0, 1);
			format((PrintCurrency(ExchangePrice(i, "L") + 10000) + " "), 20, 1, 1);
			cout << endl;
		}
		draw_line(149, '-');
	}
	void Menu()
	{
		Frappucino();
		TeavanaTea();
		ColdBrewandEspresso();
	}
	int ChooseSize(int stt)
	{
	re_choose:
		int n = 0, tien_size = 0;
		cout << "1. Size S (SHORT)\t\t\t" << "2. Size M (TALL)" << endl;
		cout << "3. Size L (GRANDE)\t\t\t" << "4. Size XL (VENTI)" << endl;
		cout << "Size ban chon la: ";
		cin >> n;
		cin.ignore();
		if (n >= 1 && n <= 4)
		{
			if (stt < 15)
			{
				if (n == 1)
				{
					cout << "Do uong ban chon khong co loai SIZE nay. " << endl;
				Choose1:
					int choose = 0;
					cout << "Ban co muon chon lai Do uong khac khong? Hay tiep tuc chon lai Size cho Do uong nay?" << endl;
					cout << "1. Chon lai Do uong khac. " << endl;
					cout << "2. Chon lai Size cho Do uong nay. " << endl;
					cin >> choose;
					cin.ignore();
					if (choose == 1)
					{
						cout << "Chon lai DO UONG khac. " << endl;
						Sleep(1000);
						return 0;
					}
					else if (choose == 2)
					{
						cout << " Vui long chon lai SIZE phu hop theo Menu." << endl;
						goto re_choose;
					}
					else
					{
						cout << "Lua chon cua ban khong hop le. \nVui long chon lai cho phu hop. " << endl;
						goto Choose1;
					}
				}
				else if (n == 2)
				{
					tien_size = ExchangePrice(stt, "M");
				}
				else if (n == 3) {
					tien_size = ExchangePrice(stt, "L");
				}
				else
				{
					tien_size = ExchangePrice(stt, "XL");
				}
			}
			else
			{
				if (n == 1)
				{
					tien_size = ExchangePrice(stt, "S");
					if (tien_size == 0)
					{
						cout << "Do uong ban chon khong co loai SIZE nay. " << endl;
					Choose2:
						int choose = 0;
						cout << "Ban co muon chon lai Do uong khac khong? Hay tiep tuc chon lai Size cho Do uong nay?" << endl;
						cout << "1. Chon lai Do uong khac. " << endl;
						cout << "2. Chon lai Size cho Do uong nay. " << endl;
						cin >> choose;
						cin.ignore();
						if (choose == 1)
						{
							cout << "Chon lai DO UONG khac. " << endl;
							Sleep(1000);
							return 0;
						}
						else if (choose == 2)
						{
							cout << " Vui long chon lai SIZE phu hop theo Menu." << endl;
							goto re_choose;
						}
						else
						{
							cout << "Lua chon cua ban khong hop le. \nVui long chon lai cho phu hop. " << endl;
							goto Choose2;
						}
					}
				}
				else if (n == 2)
				{
					tien_size = ExchangePrice(stt, "M");
				}
				else if (n == 3) {
					tien_size = ExchangePrice(stt, "L");
					if (tien_size == 0)
					{
						cout << "Do uong ban chon khong co loai SIZE nay. " << endl;
					Choose3:
						int choose = 0;
						cout << "Ban co muon chon lai Do uong khac khong? Hay tiep tuc chon lai Size cho Do uong nay?" << endl;
						cout << "1. Chon lai Do uong khac. " << endl;
						cout << "2. Chon lai Size cho Do uong nay. " << endl;
						cin >> choose;
						cin.ignore();
						if (choose == 1)
						{
							cout << "Chon lai DO UONG khac. " << endl;
							Sleep(1000);
							return 0;
						}
						else if (choose == 2)
						{
							cout << " Vui long chon lai SIZE phu hop theo Menu." << endl;
							goto re_choose;
						}
						else
						{
							cout << "Lua chon cua ban khong hop le. \nVui long chon lai cho phu hop. " << endl;
							goto Choose3;
						}
					}
				}
				else if (n == 4)
				{
					tien_size = ExchangePrice(stt, "L");
					if (tien_size == 0)
					{
						cout << "Do uong ban chon khong co loai SIZE nay. " << endl;
					Choose4:
						int choose = 0;
						cout << "Ban co muon chon lai Do uong khac khong? Hay tiep tuc chon lai Size cho Do uong nay?" << endl;
						cout << "1. Chon lai Do uong khac. " << endl;
						cout << "2. Chon lai Size cho Do uong nay. " << endl;
						cin >> choose;
						cin.ignore();
						if (choose == 1)
						{
							cout << "Chon lai DO UONG khac. " << endl;
							Sleep(1000);
							return 0;
						}
						else if (choose == 2)
						{
							cout << " Vui long chon lai SIZE phu hop theo Menu." << endl;
							goto re_choose;
						}
						else
						{
							cout << "Lua chon cua ban khong hop le. \nVui long chon lai cho phu hop. " << endl;
							goto Choose4;
						}
					}
					else
					{
						tien_size += 10000;
					}
				}
			}
			return tien_size;
		}
		else
		{
			cout << "Lua chon SIZE cua ban KHONG hop le hoac KHONG ton tai. " << endl;
		Choose:
			int choose = 0;
			cout << "Ban co muon chon lai Do uong khac khong? Hay tiep tuc chon lai Size cho Do uong nay?" << endl;
			cout << "1. Chon lai Do uong khac. " << endl;
			cout << "2. Chon lai Size cho Do uong nay. " << endl;
			cin >> choose;
			cin.ignore();
			if (choose == 1)
			{
				cout << "Chon lai DO UONG khac. " << endl;
				Sleep(1000);
				return 0;
			}
			else if (choose == 2)
			{
				cout << " Vui long chon lai SIZE phu hop theo Menu." << endl;
				goto re_choose;
			}
			else
			{
				cout << "Lua chon cua ban khong hop le. \nVui long chon lai cho phu hop. " << endl;
				goto Choose;
			}
		}
	}
public:
	void Order()
	{
		list <Starbuck> sb;
		sb.clear();
		Starbuck cf;
		system("cls");
		cout << "\t\t\t\t\t\t CHAO MUNG BAN DEN VOI CUA HANG STARBUCK CUA CHUNG TOI " << endl;
		Menu();
		ofstream write;
		int stt = 0, gia_size = 0, soluong = 0, dem = 0;
	re_order:
		dem++;
		cf.stt = dem;
	re_option:
		cout << "Ban vui long nhap STT de chon mon. \nLUU Y: Cung size CUNG mon thi order trong 1 lan, Khac size CUNG hoac KHAC mon thi nen order moi size mot lan." << endl;
		cout << "~~~~~~~~~~~~~~~" << endl << "Mon ban chon la: ";
		cin >> stt;
		cin.ignore();
		if (stt < 1 || stt > 54)
		{
			cout << "Khong co STT tuong ung voi lua chon cua ban. Vui long xem lai Menu va lua chon lai. " << endl;
			goto re_option;
		}
		cf.drinks = ExchangeDrinks(stt);
		cout << cf.drinks << endl;
		cout << "~~~~~~~~~~~~~~~" << endl << "Moi ban chon Size do uong: " << endl;
		gia_size = ChooseSize(stt);
		if (gia_size == 0)
		{
			goto re_option;
		}
		cf.money_dr = gia_size;
		cout << "~~~~~~~~~~~~~~~" << endl << "Moi ban nhap so luong: ";
		cin >> soluong;
		cin.ignore();
		cf.sl = soluong;
		cf.sum_money = gia_size * soluong;
		sb.push_back(cf);
		sum_mon += cf.sum_money;
		write.open("Billnow.txt", ios::app);
		if (!write)
		{
			cout << "Khong the mo file. Vui long kiem tra lai. " << endl;
		}
		else
		{
			write << cf.stt << ',' << cf.drinks << ',' << cf.money_dr << ',' << cf.sl << ',' << cf.sum_money << endl;
		}
		write.close();
	conti:
		int cont = 0;
		cout << "Ban co muon order them khong ?" << endl;
		cout << "1. Co" << "\t\t\t\t\t" << "2. Khong" << endl;
		cin >> cont;
		cin.ignore();
		if (cont == 1)
		{
			cout << "Moi ban order tiep. " << endl;
			goto re_order;
		}
		else if (cont == 2)
		{
			cout << "Order thanh cong. " << endl;
		}
		else
		{
			cout << "Lua chon khong hop le. Vui long chon lai. " << endl;
			goto conti;
		}
	}
};
#endif //STARBUCK