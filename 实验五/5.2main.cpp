#include <iostream> //将类声明头文件包含进来
#include "student.h"
int main()
{

	Student stud; //定义对象
	stud.set_value();
	Student stud1(007, "tmg", 'm');
	stud.display(); //执行 stud 对象的 display 函数
	return 0;
}