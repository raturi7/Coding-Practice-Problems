import java.util.*;
class DecimalToBinary
{
 public static void main(String args[])
 {
  Scanner sc=new Scanner(System.in);
  System.out.println("Enter a no");
  int n=sc.nextInt();
  int a[]=new int[20];
  int r=0,t=n,i=0,j=0;
  while(t>0)
  { 
   r=t%2;
   a[i]=r;
   i++;
   t=t/2;
   }
   for(j=i-1;j>=0;j--)
   System.out.print(a[j]);
  }
}