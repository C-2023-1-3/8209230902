#include <iostream>
using namespace std;

void count(const char s[], int counts[]) {
    int len = strlen(s);
    for (int i = 0; i <= len - 1; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            counts[s[i] - 97]++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            counts[s[i] - 65]++;
        }
    }
    for (int k = 0; k <= 25; k++) {
        if (counts[k] != 0) {
            cout << char('a' + k) << ": " << counts[k]<< "times" << endl;
        }
    }
}

int main() {
    const int size = 1000;
    char s[size];
    int counts[26] = { 0 };
    cout << "ÊäÈëÒ»¸ö×Ö·û´®: ";
    cin.getline(s, size);
    count(s, counts);
    return 0;
}
