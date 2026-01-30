#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A, B;
    cin >> A >> B;
    swap(&A, &B);
    cout << A << " " << B;
    return 0;
}
