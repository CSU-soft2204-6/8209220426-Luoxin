#include <iostream> 
#include <vector>
using namespace std;
template<typename T>
vector<T> intersection(const vector<T>& v1, const vector<T>& v2);
int main() {
	vector <string>	v1;
	vector <string> v2;
	for (int i = 0; i < 5; i++)
	{
		string s;
		cout << "请输入向量1";
		cin >> s;
		v1.push_back(s);
	}
	for (int i = 0; i < 5; i++)
	{
		string s;
		cout << "请输入向量2";
		cin >> s;
		v2.push_back(s);
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (v1[i]==v2[j])
			{
				cout << "相同的部分为"<<v1[i] << endl;;
			}
		}
	}
	

	
}
