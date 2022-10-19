import java.util.Scanner;

public class Sum_of_squares {
    void square(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            arr[i] = arr[i] * arr[i];
        }
        sum(arr);
    }

    void sum(int arr[]) {
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        System.out.println(sum);
    }

    public static void main(String args[]) {
        try (Scanner sc = new Scanner(System.in)) {
            int[] arr = new int[10];
            for (int i = 0; i < arr.length; i++) {
                arr[i] = sc.nextInt();
            }
            Sum_of_squares s = new Sum_of_squares();
            s.square(arr);
        }
    }
}