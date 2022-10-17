class Worker {
    String name;
    int Salary_rate;
}

class Daily_worker extends Worker {
    Daily_worker(int sl, String n) {
        this.Salary_rate = sl;
        this.name = n;
    }

    int ComPay(int hours) {
        return Salary_rate * hours;
    }
}

class Salaried_worker extends Worker {
    Salaried_worker(int sl, String n) {
        this.Salary_rate = sl;
        this.name = n;
    }

    int ComPay(int hours) {
        return Salary_rate * hours;
    }
}

public class Company {
    public static void main(String[] args) {
        Daily_worker dw = new Daily_worker(700, "Rajesh");
        Salaried_worker sw = new Salaried_worker(850, "Suresh");
        int dwc = dw.ComPay(30);
        int swc = sw.ComPay(40);
        System.out.println("daily worker \nname: " + dw.name + "\nsalary: " + dwc);
        System.out.println("salaried worker \nname: " + sw.name + "\nsalary: " + swc);
    }
}