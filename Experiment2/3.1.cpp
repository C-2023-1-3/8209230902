#include <iostream>
using namespace std;

int maxCommon(int num1, int num2) {
    int temp,t;
    if (num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    while (num2 != 0) {
        t = num1 % num2;
        num1 = num2;
        num2 = t;
    }
    return num1;
}

int minCommon(int num1, int num2) {
    int temp;
    temp = maxCommon(num1, num2);
    return (num1 * num2 / temp);
}

int main() {
    int num1, num2;
    cout << "������������ " << endl;
    cin >> num1 >> num2;
    cout << "��С������Ϊ " << minCommon(num1, num2) << endl;
    cout << "���Լ��Ϊ " << maxCommon(num1, num2) << endl;
    return 0;
}