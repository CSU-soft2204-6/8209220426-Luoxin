#include<iostream>
#include<string>
using namespace std;
class Time // 定义 Time 类
{
private: // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void SetTime(int H, int M, int S)
	{
		hour = H; minute = M; sec = S;
	}
	void Showtime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time tl; //定义 t1 为 Time 类对象
	double x, y, z;
	cin >> x >> y >> z;
	tl.SetTime( x,y,z);
	tl.Showtime();
	return 0;
}