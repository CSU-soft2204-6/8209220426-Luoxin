#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;

int indexOf(const char s1[], const char s2[])
{
	string str1 = s1;
	string str2 = s2;
	return str2.find(s1);
}

int main()
{
	char s1[100], s2[100];
	cout << "Enter the first string:";
	cin >> s1;
	cout << "Enter the second string:";
	cin >> s2;
	cout << indexOf(s1, s2) << endl;
	return 0;
}
