#include <iostream>
using namespace std;
class T_Log_Element
{
	private:
		bool F_In_Value_1, F_In_Value_2, F_In_Value_3;
	protected:
		bool F_Result;
		virtual void Calculation() = 0;
		bool Set_In_Value_1(bool New_In_Value_1);
		bool Get_In_Value_2()
		{
			return F_In_Value_2;
		}
		bool Set_In_Value_2(bool New_In_Value_2);
		bool Get_In_Value_3()
		{
			return F_In_Value_3;
		}
		bool Set_In_Value_3(bool New_In_Value_3);
	public:
		bool Get_In_Value_1()
		{
			return F_In_Value_1;
		}
};
void T_Log_Element::Set_In_Value_1(bool New_In_Value_1)
{
	F_In_Value_1 = New_In_Value_1;
	Calculation();
}
void T_Log_Element::Set_In_Value_2(bool New_In_Value_2)
{
	F_In_Value_2 = New_In_Value_2;
	Calculation();
}
void T_Log_Element::Set_In_Value_3(bool New_In_Value_3)
{
	F_In_Value_3 = New_In_Value_3;
	Calculation();
}
class T_Log_In_Value_2 : public T_Log_Element
{
	public:
		using T_Log_Element::Set_In_Value_1;
		using T_Log_Element::Get_In_Value_1;
		using T_Log_Element::Set_In_Value_2;
		using T_Log_Element::Get_In_Value_2;
};
class T_And: public T_Log_In_Value_2
{
	protected:
		void Calculation();
};
void T_And::Calculation()
{
	F_Result = Get_In_Value_1() && Get_In_Value_2;
}
class T_Log_In_Value_3: public T_Log_Element
{
public:
	using T_Log_Element::Set_In_Value_3;
	using T_Log_Element::Get_In_Value_3;
};
class T_Or: public T_Log_In_Value_3
{
	protected:
		void Calculation();
};
void T_And::Calculation()
{
	F_Result = F_Result || Get_In_Value_3;
}
int main()
{
	int Value_1, Value_2, Value_3;
	T_And elAnd;
	T_Or elOr;
	cout << "X" << '\t' << "&" << '\t' << "Y" << "||" << "Z" << '\n';
	for (Value_1 = 0; Value_1 <= 1; Value_1++)
	{
		elAnd.Set_In_Value_1(Value_1);
		for (Value_2 = 0; Value_2 <= 1; Value_2++)
		{
			elAnd.Set_In_Value_2(Value_2);
			for (Value_3 = 0; Value_3 <= 1; Value_3++)
			{
				elOr.Set_In_Value_3(Value_3);
			}
		}
	}
	return 0;
}