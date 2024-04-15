#include <bits/stdc++.h>

using namespace std;

bool isEqual(int a[], int b[], int s){
    for(int i = 0; i<s; i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

void sb(){
    int n, c, d;
    cin >> n >> c >> d;
    
    int ns = n*n;
    
    int a[ns], matrix[ns];
    
    for(int i = 0; i<ns; i++){
        cin >> a[i];
    }
    sort(a, a+ns);
    
    matrix[0] = a[0];
    
    for(int i = 1; i<n; i++){
        matrix[i] = matrix[i-1] + c;
    }
    
    for(int i = 1; i<n; i++){
        for(int j= 0; j<n; j++){
            matrix[n*i +j] = matrix[n*(i-1) +j] + d;
        }
    }
    
    sort(matrix, matrix+ns);
    if(isEqual(a, matrix, ns)){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        sb();
    }
    return 0;
}
