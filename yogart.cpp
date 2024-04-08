#include <bits/stdc++.h>

using namespace std;

void yogart(){
    int n, a, b, ans = 0;
    cin >> n >> a >> b;
    
    if(2*a > b)
        ans = (n/2) * b + n%2 * a ;
    else
        ans = n * a;
        
    cout << ans << "\n";
}

int main(){
    int t;
    cin >> t;
    
    for(int i = 0; i<t; i++){
        yogart();
    }
    return 0;
}
