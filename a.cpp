#include <bits/stdc++.h>

using namespace std;

void split(){
    int n, k, ans = 0;
    cin >> n >> k;
    
    if(n==1){
        cout << 0 << endl;
        return;
    }
    
    while(n>k){
        n = n-(k-1);
        ans++;
    }
    cout << ans+1 << endl;
}

int main(){
    int t;
    cin >> t;
    
    while(t){
        split();
        t--;
    }
}
