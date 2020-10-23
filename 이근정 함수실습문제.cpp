#include<iostream>

using namespace std;

int voltage1(int r1, int r2, int r3, int i)                            // 직렬회로에서의 전압을 출력하는 직렬함수를 설정한다.
{
	int voltage = i*(r1 + r2 + r3);
	return(voltage);
}

double voltage2(double r1, double r2, double r3, double i)             /* 병렬회로에서의 전압을 출력하는 병렬함수를 설정한다. 주의할점으로 전압이 double로 설정되었으므로 
																	   전압 계산식 안의 인수(저항, 전류)도 double로 설정한다.*/
{
	double voltage = i*((r1*r2*r3) / ((r1*r2) + (r2*r3) + (r1*r3)));
	return(voltage);
}

void main()                                                            // 메인함수에서 직병렬회로를 선택하는 choice / 저항 r1,r2,r3 / 전류 i / 프로그램 재시작여부 again 을 선언한다.
{
	int choice, r1, r2, r3, i ;
	char again;

	do {                                                               // 프로그램 재시작을 위해 do-while 문을 사용하였다.

		cout << "회로를 선택하세요.(직렬 = 1, 병렬 = 2) : " << endl;   // 처음으로 직렬회로인지 병렬회로인지 선택한다. 주의할점으로 choice가 정수형 변수이므로 문자를 입력하면 오류가 발생한다.
		cin >> choice;

		if (choice == 1)                                             // if문을 사용하여 choice = 1 일경우는 계산되는 전압이 voltage1함수가 실행되게 한다.
		{
			cout << "전류의 크기를 입력하세요 : " << endl;
			cin >> i;

			cout << "저항1의 크기를 입력하세요 : " << endl;
			cin >> r1;

			cout << "저항2의 크기를 입력하세요 : " << endl;
			cin >> r2;

			cout << "저항3의 크기를 입력하세요 : " << endl;
			cin >> r3;

			cout << "전압의 크기 : " << voltage1(r1, r2, r3, i);
		}

		else if (choice == 2)                                        // if문을 사용하여 choice = 2 일경우는 계산되는 전압이 voltage2함수가 실행되게 한다.
		{
			cout << "전류의 크기를 입력하세요 : " << endl;
			cin >> i;

			cout << "저항1의 크기를 입력하세요 : " << endl;
			cin >> r1;

			cout << "저항2의 크기를 입력하세요 : " << endl;
			cin >> r2;

			cout << "저항3의 크기를 입력하세요 : " << endl;
			cin >> r3;

			cout << "전압의 크기 : " << voltage2(r1, r2, r3, i);
		}

		else                                                     // 그 외의 경우에는 잘못된 값이 입력된 것을 cout을 통해 알린다.
			cout << endl << "잘못된 값을 입력하셨습니다." << endl ;

		cout << endl << "계속하시겠습니까? ( Y / N ) : ";                    // 프로그램 실행이 1번 완료되면 재시작여부를 묻는다.
		cin >> again;
		 
		if (again == 'n' || again == 'N') { break; }                    // again = n or again = N 일 경우 break문을 통해 프로그램을 종료한다.
	} 
	while (again == 'y' || again == 'Y');                       // again = y of again = Y 일 경우 DO-WHILE 문을 통해 DO문의 처음으로 돌아가 프로그램을 재실행한다.

	system("pause");
}