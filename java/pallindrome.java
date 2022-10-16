public class pallindrome {
    public static void main(String args[]) {
      int x=121;
      String rev="";
      String s=String.valueOf(x); 
      
      for (int i = s.length() - 1; i >= 0; i--) {
            rev = rev + s.charAt(i);
        }
        System.out.println(rev);
        
        System.out.println(s);
        if(s.equals(rev)){
            System.out.println("Pallindrome");
        }else{
            System.out.println("Not a Pallindrome");
        }
        
    }
}