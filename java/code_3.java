package Exception;

import java.io.DataInputStream;

public class Exp_3 {
    private static int read1() {
        int i = 2, j;
        String a;
        try {
            DataInputStream o = new DataInputStream(System.in);
            a = o.readLine();
            i = Integer.parseInt(a);
        } catch (Exception t) {
            System.out.println("Not a number" + t);
        }
        return i;
    }

    public static void main(String args[]) {
        int i, a, f[] = {8, 12, 34, 16};
        System.out.print("Enter Index Number : ");
        a = Exp_3.read1();
        try {
            System.out.println(f[a]);
            i = 25 / 0;
        } catch (ArrayIndexOutOfBoundsException t) {
            System.out.println("Illegal Memory reference : " + t);
        } catch (ArithmeticException t) {
            System.out.println("Wrong Division : " + t);
        } /*catch (Exception t) {
            System.out.println("stop : " + t);
        }*/
    }

}
