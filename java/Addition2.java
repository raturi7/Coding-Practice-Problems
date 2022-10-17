import java.util.*;
public class Addition2 
{
 int a;
 int b;
 public void input(int x,int y)
 {
     a=x;
     b=y;
 }   
 public int sum()
 {
     int s=a+b;
     return(s);
 }
 public static void main(String args[])
 {
     Scanner sc=new Scanner(System.in);
     System.out.println("Enter two numbers");
     int x=sc.nextInt();
     int y=sc.nextInt();
     Addition2 ob=new Addition2();
     ob.input(x,y);
     int s=ob.sum();
     System.out.println("The sum is"+s);
 }
}
