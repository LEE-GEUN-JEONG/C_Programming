#include<iostream>      /* 포인터함수를 인수로 가지는 포인터함수를 정의해보는 것이 목표입니다.
실습문제에서는 효율적인 프로그램 작성을 위해 이 방식대로 하지않았습니다.
그래서 포인터함수를 인수로 가지는 포인터함수를 이 프로그램을 통해 만들어보았습니다.
입력받은 배열을 역순으로 출력하는 아주 단순한 프로그램을 포인터함수를 통해 설계하였고
그 포인터함수의 가인수로 (포인터배열, 정수형변수, 포인터함수)를 설정하였고
실인수로 ( , ,swap함수) 를 받아들이게 설계하였습니다. */

using namespace std;    // 입력한 배열을 역순으로 출력하는 프로그램입니다

void swap(int*a, int*b) // swap함수를 정의합니다.
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int *x, int n, void(*pf)(int*, int*)) // (포인터배열,정수형변수,포인터함수)꼴의 인수를 가지는 sort함수를 정의합니다.
{
	int i, j;
	for (i = 0; i < n ; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (*(x+i) < *(x+j))
				pf = swap;
			pf(x + i, x + j);
		}
	}
}

void main()
{
	int i, size;
	void(*pf)(int*, int*);

	cout << "입력받은 배열을 역순으로 정열하는 프로그램입니다." << endl;
	cout << "배열의 크기를 입력하세요. ";
	cin >> size;

    int *p = new int[size];

	cout << "배열을 입력하세요." << endl;

	for (i = 0 ; i < size ; i++)
	{
		cout << "p[" << i << "]= " ;
		cin >> p[i];
	}

	pf = swap;
	sort(p, size, pf);

	cout << "역순으로 정렬한 결과입니다." << endl;

	for (i = 0; i < size; i++)
	{
		cout << "p[" << i << "]= " << p[i] << endl;
	}

	system("pause");
}