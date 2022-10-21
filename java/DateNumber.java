import java.util.*;
class DateNumber
{
 public static void main(String args[])
 {
  Scanner sc=new Scanner(System.in);
  System.out.println("Enter the date");
  int dd=sc.nextInt();
  System.out.println("Enter the month");
  int mm=sc.nextInt();
  System.out.println("Enter the year");
  int yy=sc.nextInt();
  int a[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  int i=0,sum=0;
  if(yy%4 == 0)
  {
    a[2]=29;
   }
  for(i=1;i<=mm-1;i++)
  {
   sum=sum+a[i];
   }
  sum=sum+dd;
  System.out.println("The date number is"+sum);
 }
}  
