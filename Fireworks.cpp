#include <bits/stdc++.h>

using namespace std;

void shuvro101(){
    long long a, b, m, ans = 0;
    
    cin >> a >> b >> m;
    
    ans = (m+a)/a + (m+b)/b;
    
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    
    while(t){
        shuvro101();
        t--;
    }

    return 0;
}
