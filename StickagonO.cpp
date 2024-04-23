#include <bits/stdc++.h>

using namespace std;

int main(){ 
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  int t; 
  cin >> t;
  while(t--) {
    int n; 
    cin >> n; 
    vector<int> a(101, 0);
    for (int i = 0; i < n; i++) {
      int x; 
      cin >> x;
      a[x]++;
    }
    int sum = 0;
    for (auto& s : a) 
      sum += s / 3;
    cout << sum << "\n";
  }
} 
