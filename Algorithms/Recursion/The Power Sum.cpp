#include<bits/stdc++.h>
using namespace std;

int number_of_ways(int target, int power, int start) {
  if (target == 0) return 1;
  int total = 0;
  for (int j = start + 1; pow(j, power) <= target; ++j) {
    total += number_of_ways(target-pow(j, power), power, j);
  }
  return total;
}

int main() {
    int x, n; cin >> x >> n;
    cout << number_of_ways(x, n, 0);
    return 0;
}
