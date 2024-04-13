#include <bits/stdc++.h>
 
using namespace std;
 
void Acode(){
    string s;
    cin >> s;
    int bbc=0, sbc=0;
    for(int i = s.length()-1; i>=0; i--){
        if(s[i] == 'b'){
            sbc++;
            s[i] = '';
        }
        else if(s[i] == 'B'){
            bbc++;
            s[i] = '';
        }
        else if((s[i] > 64 && s[i] < 91) && bbc>0){
               bbc--;
               s[i] = '';
        }
        else if((s[i] > 96 && s[i] < 123) && sbc>0){
               sbc--;
               s[i] = '';
        }
        else{
            continue;
        }
    }
    cout << s << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        Acode();
    }
    return 0;
}
