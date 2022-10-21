import java.util.*;
class DecimalToBinary2
{
 public static void main(String args[])
 {
  Scanner sc=new Scanner(System.in);
  System.out.println("Enter a no");
  int n=sc.nextInt();
  String str="";
  str=str+" ";
  int r=0,t=n,i=0;
  while(t>0)
  {
   r=t%2;
   str=r+str;
   t=t/2;
   }
   System.out.println(str);
  }
}
  