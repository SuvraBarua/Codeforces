#include <bits/stdc++.h>

using namespace std;

void sb(){
    int n, first = 0, gCounter = 0;
    int cCounter = 0, tmp = 0, ans = 0;
    char c;
    string s;
    
    cin >> n >> c >> s;
    
    if(c == 'g'){
        cout << 0 << "\n";
        return;
    }
    
    for(int i = 0; i<n; i++){
        if(gCounter == 0 && s[i]!= 'g'){
            first++;
        }
        if(s[i] == 'g'){
            gCounter = 1;
        }
        if(cCounter == 0 && s[i] == c){
            cCounter = 1;
            tmp++;
        }
        else if(cCounter == 1 && s[i] != 'g'){
            tmp++;
        }
        else if(cCounter == 1 && s[i] == 'g'){
            cCounter = 0;
            ans = max(ans, tmp);
            tmp = 0;
        }
    }
    cout << max(ans, (tmp+first)) << "\n";
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
