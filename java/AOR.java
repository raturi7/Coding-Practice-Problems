import java.util.*;
class AOR
{
     public static void main(String args[])
     {
         Scanner sc=new Scanner(System.in);
         System.out.println("Enter the length and breadth");
         int len=sc.nextInt();
         int bre=sc.nextInt();
         int Area=len*bre;
         System.out.println("The area is"+Area);
     }
}