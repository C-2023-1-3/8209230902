#include <iostream>
using namespace std;

void bubble(double* arr, int len) {
    double temp;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int len;
    cout << "���������ָ���: ";
    cin >> len;
    double* arr = new double[len];
    cout << "������ " << len << " ������: ";
    for (int i = 0; i <= len - 1; i++) {
        cin >> arr[i];
    }
    bubble(arr, len);
    cout << "����������Ϊ: ";
    for (int j = 0; j <= len - 1; j++) {
        cout << *arr << " ";
        arr++;
    }

    delete[] arr;

    return 0;
}