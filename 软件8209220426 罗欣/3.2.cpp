#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
bool is_prime(int num)
{
	if (num <= 1)
	{
		return false;
	}
	for (int i = 2; i <=sqrt(num); i++)//sqrt函数为给所定函数开平方，接受一个数字并返回平方根，用头文件cmath
		if (num % i == 0)//减少循环次数，将除数范围设为2~sqrt（number）
		{
			return false;
		}
	return true;
}
void PrimeNumber(int numofprime)
{
	const int N = 200;//总数200
	const int L = 10;//每行10个数
	int x = 0;
	int number = 2;
	while (x < numofprime)
	{
		if (is_prime(number))
		{
			x++;
			if (x % L == 0)
			{
				cout << setw(5) << number << endl;
			}
			else
				cout << setw(5) << number;
		}
		number++;
	}
}
int main()
{
	cout << "The first 200 prime number is";
	PrimeNumber(200);//函数调用
	return 0;
}