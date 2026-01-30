#include <iostream>
using namespace std;

int sum(int n) {
return n * (n + 1)/2;
}

int main() {
  int N;
  cin >> N;
  cout << sum(N);
  return 0;
}
