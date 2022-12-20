#include <iostream>
using namespace std;
int main() {
	int x,y;
	for (int x = 0; x <=4; x++)
	{
		for (int j = 4; j >=0; j--)
		{
			if (x>=j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			
			

			cout << " ";
		}
		cout << endl;
	}
	
	return 0;
}