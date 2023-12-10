#include <iostream>
using namespace std;

int indexOf(char* s1,char* s2) {
    int mark, same_num = 0, s1_mark = 0;
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 > len2) {
        return -1;
    }
    for (int i = 0; i <= len2 - 1; i++) { //遍历s2,先找s2中哪个字符和s1首字母一样
        if (s1[0] == s2[i]) {
            mark = i;
            if (len2 - mark < len1) { //s2剩余不够直接停
                return -1;
            }
            else {
                for (int j = mark; j <= mark + len1 - 1; j++) {   //循环遍历s2后对应位数的字符
                    if (s1[s1_mark] == s2[j]) {
                        same_num++;
                        s1_mark++;
                    }
                    else {
                        same_num = 0; //重置相同字符数
                        break;
                    }
                    if (same_num == len1) {
                        return mark;
                    }
                }
            }
        }
    }
    return -1;
}

int main() {
    const int size = 1000;
    char s1[size], s2[size];
    cout << "输入第一个字符串s1: ";
    cin.getline(s1, size);
    cout << "输入第二个字符串s2: ";
    cin.getline(s2, size);
    cout << "indexOf( " << s1 << " , " << s2 << " )is " << indexOf(s1, s2);
    return 0;
}
