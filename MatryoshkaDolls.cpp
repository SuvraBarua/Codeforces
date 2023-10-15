#include <iostream>

using namespace std;

void RussianDolls(){
    int n, temp = 0;
    
    cin >> n;
    
    int Dolls[n];
    
    cin>> Dolls[0];
    
    if(n == 1){
        cout << "Yes" << endl;
    }
    
    for(int i = 1; i<n; i++){
        cin >> Dolls[i];
        
        if(Dolls[i] == Dolls[i-1]){
            temp++;
        }
    }
    if(temp){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
}

int main(){
    int t;
    cin>>t;
    
    for(int i = 0; i<t; i++){
        RussianDolls();
    }
    
    return 0;
}
