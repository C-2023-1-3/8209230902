#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float C;
	cout.setf(ios::fixed);
	cout << "请输入摄氏度:" << endl;
	cin >> C;
	float F = C * 1.8 + 32.0;
	cout << "华氏度:" << setprecision(2) << F << endl;
	return 0;
}
