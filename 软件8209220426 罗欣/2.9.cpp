#include<iostream>
using namespace std;
int main() {
	float prince = 0.8;
	int day = 0;
	int sum = 0;

	for (int n = 2; n < 100; n *= 2)
	{
		sum += n;
		day++;
	}
	double aver = sum * prince / day;
	cout << "ÿ���ƽ���۸�Ϊ" << aver << endl;
	return 0;
}
