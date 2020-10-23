#include<iostream>

using namespace std;

void main()

{
	int korean, english, math, avg;                  // 정수형 변수로 '국어, 영어, 수학점수 그리고 평균점수'를 선언한다.
	char grade, again;                               // 문자형 변수로 '학점 그리고 프로그램을 재시작 여부를 묻는 문구'를 선언한다.

	do {                                             // 프로그램을 재시작 가능하게 설계하여야 하므로 do-while 문을 사용하였다.
		cout << "국어, 영어, 수학 점수를 입력하여 총점, 평균 및 학점을 구합니다." << endl;    // 최초에 '국어, 영어, 수학점수'를 입력한다.
		cout << "국어 점수 입력:";
		cin >> korean;
		cout << "영어 점수 입력:";
		cin >> english;
		cout << "수학 점수 입력:";
		cin >> math;

		avg = (korean + english + math) / 3;            // 3개 과목 평균점수를 정의한다.

		switch (avg / 10)                               // 평균점수에 따라 학점이 달라지므로 switch문을 이용해 case별로 학점을 정의한다.
		{                                               // avg는 정수형 변수이므로 10으로 나눴을경우에 그 수에 따라 학점을 쉽게 정의 할 수 있다.
		case 10: grade = 'A'; break;
		case 9: grade = 'A'; break;
		case 8: grade = 'B'; break;
		case 7: grade = 'C'; break;
		case 6: grade = 'D'; break;
		default: grade = 'F'; break;
		}

		cout << "결과 출력 (학점: A[100-90], B[89-80], C[79-70], D[69-60], F[실격])" << endl;
		cout << "입력한 국어, 영어 수학의 점수 : " << korean << "," << english << "," << math << endl;
		cout << "총점 : " << korean + english + math << endl;
		cout << "평균 : " << avg << endl;
		cout << "학점 : " << grade << endl;

		cout << "다른 점수를 입력하시겠습니까? (Y/N)";     // 결과를 출력 후에 프로그램을 재시작 여부를 묻고 그 입력은 최초에 정의한 문자형 변수를 사용한다.
		cin >> again;

		if (again == 'N' || again == 'n') break;         // 만약 대답이 no라면 루프를 탈출한다.;

	} while (again == 'Y' || again == 'y');              // 만약 대답이 yes라면 다시 do문의 처음으로 들어가 반복한다.

	system("pause");
}