#include <iostream>
using namespace std;
int main() {
	int a, b, ans1 = 0,ans2 = 0, min, max = 0;
	cin >> a >> b;
	max = (a >= b ? a : b); min = (a <= b ? a : b);
	while (1) {
		if ((a % min == 0) && (b % min == 0)) {
			ans1 = min;
			break;
		}
		min--;
	}
	while (1) {
		if ((max % a == 0) && (max % b == 0)) {
			ans2 = max;
			break;
		}
		max++;
	}
	cout << "���Լ��Ϊ��" << ans1 << "\t" << "��С������Ϊ��" << ans2 << endl;
    return 0;
}