//Codeforces 1848A

#include <iostream>

using namespace std;

void vika(){
    int n, m, k, x, y, sum = 0, answer = 0;
    cin >> n >> m >> k >> x >> y;
    
    sum = (x+y)%2;
    
    int arr[k][2];
    for(int i = 0; i<k; i++){
        cin >> arr[i][0] >> arr[i][1];
        int temp = ((arr[i][0]+arr[i][1])%2);
        if(sum == temp){
            answer = 1;
        }
    }
    if(answer){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
    
    return;
}

int main() {
    int t;
    cin >> t;
    
    for(int i = 0; i<t; i++){
        vika();
    }

    return 0;
}
