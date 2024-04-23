#include <bits/stdc++.h>

using namespace std;

void sb(){
    int n, k;
    cin >> n >> k;
    
    if(n == 1){
        cout << k << "\n";
        return;
    }
    
    int a = k, b = 0, idx = 0;
    
    while(a>b){
        b = pow(2,idx)-1;
        a = k-b;
        idx++;
    }
    cout << b << " " << a << " ";
    
    n -= 2;
    
    while(n>0){
        cout << 0 << " ";
        n--;
    }
    
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        sb();
    }
    return 0;
}
