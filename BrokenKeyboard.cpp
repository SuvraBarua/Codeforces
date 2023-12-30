#include <bits/stdc++.h>

using namespace std;

void Acode(){
    string s;
    cin >> s;
    int bbc=0, sbc=0;
    string ans = "";
    for(int i = s.length()-1; i>=0; i--){
        if(s[i] == 'b'){
            sbc++;
        }
        else if(s[i] == 'B'){
            bbc++;
        }
        else if((s[i] > 64 && s[i] < 91) && bbc>0){
               bbc--;
        }
        else if((s[i] > 96 && s[i] < 123) && sbc>0){
               sbc--;
        }
        else{
            ans = ans + s[i];
        }
    }
    cout << s << endl;
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        Acode();
    }
    return 0;
}
