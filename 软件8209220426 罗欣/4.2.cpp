#include <iostream>
using namespace std;
double pop[10];
void Max() {
	for (int i = 0; i < 10; i++)
	{
		cin >> pop[i];
	}
	bool changed = true;
		do
		{
			changed = false;
			for (int i = 0; i < 9; i++)
			{

				if (pop[i] > pop[i + 1])
				{
					double temp= pop[i];;
					pop[i] = pop[i + 1];
					pop[i + 1] =temp;
					changed = true;
				}
			}
		} while (changed);
}
int main() {
	Max();
	for (int i = 0; i < 10; i++)
	{
		cout << pop[i];
	}
}