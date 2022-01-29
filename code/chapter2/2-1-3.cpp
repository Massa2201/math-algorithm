#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  int a, b, c, s;
  cin >> a >> b >> c;

  s = 100 * a + 10 * b + c;

  cout << s << endl;
}


/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

vector dp(n + 1, vector<int>(9));

vector<int> vec(N);

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

*/