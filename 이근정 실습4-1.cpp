#include<iostream>

using namespace std;

void main()

{
	int month;                            // ���ʿ� ���� ��Ÿ���� ������ ������ ���α׷� ����� ���θ� ���� ������ ������ �����Ѵ�.
	char again;

	do {                                  // ���α׷��� �����ϰ� �ٽ� ����� �� �� �ְ� �����Ͽ��� �ϹǷ� do-while ���� ����Ͽ���.                                     
		cout << "�� ���� �ϼ��� ����ϴ� ���α׷��Դϴ�. ���ϴ� ���� �Է��ϼ���"; // ���ʿ� ���� �Է��Ѵ�.
		cin >> month;
		{
			if (month == 1)                                                   // �Է��� ������ ���� ���� ��쿡 ���� ������ �����Ѵ�.
				cout << month << "���� 31�ϱ��� �Դϴ�.";
			else if (month == 3)
				cout << month << "���� 31�ϱ��� �Դϴ�.";
			else if (month == 5)
				cout << month << "���� 31�ϱ��� �Դϴ�.";
			else if (month == 7)
				cout << month << "���� 31�ϱ��� �Դϴ�.";
			else if (month == 8)
				cout << month << "���� 31�ϱ��� �Դϴ�.";
			else if (month == 10)
				cout << month << "���� 31�ϱ��� �Դϴ�.";
			else if (month == 12)
				cout << month << "���� 31�ϱ��� �Դϴ�.";
			else if (month == 2)
				cout << month << "���� 28�ϱ��� �Դϴ�.";
			else if (month == 4)
				cout << month << "���� 30�ϱ��� �Դϴ�.";
			else if (month == 6)
				cout << month << "���� 30�ϱ��� �Դϴ�.";
			else if (month == 9)
				cout << month << "���� 30�ϱ��� �Դϴ�.";
			else if (month == 11)
				cout << month << "���� 30�ϱ��� �Դϴ�.";
			else
				cout << "�Է��Ͻ� ���� �������� �ʽ��ϴ�.";
		}
		cout << endl << "����Ͻðڽ��ϱ�? (Y/N)";                             // ���α׷��� �� �� ������ ����ۿ��θ� ���� ������ ǥ���ϰ� �� �Է��� ���ʿ� ������ ������ ������ �Է��Ѵ�.
		cin >> again;

		if (again == 'N' || again == 'n') break;                              // ���� ����� no��� ������ Ż���Ѵ�.
	}

	while (again == 'Y' || again == 'y');                                     // ���� ����� yes��� do���� ó������ �� ���α׷��� �ݺ��Ѵ�.

	system("pause");
}