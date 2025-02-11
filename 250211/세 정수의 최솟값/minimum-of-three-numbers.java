import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();

        int m = a;
        if(m > b) {
            m = b;
        }
        if(m > c) {
            m = c;
        }

        System.out.print(m);
    }
}