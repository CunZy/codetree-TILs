import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();

        int hap = a + b + c;
        int m = hap / 3;

        System.out.printf("%d\n%d\n%d", hap, m, hap - m);
    }
}