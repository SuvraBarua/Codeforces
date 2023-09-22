#include <iostream>
using namespace std;

void comeTogether(){
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    int ans = 0;
    
    if(x2>x1 && x3>x1){
        ans += min(x2,x3)-x1;
    }
    if(x2<x1 && x3<x1){
        ans += x1-max(x2,x3);
    }
    if(y2>y1 && y3>y1){
        ans += min(y2, y3) - y1;
    }
    if(y2<y1 && y3<y1){
        ans += y1-max(y2, y3);
    }
    cout << ans+1 << endl;
    return;
}

int main() {

    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        comeTogether();
    }
    
    return 0;
}