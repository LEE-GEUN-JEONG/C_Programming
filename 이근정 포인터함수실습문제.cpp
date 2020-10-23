#include<iostream>

using namespace std;

void swap(int *x, int *y)     // ������ �迭�� ���� �ٲ��ִ� swap�Լ��� �����Ѵ�.
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void up(int *x, int *y)       // ������������ �������ִ� up�Լ��� �����Ѵ�. up�Լ� �ȿ��� swap�Լ��� �̿��� �ڸ��� �ٲ۴�.
{
	if (*x > *y)
	{
		swap(x, y);
	}
}

void down(int *x, int *y)      // ������������ �������ִ� down�Լ��� �����Ѵ�. down�Լ� �ȿ��� swap�Լ��� �̿��� �ڸ��� �ٲ۴�.
{
	if (*x < *y)
	{
		swap(x, y);
	}
}

void sort(int *p, int n, int choice) // choice�� ��쿡 ���� ũŰ�� n�� p�迭�� �������� �Ǵ� ������������ �����ϴ� �Լ��� �����Ѵ�.
{
	int i, j;
	for (i = 0; i < n; i++)  // for���� �̿��Ͽ� ��� ����� �迭���� ���Ͽ� �񱳸� �Ѵ�.
	{
		for (j = i + 1; j < n; j++)
		{
			if (choice == 0)  // ������� ���ÿ� ���� ��������, �������� 2���� ���� ������.
			{
				up((p + i), (p + j)); // up �Ǵ� down �̶�� �Լ��� �ҷ� �� �μ��δ� �����͹迭�� ������ �Ѵ�.
			}
			else if (choice == 1)
			{
				down((p + i), (p + j));
			}
		}
	}
}

void main()            // main �Լ��� ����
{
	int size, i, choice;
	char again1, again2;
	void(*pf)(int*, int, int);   // �������Լ��� �����Ѵ�. ���μ����� �μ��� ���ĸ� ��Ÿ���� �ǹǷ� int*a�� ���� �������� �������� �ʾҴ�.

	do {                             // do-while ���� 2�� ����Ͽ� ������ �Ǵ� �迭�� ũ�⸦ �缳�� �� �� �ְ� �Ѵ�.
		cout << "�迭�� ũ�⸦ �Է��ϼ��� : ";
		cin >> size;

		int *p = new int[size];            // ���������� ���� �迭�� ũ�⸦ ���Ѵ�.

		for (i = 0; i < size; i++)             // for ���� �̿��Ͽ� �迭�� �Է�
		{
			cout << "p[" << i << "]= ";
			cin >> p[i];
		} 

		do {
			cout << endl << "(����) �ø����� = 0, �������� = 1 : ";
			cin >> choice;

			pf = sort;            // ������ �������Լ��� sort�Լ��� �ǵ��� �Ѵ�.
			pf(p, size, choice);  /* sort �Լ��� �μ��� (�迭(������), ũ��(����������), ����(����������)) �� �����Ѵ�.
								  pf(p, size, choice); <-- �̰����� ���� ����ڰ� ������ ���ķ� �迭�� �����ĵȴ�. */

			cout << "������ ��� : " << endl;
			for (i = 0; i < size; i++)
			{
				cout << "p[" << i << "]= " << p[i] << endl;
			}
			cout << endl << "�ٸ� ������ �Ͻðڽ��ϱ�? ( Y / N ) : ";
			cin >> again1;

			if (again1 == 'N' || again1 == 'n') break;

		} while (again1 == 'Y' || again1 == 'y');

		delete p;                           // ù ��° ���������� �迭�� ������ �� ����ϸ� delete�� ���� ���������� �����Ѵ�.

		cout << endl << "�迭�� ũ�⸦ �ٲٽðڽ��ϱ�? ( Y / N ) : ";
		cin >> again2;

		if (again2 == 'N' || again2 == 'n') break;

	} while (again2 == 'Y' || again2 == 'y');              // do-while ���� ���� ��ȭ�� ���α׷��� ����.

	cout << endl << "�ý����� �����մϴ�." << endl;
	system("PAUSE");
}