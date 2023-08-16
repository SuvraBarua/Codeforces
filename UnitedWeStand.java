//1859A

import java.util.*;


public class UnitedWeStand{
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    int t = input.nextInt();
    
    for(int i = 0; i<t;i++){
      int n = input.nextInt();
      int[] arr = new int[n];
      
      for(int j = 0; j<n; j++){
        arr[j] = input.nextInt();
      }
      
      Arrays.sort(arr);
      
      int k = n-1;
      while(k>0 && arr[k] == arr[k-1]){
          k--;
      }
      
      if((arr[n-1] - arr[0]) == 0){
          System.out.println(-1);
          continue;
      }
      else{
      System.out.println(k + " " + (n-k));
      }
      
      for(int l = 0; l<k; l++){
          System.out.print(arr[l] + " ");
      }
      
      System.out.println();
      
      for(int l = k; l<n; l++){
          System.out.print(arr[l] + " ");
      }
      System.out.println();
    }
    input.close();
  }
}

    