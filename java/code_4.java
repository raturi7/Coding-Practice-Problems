package Exception;

public class Exp_4 {
    public static void main (String args[])
    {   int a,b,c,d,e,f; a=25;b=4;c=0;d=3;
        //c=10;
        try{
            e=a/b;System.out.println(e);
            e=a/c;System.out.println(e);
            e=a/d;System.out.println(e);
        }
        /*catch (Exception E){
            System.out.println("Continue");
        }*/
        finally {
            System.out.println("Continue");
        }
        e=a/d;System.out.println(e);
    }

}
