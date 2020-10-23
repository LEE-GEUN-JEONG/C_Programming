#include<iostream>

using namespace std;

void main()
{
	int a, b;
	
	&b = a;
	
	b = 10;
	cout << a << endl;
	cout << b << endl;

	a = 5;
	cout << b << endl;
	

	system("pause");
}