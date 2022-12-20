#include <iostream>
using namespace std;
int main() {
double x, y;
	char k;
	cout << "请输入x" << endl;	
	cout << "请输入符号" << endl;
	cout << "请输入y" << endl;
	cin >> x >> y>> k;
	switch (k)
	{
	case '+':
		cout << "x" << "+"  << "y=" <<x + y << endl;
		break;
	case'-':
		cout << "x" << "-" << "y=" << x - y << endl;
		break;
	case'*':
		cout << "x" << "*" << "y=" << x * y << endl;
		break;
	case'/':
		
		if (y==0)
		{
			cout << "非法" << endl;
			return 0;
		}
		cout << "x" << "/" << "y=" << x / y << endl;
		break;
	case'%':
		if (y == 0) {
			cout << "非法";
			return  0;
		}
		else
		{
			cout << "x" << "%" << "y=" << (int)x % (int)y << endl;
		}

		break;

	default:
		break;
	}

}