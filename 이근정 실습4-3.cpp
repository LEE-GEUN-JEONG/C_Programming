#include<iostream>

using namespace std;

void main()
{
	int count_number = 0;                   /* ���ʿ� �Է��� ���� ���� 'ch'�� ǥ���� ������ ������ ���� ���� 'count_number'�� �����Ѵ�.
											������ ������ count_number�� �ʱⰪ�� 0���� �����Ѵ�. */
	char ch;

	cout << "�Է��� ������ ���� ī��Ʈ�ϴ� ���α׷��Դϴ�." << endl << "���ڸ� �Է��ϼ���." << endl << "�Է�:";
	cin >> ch;                             // ���ڸ� �Է��Ѵ�.

	while (cin.get(ch))                   // while(cin.get()) �Լ��� cin���κ��� ���ڸ� �ϳ��� �޾Ƶ鿩 ���� ���� ch�� �����ϴ� �Լ��̴�.
	{
		count_number = count_number + 1;   // �Է��� �� ������ count_number�� 1�� �����ϵ��� �����Ѵ�.			
		if (ch == '\n') break;            // �Է��� ������ ���� ī��Ʈ�ϴ� ���α׷��̹Ƿ� ������ �Է��� ���� 'enter(�ٹٲ�)'�� �Է��ϸ� ������ Ż�� �� �� �ֵ��� �����Ѵ�.		                           
	}

	cout << "�Է��Ͻ� ������ ���� " << count_number << " �Դϴ�." << endl;    // �Է��� ������ ����� ����Ѵ�. 
																  
	system("pause");
}