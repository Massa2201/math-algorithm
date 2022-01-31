#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  int n = 10000;
  int m = 0;
  for (int i = 0; i <= n; i++) {
    double px = rand() / (double)RAND_MAX;
    double py = rand() / (double)RAND_MAX;

    if(px * px + py * py <= 1.0) m += 1;
  }
  cout << 4.0 * m / n << endl;
}


/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

vector dp(n + 1, vector<int>(9));

vector<int> vec(N);

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

*/