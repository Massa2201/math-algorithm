#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  ll n;
  cin >> n;

  for (ll i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      n /= i;
      cout << i << endl;
    }
    if (n >= 2) {
      cout << n << endl;
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