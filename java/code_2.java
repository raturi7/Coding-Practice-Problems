package Exception;

public class Exp_2 {
    public static void main (String args[])
    {   int a,b,c,d,e,f;a=25;b=4;c=0;d=3;
        e=a/b;System.out.println(e);
        try {
            e = a / c;
            System.out.println(e);
        }
        catch (Exception E){
            System.out.println("Mistake : "+E);
        }
        e=a/d;System.out.println(e);
        System.out.println("Hari");
    }

}
