#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

ll g(ll a, ll b) {
  while (a >= 1 && b >= 1) {
    if (a < b) b = b % a;
    else a = a % b;
  }
  return max(a, b);
  
}

int main() {
  ll n, a, b, c;
  cin >> n;
  vector<int> vec(n);

  for (int i = 0; i < n; i++) cin >> vec.at(i);
    a = g(vec.at(0), vec.at(1));
    b = vec.at(0) * vec.at(1) / a;
  for (int i = 2; i < n; i++) {
    c = g(vec.at(i), b);
    b = vec.at(i) * b / c;
  }
  cout << b << endl;

}


/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

vector dp(n + 1, vector<int>(9));

vector<int> vec(N);

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

*/