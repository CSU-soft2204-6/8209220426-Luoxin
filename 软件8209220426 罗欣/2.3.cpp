#include <iostream>
using namespace std;
int main() {
	float a;
	float b;
	float c;
	cout << "��������������" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	float C;
	C = a + b + c;
	
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "��Ϊ������" << endl; 
		cout << "�ܳ�Ϊ" << C << endl;

	 if (a == b&&b == c)
	{
		cout << "��Ϊ�ȱ�������" << endl;
	}
	  else

	  {
		cout << "�˲��ǵȱ�������" << endl;
	  }
	}
    else
	 {
		   cout << "�˲���������" << endl;
	}
	
}