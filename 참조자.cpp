#include<iostream>

using namespace std;

void main()
{
	int a;
	int &b = a;

	b = 10;
	
	cout << a << endl;
	cout << b << endl;
	
	a = 1;
	cout << a << endl;
	cout << b << endl;
	
	system("pause");
}