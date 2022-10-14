import java.util.*;
public class linearSearch {
    public static void main(String args[]){
        Scanner sc =new Scanner(System.in);
        System.out.print("Enter the size: ");
        int n=sc.nextInt();

        int arr[]=new int[n];
        System.out.print("Enter the elements: ");
        for(int i=0; i<n; i++){
            arr[i]=sc.nextInt();
        }
        System.out.print("Enter the element : ");
        int x= sc.nextInt();

        for(int i=0; i<n; i++){
            if(arr[i]==x){
                System.out.print("x found at: "+i);
            }
        }
    }
}
