//1857B

import java.util.Scanner;

public class GoodArrays{
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    int t = input.nextInt();
    
    for(int i = 0; i<t;i++){
      int n = input.nextInt();
      
      int[] arr = new int[n];
      int oneCnt = 0;
      long sum = 0;
      
      for(int j = 0; j<n; j++){
        arr[j] = input.nextInt();
        
        sum += arr[j];
        
        if(arr[j] == 1){
          oneCnt++;
        }

      }
      
      if(n>1 && sum >= (long)(oneCnt+n))
      System.out.println("YES");
      else{
        System.out.println("NO");
      }
      oneCnt = 0;
    }
    input.close();
  }
}

    