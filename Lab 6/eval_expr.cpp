#include <iostream>
using namespace std;

int main() {
    int result, num;
    char op;

    cin >> result;

    while (cin >> op && op != '?') {
        cin >> num;
        if (op == '+')
            result += num;
        else if (op == '-')
            result -= num;
    }

    cout << result;
    return 0;
}
