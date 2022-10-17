import java.util.HashSet;
import java.util.Scanner;
public class Permutations 
{
    void pattern1(int arr[])
    {
        int size;
        HashSet<String> s =new HashSet<>();
        for (int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for (int k=0;k<3;k++)
                {
                    if(i!=j && j!=k && i!=k)
                    {
                        s.add(arr[i]+""+arr[j]+""+arr[k]);
                    }
                }
            }
        }
        size=s.size();
        System.out.println("total combinations possible: "+size+" which are:"+s);
    }
    public static void main(String[] args) 
    {
        try (Scanner sc = new Scanner(System.in)) 
        {
            int arr[]=new int[3];
            Permutations obj = new Permutations();
            arr[0]=sc.nextInt();
            arr[1]=sc.nextInt();
            arr[2]=sc.nextInt();
            obj.pattern1(arr);
         }
    }
}

