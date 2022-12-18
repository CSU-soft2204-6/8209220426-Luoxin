#include <iostream>
using namespace std;
int main() {
	const int arr = 100;
	bool L[arr];
	for (int i = 0; i < arr; i++)
	{
		L[i] = false;
	}
	for (int j = 0; j < arr; j++)
	{
		for (int k = j; k < arr; k+=j+1)
		{
			if (L[k])
			{
				L[k] = false;
			}
			else
			{
				L[k] = true;
			}
		}
	}
	for (int m = 0; m < arr; m++)
	{
		if (L[m])
		{
			cout << m + 1 << " ";
		}
	}
	return 0;
}