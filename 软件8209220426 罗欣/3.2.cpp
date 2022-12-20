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
	for (int i = 2; i <=sqrt(num); i++)//sqrt����Ϊ������������ƽ��������һ�����ֲ�����ƽ��������ͷ�ļ�cmath
		if (num % i == 0)//����ѭ����������������Χ��Ϊ2~sqrt��number��
		{
			return false;
		}
	return true;
}
void PrimeNumber(int numofprime)
{
	const int N = 200;//����200
	const int L = 10;//ÿ��10����
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
	PrimeNumber(200);//��������
	return 0;
}