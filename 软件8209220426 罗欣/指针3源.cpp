#include <iostream>
using namespace std;
void sort(int* p, int n)
{
	int t;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (p[j] > p[i]) {
				t = p[i];
				p[i] = p[j];
				p[j] = t;
			}
		}
	}
}
int main()
{
	int n;
	cout << "����������Ԫ�ظ���";
	cin >> n;
	int* p = new int[n];
	cout << "����Ԫ��";
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	sort(p, n);
	for (int i = 0; i < n; i++) {
		cout << p[i] << ' ';
	}
	delete p;
	return 0;
}