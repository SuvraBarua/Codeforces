#include <bits/stdc++.h>

using namespace std;

void Acode(){
    string s;
    cin >> s;
    
    for(int i = s.length()-1; i>=0; i--){
        if(s[i] == 'b'){
            s.erase(i, 1);
            for(int j =i-1; j>=0; j--){
                if((s[j] > 96& s[j] < 123) && s[j]!= 'b'){
                    s.erase(j, 1);
                    break;
                }
            }
        }
        else if(s[i] == 'B'){
            s.erase(i, 1);
            for(int j =i-1; j>=0; j--){
                if((s[j] > 64 && s[j] < 91) && s[j]!='B'){
                    s.erase(j, 1);
                    break;
                }
            }
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
