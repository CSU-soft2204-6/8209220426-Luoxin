#include <iostream>
using namespace std;
#define Π 3.14
int main() {
	float r;
	float h;
	cout << "请输入半径" << endl;
	cin >>r;
	cout << "请输入高度" << endl;
	cin >> h;
	float V;
	V = (Π * r * r * h) / 3;
	cout << "圆锥体积为" << V<<endl;

}