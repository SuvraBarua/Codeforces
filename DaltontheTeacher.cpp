#include <iostream>

int main() {
    int t;
    scanf("%d", &t);

    for(int j = 0; j<t; j++){
        int n, ans = 0;
        scanf("%d", &n);

        //the array to hold the numbers:
        int arr[n];

        for(int i = 0; i<n; i++){
            scanf("%d", &arr[i]);
            if(arr[i] == i+1){
                ans++;
            }
        }

        if(ans & 1)
            ans = (ans/2) + 1;
        else
            ans = ans/2;
            
        std::cout << ans << std::endl;
    }
    return 0;
}