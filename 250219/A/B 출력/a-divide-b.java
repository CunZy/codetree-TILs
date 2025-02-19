import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt(), b = sc.nextInt();
        

        System.out.printf("%d.", a / b);
        int t = a % b;
        for(int i = 0; i < 20; ++i) {
            t *= 10;
            System.out.print(t / b);
            t %= b;
        }
    }
}