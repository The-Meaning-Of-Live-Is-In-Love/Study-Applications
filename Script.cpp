#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>
using namespace std;
struct Order
{
	string Payers_Checking_Account;
	string Recipients_Checking_Account;
	int Transfer_Amount;
};
void New_Order(Order &New_Order)
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "¬ведите платЄжный счЄт плательщика." << '\n';
	cin >> New_Order.Payers_Checking_Account;
	cout << "¬ведите платЄжный счЄт получател€." << '\n';
	cin >> New_Order.Recipients_Checking_Account;
	cout << "¬ведите перечисл€емую сумму в рубл€х." << '\n';
	cin >> New_Order.Transfer_Amount;
}
void Sorting(int Array_Orders[], Size)
{
	sort
	(Array_Orders, Array_Orders + Size, [](const Order& Address_1, const Order& Address_2)
	 {
		return Address_1.Payers_Checking_Account < Address_2.Payers_Checking_Account;
	}
	);
}
int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Order Array_Orders[Size];
	int Size = 8;
	Order New_Order_1;
	for (int Counter = 0; Counter < 8; Counter++)
	{
		New_Order(New_Order_1);
		Array_Orders[Counter] = New_Order_1;
	}
	Sorting(int Array_Orders[], Size);
	for (int Counter = 0; Counter < 8; Counter++)
	{
		cout << "Ёлемент массива є " << Counter + 1 << '\n' << Array_Orders[Counter].Payers_Checking_Account << '\t' << Array_Orders[Counter].Recipients_Checking_Account << '\t' << Array_Orders[Counter].Transfer_Amount << '\n';
	}
	system("pause");
	return 0;
}
