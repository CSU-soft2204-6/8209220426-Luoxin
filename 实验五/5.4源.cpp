#include <iostream>
using namespace std;
class Shape {
private:
	int X, Y;
public:
	
	virtual double area() {
		return 0.0;
	}
};
const double PI = 3.14159;
class Circle :public Shape
{
private:
	double radius;
public:
	Circle(int X, int Y, double R) :Shape()
	{
		radius = R;
	}
	double area()
	{
		return PI * radius * radius;
	}
};
class Square :public Shape
{
private:
	double height;
public:
	Square(int X, int Y, double H) :Shape()
	{
		height = H;
	}
	double area()
	{
		return height * height;
	}
};
class Rectangle :public Shape
{
private:
	double weight, height;
public:
	Rectangle(int X, int Y,int W,int H) :Shape()
	{
		weight = W; height = H;
	}
	double area()
	{
		return weight*height ;
	}
};
class Trapezoid :public Shape
{
private:
	double height, Sh, Dh;
public:
	Trapezoid(int X, int Y, double H,double S,double D) :Shape()
	{
		height = H; Sh = S; Dh = D;
	}
	double area()
	{
		return (Sh + Dh) * height / 2;
	}
};
class Triangle :public Shape
{
private:
	double PD, ID, HD;
public:
		Triangle(int X, int Y, double P, double I,double H) :Shape()
		{
			PD = P; ID = I; HD = H;
		}
		double area()
		{
			double S, K;
		S = (PD + ID + HD) / 2;
		K = S * (S - PD) * (S - HD) * (S - ID);
		return sqrt(K);
		}
};
			double total(Shape* shape[], int num) {
				double tot = 0;

				for (int i = 0; i < num; i++) {
					tot += shape[i]->area();
				}
				return tot;
			}
			int main() {

				Circle circle(0, 0, 10.2);
				cout << "circle.area()=" << circle.area() << endl;
				Square square(0, 0, 3);
				cout << "square.area()=" << square.area() << endl;
				Rectangle rectangle(0,0,3, 4);
				cout << "rectangle.area()=" << rectangle.area() << endl;
				Trapezoid trapezoid(0,0,2.0, 4.5, 3);
				cout << "trapezoid.area()=" << trapezoid.area() << endl;
				Triangle triangle(0,0,4, 5, 6);
				cout << " triangle.area()=" << triangle.area() << endl;
				Shape* shape[5] = { &circle,&square,&rectangle,&trapezoid,&triangle };
				cout << "面积之和为" << total(shape, 5) << endl;
			}