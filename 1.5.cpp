#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float C;
	cout.setf(ios::fixed);
	cout << "���������϶�:" << endl;
	cin >> C;
	float F = C * 1.8 + 32.0;
	cout << "���϶�:" << setprecision(2) << F << endl;
	return 0;
}
