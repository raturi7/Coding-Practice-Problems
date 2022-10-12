import java.util.*;

public class reverse_half_pyramid{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int n=sc.nextInt();
        
        for(int i=n; i>=1; i--){ 
            for(int j=i;j>=1; j--){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}