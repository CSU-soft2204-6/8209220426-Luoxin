#include <iostream>
using namespace std;
int main() {
	float x;
	cout << "ÇëÊäÈëxµÄÖµ" << endl;
	cin >> x;
	if (x > 0 && x < 1)
	{
		x = 3 - 2 * x;
		cout << x << endl;
	}
	else if (x >= 1 && x < 5)
	{
		x = 2 / (4 * x) + 1;
		cout << x << endl;
	}
	else
		x = x * x;
	cout << x << endl;






}