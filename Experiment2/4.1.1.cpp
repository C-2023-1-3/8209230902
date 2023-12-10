#include <iostream>
using namespace std;
int main() {
    int a[10];
    int b[10];
    cout << "Enter ten numbers: ";
    for (int i = 0; i <= 9; i++) {
        cin >> a[i];
    }
    b[0] = a[0];
    int b_num = 1;
    int different_num = 0;
    for (int j = 1; j <= 9; j++) {
        for (int k = 0; k < b_num; k++) {
            if (a[j] != b[k]) {
                different_num++;
            }
            else {
                break;
            }
            if (different_num == b_num) {
                b[b_num] = a[j];
                b_num++;
                break;
            }
        }
        different_num = 0;
    }
    cout << "The distinct numbers are: ";
    for (int h = 0; h < b_num; h++) {
        cout << b[h] << " ";
    }
    return 0;
}