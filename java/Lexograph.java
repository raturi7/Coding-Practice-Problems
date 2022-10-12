import java.util.*;
class Lexograph{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter First String: ");
        String s1 = sc.nextLine();
        System.out.print("Enter Second String: ");
        String s2 = sc.nextLine();
        int l1=s1.length();
        int l2=s2.length();
        int flag=0;
        for(int i=0;i<Math.min(l1, l2);i++){
            if(s1.charAt(i)<s2.charAt(i)){
                System.out.println("S2 is greater");
                flag=1;
                break;
            }
            else if(s1.charAt(i)>s2.charAt(i)){
                System.out.println("S1 is greater");
                flag=1;
                break;
            }
        }
        if(flag==0){
            if(l1<l2)
            System.out.println(s1);
            else if(l1>l2)
            System.out.println(s2);
            else
            System.out.println("Equal!");
        }
    }
}