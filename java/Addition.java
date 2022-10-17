import java.util.*;
public class Addition 
{
 public int sum(int a,int b)
 {
     int s=a+b;
     return(s);
 }   
public static void main(String args[])
 {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter two numbers");
    int a=sc.nextInt();
    int b=sc.nextInt();
    Addition ob = new Addition();
    int s=ob.sum(a,b);
    System.out.println("The sum is"+s);
 }
}
