#include <iostream>
using namespace std;

bool is_prime(int num) {

    if (num == 1) {
        return false;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int count = 0;
    for (int i = 1; i <= 200; i++) {
        if (is_prime(i)) {
            cout << i << " ";
            count++;
            if (count % 10 == 0) {
                cout << '\n';
            }
        }
    }
    return 0;
}