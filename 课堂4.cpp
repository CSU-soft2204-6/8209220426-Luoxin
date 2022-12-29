#include <iostream>
using namespace std;
template<class TNO, class TScore, int num>
class Student {
private:
	int n;
	TNO StudenttID[num];
	TScore score[num];
public:
	void append(TNO ID, TScore s);
	void Delete(TNO ID);
	int search(TNO ID);
	void sort();
	void DispAll();
	Student();
};
