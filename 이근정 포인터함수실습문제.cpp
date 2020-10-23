#include<iostream>

using namespace std;

void swap(int *x, int *y)     // 포인터 배열의 값을 바꿔주는 swap함수를 정의한다.
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void up(int *x, int *y)       // 오름차순으로 정렬해주는 up함수를 정의한다. up함수 안에서 swap함수를 이용해 자리를 바꾼다.
{
	if (*x > *y)
	{
		swap(x, y);
	}
}

void down(int *x, int *y)      // 내림차순으로 정렬해주는 down함수를 정의한다. down함수 안에서 swap함수를 이용해 자리를 바꾼다.
{
	if (*x < *y)
	{
		swap(x, y);
	}
}

void sort(int *p, int n, int choice) // choice의 경우에 따라 크키가 n인 p배열을 오름차순 또는 내림차순으로 정렬하는 함수를 정의한다.
{
	int i, j;
	for (i = 0; i < n; i++)  // for문을 이용하여 모든 경우의 배열값에 대하여 비교를 한다.
	{
		for (j = i + 1; j < n; j++)
		{
			if (choice == 0)  // 사용자의 선택에 따라 오름차순, 내림차순 2가지 경우로 나눈다.
			{
				up((p + i), (p + j)); // up 또는 down 이라는 함수를 불러 그 인수로는 포인터배열이 들어가도록 한다.
			}
			else if (choice == 1)
			{
				down((p + i), (p + j));
			}
		}
	}
}

void main()            // main 함수의 시작
{
	int size, i, choice;
	char again1, again2;
	void(*pf)(int*, int, int);   // 포인터함수를 정의한다. 가인수에는 인수의 형식만 나타내면 되므로 int*a와 같이 변수명을 설정하지 않았다.

	do {                             // do-while 문을 2번 사용하여 재정렬 또는 배열의 크기를 재설정 할 수 있게 한다.
		cout << "배열의 크기를 입력하세요 : ";
		cin >> size;

		int *p = new int[size];            // 동적생성을 통해 배열의 크기를 정한다.

		for (i = 0; i < size; i++)             // for 문을 이용하여 배열을 입력
		{
			cout << "p[" << i << "]= ";
			cin >> p[i];
		} 

		do {
			cout << endl << "(선택) 올림차순 = 0, 내림차순 = 1 : ";
			cin >> choice;

			pf = sort;            // 정의한 포인터함수가 sort함수가 되도록 한다.
			pf(p, size, choice);  /* sort 함수의 인수는 (배열(포인터), 크기(정수형변수), 선택(정수형변수)) 가 들어가야한다.
								  pf(p, size, choice); <-- 이것으로 인해 사용자가 선택한 정렬로 배열이 재정렬된다. */

			cout << "정렬한 결과 : " << endl;
			for (i = 0; i < size; i++)
			{
				cout << "p[" << i << "]= " << p[i] << endl;
			}
			cout << endl << "다른 정렬을 하시겠습니까? ( Y / N ) : ";
			cin >> again1;

			if (again1 == 'N' || again1 == 'n') break;

		} while (again1 == 'Y' || again1 == 'y');

		delete p;                           // 첫 번째 동적생성된 배열의 정렬을 다 사용하면 delete를 통해 동적생성을 제거한다.

		cout << endl << "배열의 크기를 바꾸시겠습니까? ( Y / N ) : ";
		cin >> again2;

		if (again2 == 'N' || again2 == 'n') break;

	} while (again2 == 'Y' || again2 == 'y');              // do-while 문을 통해 대화형 프로그램을 설계.

	cout << endl << "시스템을 종료합니다." << endl;
	system("PAUSE");
}