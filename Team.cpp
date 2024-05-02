#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, ans = 0, a, b, c;
    
    cin >> n;
    
    for(int i = 0; i<n; i++){
        cin >> a>> b>>c;
        if((a+b+c) > 1)
            ans++;
    }
    cout << ans;
    return 0;
}
