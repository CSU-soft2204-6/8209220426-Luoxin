#include <iostream>
using namespace std;
#include <cmath>
int main() {
	float a;
	cout << "ÇëÊäÈëaµÄÖµ" << endl;
	cin >> a;
	double x1, x2;
	x1 = a ;
	x2 = x1 + a / x1;
	x2 = x2 / 2;
	do
	{
		x1 = x2;
		x2 = (x1 + a / x1) / 2;
	}
	while (fabs(x2 - x1) >=( 1e-5));
	
		
	cout << x2 << endl;

	return 0;








}