#include <iostream>
using namespace std;
int main() {
double x, y;
	char k;
	cout << "������x" << endl;	
	cout << "���������" << endl;
	cout << "������y" << endl;
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
			cout << "�Ƿ�" << endl;
			return 0;
		}
		cout << "x" << "/" << "y=" << x / y << endl;
		break;
	case'%':
		if (y == 0) {
			cout << "�Ƿ�";
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