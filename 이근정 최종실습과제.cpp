#include<iostream>
#include<string.h>
using namespace std;

class info {
private:
	char name[4];
	char *grade;
	int test1, test2, hw, at, totalscore;
public:
	void setinfo1(char *pn);
	void setinfo2(int a, int b, int c, int d);
	void show();
	void show2();
	int sort();
};
void info::setinfo1(char *pn) {
	strcpy_s(name, pn);
}	
void info::setinfo2(int a, int b, int c, int d) {
	test1 = a; test2 = b; hw = c; at = d; totalscore = test1 + test2 + hw + at;
	if (96 <= totalscore && totalscore <= 100) grade = "A+";
	else if (90 <= totalscore && totalscore <= 95) grade = "A0";
	else if (86 <= totalscore && totalscore <= 89) grade = "B+";
	else if (80 <= totalscore && totalscore <= 85) grade = "B0";
	else if (76 <= totalscore && totalscore <= 79) grade = "C+";
	else if (70 <= totalscore && totalscore <= 75) grade = "C0";
	else grade = "F";
}
void info::show() {
	cout << name << " " << test1 << " " << test2 << " " << hw << " " << at;
}
void info:: show2() {
	cout << name << " " << test1 << " " << test2 << " " << hw << " " << at << " " << totalscore << " " << grade;
}
int info::sort() {
	return(totalscore);
}

void main()
{
	int size;
	char again1, again2;
	char input_name[4];
	int input_test1, input_test2, input_hw, input_at;
	info forsort;
	do {
		cout << "<<2017�� 2�б� C++ ������ �ý���>>" << endl;
		cout << "�����ο�(��)�� �Է��ϼ���." << endl;
		cout << "�����ο�(��) : ";
		cin >> size;

		info *studentinfo = new info[size];

		cout << endl << "�̸��� ������ �Է��ϼ���." << endl;
		cout << "�Է¼���(�̸�/�߰����/�⸻���/����/�⼮)" << endl;
		cout << "**���ǻ���**" << endl << "((�̸��� 3�ڸ� �Է��� ��))" << endl;

		do {
			for (int i = 0; i < size; i++)
			{
				cout << "[" << i + 1 << "]";
				cin >> input_name;
				studentinfo[i].setinfo1(input_name);
				cin >> input_test1 >> input_test2 >> input_hw >> input_at;
				studentinfo[i].setinfo2(input_test1, input_test2, input_hw, input_at);
			}

			cout << endl << "�Է�Ȯ��(�Է¼��� : �̸�/�߰����/�⸻���/����/�⼮)" << endl;
			for (int i = 0; i < size; i++)
			{
				cout << "[" << i + 1 << "]";
				studentinfo[i].show();
				cout << endl;
			}
			cout << endl << "�Է°���� Ȯ���ϼ���. ������ Y, �߸� �Է��ϼ����� N�� �Է��ϼ���.(N�� �Է½� ���Է��մϴ�.)";
			cin >> again1; if (again1 == 'Y' || again1 == 'y') break;
		} while (again1 == 'N' || again1 == 'n');

		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				if (studentinfo[i].sort() < studentinfo[j].sort())
				{
					forsort = studentinfo[i];
					studentinfo[i] = studentinfo[j];
					studentinfo[j] = forsort;
				}}}

		cout << endl << "<< 2017�� 2�б� C++ ������� >>" << endl;
		cout << "��¼���(����/�̸�/�߰����/�⸻���/����/�⼮/����/����)" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << "[" << i + 1 << "] ";
			studentinfo[i].show2();
			cout << endl;
		}

		cout << endl << "���α׷��� ����� �Ͻðڽ��ϱ�? ( Y / N )";
		cin >> again2; if (again2 == 'N' || again2 == 'n')break;
	} while (again2 == 'Y' || again2 == 'y');

system("pause");
}