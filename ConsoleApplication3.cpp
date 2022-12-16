#include <iostream>
using namespace std;

class Format {
protected:
	int X, Y;
public:
	virtual double area() = 0;
	virtual void show() = 0;
};
class Point :public Format {
public:
	Point(int X = 0, int Y = 0) {
		this->X = X;
		this->Y = Y;
		//cout<<"Point"<<endl;
	}
	virtual double area() {
		return 0.0;
	}
	virtual~Point() {
		//cout<<"~Point"<<endl;
	}
	void show() {
		cout << X << "," << Y << endl;
	}
};
class Circle :public Point {
public:
	int r;
public:
	Circle(int X, int Y, int r = 0) :Point(X, Y) {
		this->r = r;
		//cout<<"Circle"<<endl;
	}
	double area() {
		return 3.14 * r * r;
	}
	~Circle() {
		//cout<<"~Circle"<<endl;
	}
	void show() {
		cout << X << "," << Y << ',' << r << endl;
	}
};
class Cylinder :public Circle {
private:
	int h;
public:
	Cylinder(int X, int Y, int r, int h) :Circle(X, Y, r) {
		this->h = h;
	}
	double area() {
		return 2 * Circle::area() + 2 * 3.14 * r * h;
	}
	void show() {
		cout << X << "," << Y << ',' << r << ',' << h << endl;
	}
};
int main()
{
	//	Point p1(10,10);
	//	cout<<"p1.area="<<p1.area()<<endl;
	//	Circle c1(10,10,2);
	//	cout<<"c1.area="<<c1.area()<<endl;
	//	Point *Pp;
	//	Pp=&c1;
	//	cout<<Pp->area()<<endl;
	//	Point &Rp=c1;
	//	cout<<Rp.area()<<endl;

	//	Point *C=new Circle (10,10,2);
	//	delete C;

	Cylinder cy(10, 20, 1, 5);
	Format* p;
	p = &cy;
	p->show();
	cout << "总面积" << p->area() << endl;
	Circle cir(10, 10, 5);
	Format& Rp = cir;
	Rp.show();
	return 0;
}
