#include <iostream>
using namespace std;
int main() {
	int a,b;
	cout << "请输入a,b的值" << endl;
	cin >> a >>b; 
	int x = a<b ? a:b;
	for (x; x >=1; x--)
	{
		if (a % x == 0 && b % x == 0)
			
	
		
		break;
		
	}
	cout << "最大公约数为" << x << endl;
	cout << "最小公倍数为" << a * b / x  << endl;
	return 0;



}