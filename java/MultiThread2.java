public class MultiThread2 extends Thread{
    public static void main(String[] args) {

        Thread t1 = new Thread();
        System.out.println("Current Thread: "+t1.getName());

        t1.setName("XYZ");
        System.out.println("Current Thread after name change: "+t1.getName());

        System.out.println("Main Thread Priority: "+t1.getPriority());

        t1.setPriority(MIN_PRIORITY);

        System.out.println("Main Thread new priority: "+t1.getPriority());

        for(int i=0;i<5;i++){
            System.out.println("Main THREAD");
        }

        Thread t2 = new Thread(){
            public void run(){
                for(int i=0;i<5;i++){
                    System.out.println("Second THREAD");
                }
            }
        };

        System.out.println("Child Thread Priority: "+t2.getPriority());

        t2.setPriority(MAX_PRIORITY);

        System.out.println("Child Thread new Priority: "+t2.getPriority());

        t2.start();
    }

    class ChildThread extends Thread{
        @Override public void run(){
            for(int i=0;i<5;i++){
                System.out.println("Child Thread");
            }
        }
    }
}
