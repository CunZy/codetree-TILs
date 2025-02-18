import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        String a, b;
        a = sc.next();
        b = sc.next();

        String t = a;
        a = b;
        b = t;
        System.out.printf("%s\n%s", a, b);
    }
}