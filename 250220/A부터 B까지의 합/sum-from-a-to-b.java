import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(), b = sc.nextInt();

        int sum = 0;

        for(int i = a; i <= b; ++i) {
            sum += i;
        }

        System.out.print(sum);
    }
}