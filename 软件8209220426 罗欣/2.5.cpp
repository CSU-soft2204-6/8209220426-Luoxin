#include <iostream>
using namespace std;
int main() {
	char x;
	int letters = 0, digits = 0, spaces = 0, others = 0;
	cout << "��������һ���ַ���\n" << endl;
	while ((x = getchar()) != '\n')
	{
		if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		{
			letters++;
		}
		else if (x >= '0' && x <= '9')
		{
			digits++;
		}
		else if (x == ' ')
		{
			spaces++;
		}
		else
			others++;
	}
	cout << "Ӣ����ĸ��" << letters << "��\n";
	cout << "������" << digits << "��\n";
	cout << "�ո���" << spaces << "��\n";
	cout << "�����ַ���" << others << "��\n";
}













