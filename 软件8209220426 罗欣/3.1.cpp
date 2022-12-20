#include <iostream>
using namespace std;
int MAX(int x, int y)
{
	int z;
	z = x < y ? x : y;
	for (; z >= 1; z--)
	{
		if (x % z == 0 && y % z == 0)
		{
			cout << "最大公约数为" << z;
			cout << "最小公倍数为" << x * y / z;
			break;
		}
		
	}

	return z;
}
int main() { 

	int a,b;
	cin >> a>>b;
	MAX(a, b);
	return 0;
}