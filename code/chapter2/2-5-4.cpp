#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

bool isprime(int x) {
  for (int i = 2; i <= x - 1; i++) {
    if (x % i == 0) return false;
  }
  return true;
}
int main() {
  int x;
  cin >> x;
  for (int i = 2; i <= x; i++) {
    if (isprime(i) == true) {
    cout << i << endl;
  }
  }
}


/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

vector dp(n + 1, vector<int>(9));

vector<int> vec(N);

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

*/