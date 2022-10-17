import java.util.*;
class AllArmstrong 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int a[]=new int[10];
        int i=0;
        for(i=0;i<10;i++)
        {
            System.out.println("Enter a no");
            a[i]=sc.nextInt();
        }
        for(i=0;i<10;i++)
         {
            int t=a[i],sum=0,r=0;
            while(t>0)
            {
                r=t%10;
                sum=sum+r*r*r;
                t=t/10;
            }
            if(sum==a[i])
            System.out.println(a[i]);    
        }   
    }
}