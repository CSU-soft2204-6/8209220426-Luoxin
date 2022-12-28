#include <iostream>
using namespace std;
class rectangle
{
public:
	void Setcin();
	void SetV();

private:
	double length;
	double width;
	double height;
};
void rectangle::Setcin() {
	cout << "请输入长，宽，高  ";
	cin >> length;
	cin >> width;
	cin >> height;
}
void rectangle::SetV() {
	double V = length * width * height;
	cout << "长方柱的体积为：" << V << endl;;
}
int main() {
	rectangle c1,c2,c3;
	c1.Setcin();
	c1.SetV();
	c2.Setcin();
	c2.SetV();
	c3.Setcin();
	c3.SetV();
	return 0;
}
