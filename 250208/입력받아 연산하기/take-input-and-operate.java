import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.

        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt(), b = sc.nextInt();

        a += 87;
        b %= 10;

        System.out.printf("%d\n%d", a, b);
    }
}