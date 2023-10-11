#include <iostream>

using namespace std;

void sumOfThree(){
    int n; 
    cin >> n;
    
    if(n < 7){
        cout << "No" << endl;
        return;
    }
    
    if(n%3 == 0){
        int x = n-5;
        if(x == 4){
            cout << "No" << endl;
            return;
        }
        else{
            cout << "Yes" << endl;
            cout << 1 << " " << 4 << " " << x << endl;
        }
    }
    else{
        int x = n-3;
        if(x == 2){
            cout << "No" << endl;
            return;
        }
        else{
            cout << "Yes" << endl;
            cout << 1 << " " << 2 << " " << x << endl;
        }
    }
}

int main(){
    int t;
    cin >> t;
    
    for(int i = 0; i<t; i++){
        sumOfThree();
    }
    
    return 0;
}