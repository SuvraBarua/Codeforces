#include <iostream>

using namespace std;

void swap() {
    string s;
    
    cin >> s;
    int x = 0, y = 0, len = s.length();
    
    for(int i = 0; i<len; i++){
        s[i] == '0' ? x++ : y++;
    }
    
    int ans = len;
    
    for(int i = 0; i<s.length(); i++){
        if(s[i] == '0' && y>0){
           y--;
           ans--;
        }
        else if(s[i] == '1' && x>0){
            x--;
            ans--;
        }
        else{
            break;
        }
    }
    
    cout << ans << endl;

    return;
}

int main(){
    
    int n;
    cin >> n;
    
    for(int i = 0; i<n; i++){
        swap();
    }
    return 0;
}
