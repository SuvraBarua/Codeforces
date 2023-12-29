import java.util.Scanner;
public class SwapAndDelete{
    public static void swapAndDelete() {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        int length = s.length();
        int n0 = 0, n1 = 0;
        
        for(int i = 0; i<length; i++){
            if(s.charAt(i) == '0') 
                n0++ ;
            else{
                n1++;
            }
        }
        
        for(int i = 0; i<length; i++){
            if(s.charAt(i) == '0' && n1 > 0){
                n1--;
            }
            else if(s.charAt(i) == '1' && n0 > 0){
                n0--;
            }
            else {
                length = i;
                break;
            }
        }
        System.out.println(s.length() - length);
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        
        for(int i = 0; i<n; i++){
            swapAndDelete();
        }
    }
}
