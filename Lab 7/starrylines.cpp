#include <iostream>
using namespace std;

void print_starry_line(int num_spaces, int num_stars) {
    for (int i = 0; i < num_spaces; i++)
        cout << " ";
    for (int i = 0; i < num_stars; i++)
        cout << "*";
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int spaces = n - i;
        int stars = 2 * i - 1;

        print_starry_line(spaces, stars);
        cout << " ";
        print_starry_line(spaces, stars);
        cout << " ";
        print_starry_line(spaces, stars);
        cout << endl;
    }
    return 0;
}
