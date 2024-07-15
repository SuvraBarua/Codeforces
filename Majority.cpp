#include <bits/stdc++.h>

using namespace std;

void majority(){
    int n, oC = 0, zC =0;
    string s;
    cin >> n >> s;
    
    for(int i = 0; i<n; i++){
        if(s[i] == '1'){
            oC++;
        }
        else if(s[i] == '0' && s[i-1] != '0'){
            zC++;
        }
    }
    
    if(oC > zC){
        cout << "Yes" << endl;
    }
    else{
        cout << "No"<< endl;
    }
}

int main(){
    int t;
    cin >> t;
    
    while(t){
        majority();
        t--;
    }
    return 0;
}
