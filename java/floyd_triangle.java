import java.util.*;

public class floyd_triangle {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.print("Entet the number of rows: ");
        int n=sc.nextInt();

        int ctr=1;
        for(int i=1; i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print(ctr+"  ");
                ctr++;
            }
            System.out.println();
        }
    }
    
}
