#include<iostream>

using namespace std;

void main()

{
	int month;                            // 최초에 월을 나타내는 정수형 변수와 프로그램 재시작 여부를 묻는 문자형 변수를 선언한다.
	char again;

	do {                                  // 프로그램을 실행하고 다시 재시작 할 수 있게 설계하여야 하므로 do-while 문을 사용하였다.                                     
		cout << "각 월의 일수를 계산하는 프로그램입니다. 원하는 월을 입력하세요"; // 최초에 월을 입력한다.
		cin >> month;
		{
			if (month == 1)                                                   // 입력한 정수형 변수 월의 경우에 따라 조건을 설정한다.
				cout << month << "월은 31일까지 입니다.";
			else if (month == 3)
				cout << month << "월은 31일까지 입니다.";
			else if (month == 5)
				cout << month << "월은 31일까지 입니다.";
			else if (month == 7)
				cout << month << "월은 31일까지 입니다.";
			else if (month == 8)
				cout << month << "월은 31일까지 입니다.";
			else if (month == 10)
				cout << month << "월은 31일까지 입니다.";
			else if (month == 12)
				cout << month << "월은 31일까지 입니다.";
			else if (month == 2)
				cout << month << "월은 28일까지 입니다.";
			else if (month == 4)
				cout << month << "월은 30일까지 입니다.";
			else if (month == 6)
				cout << month << "월은 30일까지 입니다.";
			else if (month == 9)
				cout << month << "월은 30일까지 입니다.";
			else if (month == 11)
				cout << month << "월은 30일까지 입니다.";
			else
				cout << "입력하신 월은 존재하지 않습니다.";
		}
		cout << endl << "계속하시겠습니까? (Y/N)";                             // 프로그램을 한 번 실행후 재시작여부를 묻는 문구를 표출하고 그 입력은 최초에 설정한 문자형 변수를 입력한다.
		cin >> again;

		if (again == 'N' || again == 'n') break;                              // 만약 대답이 no라면 루프를 탈출한다.
	}

	while (again == 'Y' || again == 'y');                                     // 만약 대답이 yes라면 do문의 처음으로 들어가 프로그램을 반복한다.

	system("pause");
}