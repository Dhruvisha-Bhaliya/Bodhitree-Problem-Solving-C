#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age < 13) {
        cout << "child";
    }
    else if (age >= 13 && age <= 19) {
        cout << "teenager";
    }
    else {
        cout << "adult";
    }

    return 0;
}
