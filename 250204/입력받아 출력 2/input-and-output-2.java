import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.

        Scanner sc = new Scanner(System.in);

        sc.useDelimiter("-");

        int a = sc.nextInt(), b = sc.nextInt();

        System.out.printf("%d%d", a, b);
    }
}