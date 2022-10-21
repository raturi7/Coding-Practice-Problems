package Lab_10;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;

public class Question_1 {
    public static void main(String args[]){
        ArrayList<String> a = new ArrayList<String>();
        System.out.println("");
        a.add("First");
        a.add("Second");
        a.add("Third");
        a.add("Fourth");
        Iterator<String> str = a.iterator();
        while(str.hasNext()) {
            System.out.println(str.next());
        }
        System.out.println("\nOriginal ArrayList : "+ a);
        ArrayList<String> b = (ArrayList<String>) a.clone();
        System.out.println("Duplicate ArrayList : "+b);
        Collections.reverse(a);
        System.out.println("\nResults after reverse operation : \n");
        for(String st: a){
            System.out.println(st);
        }
    }
}
