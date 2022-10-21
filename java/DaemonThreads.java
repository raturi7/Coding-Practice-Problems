class DaemonThreads extends Thread 
{
    public void run()
    {
        if(Thread.currentThread().isDaemon())
        {
            System.out.println("Daemon Thread");
        }
        else{
            System.out.println("User Thread");
        }
    }
    public static void main(String[] args) {
        DaemonThreads t1 = new DaemonThreads();
        DaemonThreads t2 = new DaemonThreads();
        DaemonThreads t3 = new DaemonThreads();

        t1.start();  // User Thread-1
        t2.start();  // User Thread-2
        t3.setDaemon(true);
        t3.start();
        System.out.print(t3.getPriority());    //1
        System.out.println();
    }
}