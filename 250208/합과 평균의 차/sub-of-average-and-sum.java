import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();

        System.out.printf("%d\n%d\n%d", a + b + c, (a + b + c) / 3, a + b + c - (a + b + c) / 3);
    }
}