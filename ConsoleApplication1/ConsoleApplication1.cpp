#include <iostream>
#include <string>
using namespace std;
int main()
{ // zadanie1
	int int1 = 35;
	int int2 = 20;
	int int3 = 20;
	int int4 = 15;

	if (int2 == int3)
	{
		cout << "operator == " << "true" << endl;
	}
	else
	{
		cout << "operator == " << "false" << endl;
	}
	if (int1 != int2)
	{
		cout << "operator != " << "true" << endl;
	}
	else
	{
		cout << "operator != " << "false" << endl;
	}
	if (int1 > int4)
	{
		cout << "operator > " << "true" << endl;
	}
	else
	{
		cout << "operator > " << "false" << endl;
	}
	if (int2 < int1)
	{
		cout << "operator < " << "true" << endl;
	}
	else
	{
		cout << "operator < " << "false" << endl;
	}
	if (int2 >= int3)
	{
		cout << "operator >= " << "true" << endl;
	}
	else
	{
		cout << "operator >= " << "false" << endl;
	}
	if (int4 <= int2)
	{
		cout << "operator > " << "true" << endl;
	}
	else
	{
		cout << "operator > " << "false" << endl;
	}
	if (int4 <= int2 && int2 >= int3 )
	{
		cout << "operator <= && >= " << "true" << endl;
	}
	else
	{
		cout << "operator <= && >= " << "false" << endl;
	}
	if (int4 <= int2 || int1 == int2)
	{
		cout << "operator <= || == " << "true" << endl;
	}
	else
	{
		cout << "operator <= || == " << "false" << endl;
	}
}