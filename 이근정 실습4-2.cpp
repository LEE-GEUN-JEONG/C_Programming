#include<iostream>

using namespace std;

void main()

{
	int korean, english, math, avg;                  // ������ ������ '����, ����, �������� �׸��� �������'�� �����Ѵ�.
	char grade, again;                               // ������ ������ '���� �׸��� ���α׷��� ����� ���θ� ���� ����'�� �����Ѵ�.

	do {                                             // ���α׷��� ����� �����ϰ� �����Ͽ��� �ϹǷ� do-while ���� ����Ͽ���.
		cout << "����, ����, ���� ������ �Է��Ͽ� ����, ��� �� ������ ���մϴ�." << endl;    // ���ʿ� '����, ����, ��������'�� �Է��Ѵ�.
		cout << "���� ���� �Է�:";
		cin >> korean;
		cout << "���� ���� �Է�:";
		cin >> english;
		cout << "���� ���� �Է�:";
		cin >> math;

		avg = (korean + english + math) / 3;            // 3�� ���� ��������� �����Ѵ�.

		switch (avg / 10)                               // ��������� ���� ������ �޶����Ƿ� switch���� �̿��� case���� ������ �����Ѵ�.
		{                                               // avg�� ������ �����̹Ƿ� 10���� ��������쿡 �� ���� ���� ������ ���� ���� �� �� �ִ�.
		case 10: grade = 'A'; break;
		case 9: grade = 'A'; break;
		case 8: grade = 'B'; break;
		case 7: grade = 'C'; break;
		case 6: grade = 'D'; break;
		default: grade = 'F'; break;
		}

		cout << "��� ��� (����: A[100-90], B[89-80], C[79-70], D[69-60], F[�ǰ�])" << endl;
		cout << "�Է��� ����, ���� ������ ���� : " << korean << "," << english << "," << math << endl;
		cout << "���� : " << korean + english + math << endl;
		cout << "��� : " << avg << endl;
		cout << "���� : " << grade << endl;

		cout << "�ٸ� ������ �Է��Ͻðڽ��ϱ�? (Y/N)";     // ����� ��� �Ŀ� ���α׷��� ����� ���θ� ���� �� �Է��� ���ʿ� ������ ������ ������ ����Ѵ�.
		cin >> again;

		if (again == 'N' || again == 'n') break;         // ���� ����� no��� ������ Ż���Ѵ�.;

	} while (again == 'Y' || again == 'y');              // ���� ����� yes��� �ٽ� do���� ó������ �� �ݺ��Ѵ�.

	system("pause");
}