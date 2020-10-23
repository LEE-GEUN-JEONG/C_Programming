#include<iostream>
#include<iomanip>

using namespace std;

void main()
{
	double pi = 4 * atan(1);

	cout << pi << endl;
	cout << setw(15) << pi << endl;
	cout << setprecision(8) << pi << endl;

	system("pause");
}
