#include <iostream>
#include <sstream>
using namespace std;

int parseHex(const char* const hexString) {
    int ans = 0;
    stringstream s;
    s << hex << hexString;
    s >> ans;
    return ans;
}

int main() {
    const int size = 1000;
    char s[size];
    cout << "������һ��ʮ��������: ";
    cin >> s;
    cout << "ʮ����Ϊ: " << parseHex(s);
    return 0;
}
