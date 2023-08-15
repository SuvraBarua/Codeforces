//1850D

import java.util.Scanner;
import java.util.Arrays;

public class BalancedRound {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int t = input.nextInt();

        for(int l = 0; l<t; l++){
            int n, k, ans = 0, length = 1;
            n = input.nextInt();
            k = input.nextInt();

            int[] arr = new int[n];

            for(int i = 0; i<n; i++){
                arr[i] = input.nextInt();
            }

            Arrays.sort(arr);

            for(int i = 1; i<n; i++){
                if(arr[i] - arr[i-1] <=k){
                  length++;
                }
                else{
                  ans = Math.max(ans, length);
                    length = 1;
                }
             
            }
          	ans = Math.max(ans, length);

            System.out.println(n-ans);
        }
        input.close();
    }
}