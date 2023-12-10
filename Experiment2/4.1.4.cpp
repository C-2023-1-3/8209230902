#include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int size3 = size1 + size2;
    int n = size3;
    while (n > 0) {
        if (list1[size1 - 1] > list2[size2 - 1]) {
            list3[n - 1] = list1[size1 - 1];
            size1--;
            n--;
        }
        else {
            list3[n - 1] = list2[size2 - 1];
            size2--;
            n--;
        }
    }
}

int main() {
    int size1, size2;
    cout << "�����һ������ĳ���: ";
    cin >> size1;
    int* arr1 = new int[size1];
    cout << "�����һ����������: ";
    for (int i = 0; i <= size1 - 1; i++) {
        cin >> arr1[i];
    }

    cout << "����ڶ�������ĳ���: ";
    cin >> size2;
    int* arr2 = new int[size2];
    cout << "����ڶ�����������: ";
    for (int j = 0; j <= size2 - 1; j++) {
        cin >> arr2[j];
    }

    int* arr3 = new int[size1 + size2];
    merge(arr1, size1, arr2, size2, arr3);
    for (int k = 0; k <= size1 + size2 - 1; k++) {
        cout << arr3[k] << " ";
    }

    return 0;
}