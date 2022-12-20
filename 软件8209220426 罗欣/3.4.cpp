#include<iostream>
using namespace std;

int day = 10;

void num(int m = 1)
{

	int z = (m + 1) * 2;

	day--;
	if (day == 1)
	{
		cout << "第一天猴子总共摘了" << z << "个桃" << endl;
		return;
	}

	num(z);
}

int main()
{
	num();

	return 0;
}
