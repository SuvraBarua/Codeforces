#include <bits/stdc++.h>

using namespace std;

void sb(){
    int n;
    cin >> n;
    
    int a[n];
    
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    if(a[n-1] > a[n-2]){
        cout << "NO" << "\n";
        return;
    }
    for(int i = 1; i<n-1; i++){
        a[i] -= (a[i-1]*2);
        a[i+1] -= a[i-1];
        if(a[i]<0){
            cout << "NO" << "\n";
            return;
        }
    }
    if(a[n-2] ==0 && a[n-1] ==0)
        cout << "YES" << "\n";
    else{
        cout << "NO" << "\n";
    }
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
