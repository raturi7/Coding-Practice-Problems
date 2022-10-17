import java.util.*;

public class Account {
    int balance;

    Account(int balance){
        this.balance=balance;
    }

    public void deposit(int amount){
        balance+=amount;
        System.out.println("Amount Deposited Successfully!\nBank Balance: "+balance);
    }

    public void withdraw(int amount){
        if(amount>balance){
            try {
                throw new NoSufficientFundException("Not Sufficient Funds!");
            } catch (NoSufficientFundException e) {
                System.out.println(e.getMessage());
            }
        }
        else{
            balance-=amount;
            System.out.println("Amount Deposited Successfully!\nBank Balance: "+balance);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Initial Balance: ");
        int balance = sc.nextInt();
        int amount;
        Account a1 = new Account(balance);
        System.out.println("Enter:\nD - Deposit\nW - Withdraw");
        String choice = sc.next().toUpperCase();
        switch(choice){
            case "D":
                System.out.print("Enter Amount: ");
                amount = sc.nextInt();
                a1.deposit(amount);
                break;
            
            case "W":
                System.out.print("Enter Amount: ");
                amount = sc.nextInt();
                a1.withdraw(amount);
                break;
            default:
                System.out.println("Wrong Choice!");
        }
        sc.close();
    }
}

class NoSufficientFundException extends Exception{
    NoSufficientFundException(String s){
        super(s);
    }
}
