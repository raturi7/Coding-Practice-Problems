import java.util.*;
public class fibonacci {
    public static void main(String args[]){
        Scanner sc =new Scanner (System.in);
        System.out.print("Enter the number of terms: ");
        int n=sc.nextInt();
        int a=0;
        int b=1;
        System.out.print(a+", "+b+", ");

        for(int i=0; i<=n-2; i++){
            int c=a+b;
            System.out.print(c+", ");
            a=b;
            b=c;
        }
    }
}
