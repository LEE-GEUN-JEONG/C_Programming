#include<iostream>

using namespace std;

void up(int *pa, int k)
{
	int temp, i, j;
	for (i = 0; i < k; i++)
	{
		for (j = i + 1; j < k; j++)
		{
			if (*(pa+i) < *(pa+j))
			{
				temp = *(pa + i);
				*(pa + i) = *(pa + j);
				*(pa + j) = temp;
			}
		}
	}
}

void down(int *pa, int k)
{
	int temp, i, j;
	for (i = 0; i < k; i++)
	{
		for (j = i + 1; j < k; j++)
		{
			if (*(pa + i) > *(pa + j))
			{
				temp = *(pa + i);
				*(pa + i) = *(pa + j);
				*(pa + j) = temp;
			}
		}
	}
}

void main()
{
	int size, i;
	void(*pf)(int *a, int b);

	cout << "배열의 크기를 입력하세요 : ";
	cin >> size;

	int *p = new int[size];

	for (i=0; i < size; i++)
	{
		cout << "p[" << i << "]= ";
		cin >> p[i];
	}

		int choice;
		cout << "(선택) 올림차순 = 0, 내림차순 = 1 : ";
		cin >> choice;

		if (choice == 0)
		{
			pf = up;
			pf(p,size);
			
			cout << "정렬한 결과 : " << endl;
			for (i=0; i< size; i++)
			{
				cout << "p[" << i << "]= " << p[i] << endl ;
			}
		}

		else if (choice == 1)
		{
			pf = down;
			pf(p, size);

			cout << "정렬한 결과 : " << endl;
			for (i = 0; i< size; i++)
			{
				cout << "p[" << i << "]= " << p[i] << endl;
			}
		}
		

	

	system("PAUSE");
}