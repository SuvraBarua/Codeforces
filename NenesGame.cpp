#include <bits/stdc++.h>

using namespace std;

void sb(){
    int k, q;
    cin >> k >> q;
    
    int a[k];
    int n[q];
    
    for(int i = 0; i<k; i++){
        cin >> a[i];
    }
    for(int i = 0; i<q; i++){
        cin >> n[i];
    }
    for(int i = 0; i<q; i++){
        if(a[0]>n[i]){
            cout << n[i] << " ";
        }
        else{
            cout << (a[0]-1) << " ";
        }
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    while(t){
        sb();
        t--;
    }

    return 0;
}
