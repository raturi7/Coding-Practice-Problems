import java.util.*;

public class Ocurrences {
    static char ch;
    static int count = 0;

    static int Count(String str) {
        int i = str.indexOf(ch);
        if (i > (-1)) {
            count++;
            String s = str.substring(i + 1);
            Count(s);
        }
        return count;
    }

public static void main(String[] args) {
        try (Scanner sc = new  Scanner(System.in)) {
            String str =sc.nextLine();
            ch=sc.next ( ).charAt(0);
            int  c=Count(str);
            System.out.println(c);
        }
}
}
