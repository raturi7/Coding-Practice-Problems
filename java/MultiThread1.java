class thread implements Runnable{
    public void run(){
        try{
            Thread.sleep(1500);
        }
        catch(InterruptedException e){
            System.out.println(e);
        }
        System.out.println("State of Thread1 while it called join() method on Thread2: "+MultiThread1.thread1.getState());

        try{
            Thread.sleep(2000);
        }
        catch(InterruptedException e){
            System.out.println(e);
        }
    }
}

public class MultiThread1 implements Runnable{
    public static Thread thread1;
    public static MultiThread1 obj1;

    public static void main(String[] args) {
        obj1=new MultiThread1();
        thread1=new Thread(obj1);

        System.out.println("State of Thread1 after creating it: "+thread1.getState());
        thread1.start();

        System.out.println("State of Thread1 after calling Start(): "+thread1.getState());
    }

    public void run(){
        thread myThread = new thread();
        Thread thread2 = new Thread(myThread);

        System.out.println("State of Thread2 after creating it: "+thread2.getState());
        thread2.start();

        System.out.println("State of Thread2 after start() method: "+thread2.getState());

        try{
            Thread.sleep(2000);
        }
        catch(InterruptedException e){
            System.out.println(e);
        }
        System.out.println("State of Thread2 after calling sleep() method: "+thread2.getState());

        try{
            thread2.join();
        }
        catch(InterruptedException e){
            System.out.println(e);
        }
        System.out.println("State of Thread2 when it has finished: "+thread2.getState());
    }
}