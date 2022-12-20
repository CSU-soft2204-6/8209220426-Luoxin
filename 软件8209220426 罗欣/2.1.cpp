#include <iostream>
using namespace std;
int main() {
	char i = 0;
	cout << "ÇëÊäÈë×Ö·û" << endl;
	cin >> i;
	if (i>='a'&&i<='z')
	{
		i = i - 32;
	}
	else
	{
		cout << (int)i << endl;
	}
	cout << i << endl;



}