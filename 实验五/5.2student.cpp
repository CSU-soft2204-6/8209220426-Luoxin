#include <iostream>
using namespace std;
#include"student.h" //��Ҫ©д���У��������ͨ����
void Student::display() //�����ⶨ�� display �ຯ��
{
	cout << "num" << num << endl;
	cout << "name��" << name << endl;
	cout << "sex��" << sex << endl;
}
void Student::set_value()
{
	cin >> num;
	cin >> name;
	cin >> sex;
}
