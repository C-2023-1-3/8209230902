#include <iostream>
using namespace std;
int func(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return (func(n - 1) + 1) * 2;
    }
}
int main() {
    cout << func(10);
    return 0;
}