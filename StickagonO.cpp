#include <bits/stdc++.h>

using namespace std;

int main(){ 
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
