import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int t = 0;
        int c = 0;

        for(int i = 0; i < n; ++i) {
            int a = sc.nextInt();
            t += a;
            c++;
        }

        System.out.printf("%d %.1f", t, (double)t / c);
    }
}