#include<iostream>

using namespace std;

int voltage1(int r1, int r2, int r3, int i)                            // ����ȸ�ο����� ������ ����ϴ� �����Լ��� �����Ѵ�.
{
	int voltage = i*(r1 + r2 + r3);
	return(voltage);
}

double voltage2(double r1, double r2, double r3, double i)             /* ����ȸ�ο����� ������ ����ϴ� �����Լ��� �����Ѵ�. ������������ ������ double�� �����Ǿ����Ƿ� 
																	   ���� ���� ���� �μ�(����, ����)�� double�� �����Ѵ�.*/
{
	double voltage = i*((r1*r2*r3) / ((r1*r2) + (r2*r3) + (r1*r3)));
	return(voltage);
}

void main()                                                            // �����Լ����� ������ȸ�θ� �����ϴ� choice / ���� r1,r2,r3 / ���� i / ���α׷� ����ۿ��� again �� �����Ѵ�.
{
	int choice, r1, r2, r3, i ;
	char again;

	do {                                                               // ���α׷� ������� ���� do-while ���� ����Ͽ���.

		cout << "ȸ�θ� �����ϼ���.(���� = 1, ���� = 2) : " << endl;   // ó������ ����ȸ������ ����ȸ������ �����Ѵ�. ������������ choice�� ������ �����̹Ƿ� ���ڸ� �Է��ϸ� ������ �߻��Ѵ�.
		cin >> choice;

		if (choice == 1)                                             // if���� ����Ͽ� choice = 1 �ϰ��� ���Ǵ� ������ voltage1�Լ��� ����ǰ� �Ѵ�.
		{
			cout << "������ ũ�⸦ �Է��ϼ��� : " << endl;
			cin >> i;

			cout << "����1�� ũ�⸦ �Է��ϼ��� : " << endl;
			cin >> r1;

			cout << "����2�� ũ�⸦ �Է��ϼ��� : " << endl;
			cin >> r2;

			cout << "����3�� ũ�⸦ �Է��ϼ��� : " << endl;
			cin >> r3;

			cout << "������ ũ�� : " << voltage1(r1, r2, r3, i);
		}

		else if (choice == 2)                                        // if���� ����Ͽ� choice = 2 �ϰ��� ���Ǵ� ������ voltage2�Լ��� ����ǰ� �Ѵ�.
		{
			cout << "������ ũ�⸦ �Է��ϼ��� : " << endl;
			cin >> i;

			cout << "����1�� ũ�⸦ �Է��ϼ��� : " << endl;
			cin >> r1;

			cout << "����2�� ũ�⸦ �Է��ϼ��� : " << endl;
			cin >> r2;

			cout << "����3�� ũ�⸦ �Է��ϼ��� : " << endl;
			cin >> r3;

			cout << "������ ũ�� : " << voltage2(r1, r2, r3, i);
		}

		else                                                     // �� ���� ��쿡�� �߸��� ���� �Էµ� ���� cout�� ���� �˸���.
			cout << endl << "�߸��� ���� �Է��ϼ̽��ϴ�." << endl ;

		cout << endl << "����Ͻðڽ��ϱ�? ( Y / N ) : ";                    // ���α׷� ������ 1�� �Ϸ�Ǹ� ����ۿ��θ� ���´�.
		cin >> again;
		 
		if (again == 'n' || again == 'N') { break; }                    // again = n or again = N �� ��� break���� ���� ���α׷��� �����Ѵ�.
	} 
	while (again == 'y' || again == 'Y');                       // again = y of again = Y �� ��� DO-WHILE ���� ���� DO���� ó������ ���ư� ���α׷��� ������Ѵ�.

	system("pause");
}