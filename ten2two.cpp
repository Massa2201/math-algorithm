#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  int n;
  string Answer = "";

  cin >> n;
  while (n >= 1) {
    if (n % 2 == 0) Answer = "0" + Answer;
    if (n % 2 == 1) Answer = "1" + Answer;
    n = n / 2;
  }
  cout << Answer << endl;
}


/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

vector dp(n + 1, vector<int>(9));

vector<int> vec(N);

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

*/