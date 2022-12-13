#include <iostream>
using namespace std;
#include<iostream>
using namespace std;
//class human
//{
//	
//public:
//	void learn()
//	{
//		know++;
//	}
//	int know=0;
//};
//class student :public human
//{
//public:
//	void learn()
//	{
//		know += 2;
//	}
//};
class complex {
public:
	double real;
	double image;
	complex()
	{
		real = 0;
		image = 0;
	}
	complex(double t_real, double t_image)
	{
		this->real = t_real;
		this->image = t_image;
	}
	void disply()
	{
		cout << "real=" << this->real << "; image=" << this->image << endl;
	}
	friend complex operator +(complex A, complex B)
	{
		return complex(A.real + B.real, A.image + B.image);
	}
	friend complex operator ++(complex& A, int)
	{
		return complex(A.real++, A.image);
	}
	complex operator+(complex B)
	{
		return complex(this->real + B.real, this->image + B.real);
	}
	complex operator ++()
	{
		return complex(++this->real, this->image);
	}
	complex operator ++(int) {
		return complex(this->real++, this->image);
	}
};
int main()
{
	complex comp1;
	comp1.real = 1.0;
	comp1.image = 1.0;
	comp1.disply();
	complex comp2(2.0, 2.0);
	comp2.disply();
	complex comp3 = comp1 + comp2;
	comp3.disply();
	return 0;
