#include<iostream>
#include<string>
using namespace std;
class Time // ���� Time ��
{
private: // ���ݳ�ԱΪ���õ�
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
	Time tl; //���� t1 Ϊ Time �����
	double x, y, z;
	cin >> x >> y >> z;
	tl.SetTime( x,y,z);
	tl.Showtime();
	return 0;
}