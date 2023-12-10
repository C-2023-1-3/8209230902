#include <iostream>
using namespace std;

int main() {
    int marker;
    bool arr[100];
    for (int j = 0; j <= 99; j++) {
        arr[j] = 1;
    }
    for (int s = 2; s <= 100; s++) {
        marker = s;
        while (marker <= 100) {
            if (arr[marker - 1]) {
                arr[marker - 1] = 0;
            }
            else {
                arr[marker - 1] = 1;
            }
            marker += s;
        }
    }
    for (int i = 0; i <= 99; i++) {
        if (arr[i]) {
            cout << i + 1 << " ";
        }
    }
    return 0;
}