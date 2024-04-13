#include <bits/stdc++.h>

using namespace std;

void shuvro101(){
    long long a, b, m, ans = 0;
    
    cin >> a >> b >> m;
    
    ans = (m+a)/a + (m+b)/b;
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    
    int t;
    cin >> t;
    
    while(t){
        shuvro101();
        t--;
    }

    return 0;
}
