#include <iostream> //��������ͷ�ļ���������
#include "student.h"
int main()
{

	Student stud; //�������
	stud.set_value();
	Student stud1(007, "tmg", 'm');
	stud.display(); //ִ�� stud ����� display ����
	return 0;
}