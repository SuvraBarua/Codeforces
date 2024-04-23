#include <bits/stdc++.h>

using namespace std;

void sb(){
    int n;
    cin >> n;
    
    int a[n];
    int counter[n] = {0};
    
    int ans = 0, tc = 0;
    
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    
    for(int i = 0; i<n; i++){
        if(counter[i] == 0){
            for(int j = i+1; j<n;j++){
                if(a[i] == a[j]){
                    counter[j] = 1;
                    tc++;
                }
            }
        }
        if(tc>2){
            ans += tc/3;
        }
        tc=0;
    }
    cout << ans << "\n";
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
