#include <bits/stdc++.h>

using namespace std;

bool theSubtractor(int x, int k, int arr[], int n, int z){
    for(int i = 0; i<n; i++){
        if(i!=z){
            int y = abs(x-arr[i]);
            if((y%k) == 0){
                return false;
            }
        }
    }
    return true;
}

void aGameOfDivision(){
    int n, k;
    cin >> n >> k;
    
    int arr[n];
    
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i<n; i++){
        if(theSubtractor(arr[i], k, arr, n, i)){
            cout << "YES" << endl;
            cout << i+1 << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t){
        t--;
        aGameOfDivision();
    }
    return 0;
}
