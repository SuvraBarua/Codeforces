#include <bits/stdc++.h>

using namespace std;

void maxPlusSize(){
    int n, max = 0, maxIndex = 0;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
            maxIndex = i;
        }
    }
    for(int i = 0; i<n; i++){
        if(arr[i] == max){
            if(!(i&1)){
                maxIndex==i;
                break;
            }
        }
    }
    if(n&1){
        if(maxIndex&1){
            cout << (n/2)+max;
        }
        else{
            cout << (n/2)+max+1;
        }
    }
    else{
        cout << (n/2)+max;
    }
    cout << endl;
}

int main(){
    int t; 
    cin >> t;
    while(t){
        maxPlusSize();
        t--;
    }
}
