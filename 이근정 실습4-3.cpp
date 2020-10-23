#include<iostream>

using namespace std;

void main()
{
	int count_number = 0;                   /* 최초에 입력할 문자 변수 'ch'와 표시할 문자의 개수인 정수 변수 'count_number'를 선언한다.
											문자의 개수인 count_number의 초기값은 0으로 설정한다. */
	char ch;

	cout << "입력한 문자의 수를 카운트하는 프로그램입니다." << endl << "문자를 입력하세요." << endl << "입력:";
	cin >> ch;                             // 문자를 입력한다.

	while (cin.get(ch))                   // while(cin.get()) 함수는 cin으로부터 문자를 하나씩 받아들여 문자 변수 ch에 저장하는 함수이다.
	{
		count_number = count_number + 1;   // 입력을 할 때마다 count_number가 1씩 증가하도록 설계한다.			
		if (ch == '\n') break;            // 입력한 문자의 수를 카운트하는 프로그램이므로 문자의 입력을 끝낸 'enter(줄바꿈)'를 입력하면 루프를 탈출 할 수 있도록 설계한다.		                           
	}

	cout << "입력하신 문자의 수는 " << count_number << " 입니다." << endl;    // 입력을 끝내면 결과를 출력한다. 
																  
	system("pause");
}