#include <bits/stdc++.h>

using namespace std;

void sb(){
    int n, count = 0;
    cin >> n;
    int a[n];
    set<int>x;
    
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(x.count(a[i])){
            count++;
        }
        else{
            x.insert(a[i]);
        }
    }
    
    cout << count << "\n";
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
