package Exception;

import java.lang.*;

public class Exp_1 {
    public static void main(String args[]) {
        String a, b;
        char c;
        a ="abcedf";
        try {
            b = a.substring(2, 5);
            System.out.println(b);
            c = a.charAt(9);
            System.out.println(c);
        }
        catch (Exception t) {
            System.out.println("The exception is " + t);
        }
        System.out.println("Hari");
    }
}
