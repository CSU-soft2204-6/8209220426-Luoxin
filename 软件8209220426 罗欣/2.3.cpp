#include <iostream>
using namespace std;
int main() {
	float a;
	float b;
	float c;
	cout << "输入三角形三边" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	float C;
	C = a + b + c;
	
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "此为三角形" << endl; 
		cout << "周长为" << C << endl;

	 if (a == b&&b == c)
	{
		cout << "此为等边三角形" << endl;
	}
	  else

	  {
		cout << "此不是等边三角形" << endl;
	  }
	}
    else
	 {
		   cout << "此不是三角形" << endl;
	}
	
}