#include <iostream>
using namespace std;
#include <iomanip>
int main() {
	double f;
	double w;
	cout << "请输入华氏度" << endl;
	cin >> f;
	w = (f - 32) / 1.5;
	cout << "摄氏度为：" << w << setprecision(2) << endl;




}