package Lab_7;


import java.util.*;

public class Exp_1 {
    public static void main(String args[]){
        Scanner S1=new Scanner(System.in);
        int arr[] = new int[10];
        String str[]= new String[10];
        int i,n,sum,c;
        System.out.print("Enter number of student and roll number : ");
        n=S1.nextInt();
        try {
            System.out.println("Enter the names of the students : ");
            for (i = 0; i < n; i++) {
                str[i] = S1.nextLine();
            }

        }
        catch (ArrayIndexOutOfBoundsException E){
            System.out.println("");
        }
        try{
            System.out.println("Enter the Roll Numbers of the students : ");
            for (i = 0; i < n; i++) {
                System.out.print("R_214220");
                arr[i] = S1.nextInt();
            }
        }
        catch (ArrayIndexOutOfBoundsException E){
            System.out.println("");
        }
        try {
            System.out.println("Name    " + " Roll Number ");
            for (i = 0; i < n; i++) {
                System.out.println(str[i] + "  " + arr[i]);
            }
        }
        catch (ArrayIndexOutOfBoundsException E){
            System.out.println("Array is Exceeds its limit");
        }
    }
}


