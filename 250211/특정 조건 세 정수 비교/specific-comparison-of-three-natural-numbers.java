import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write yur code here.
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();

        int m = a;

        if(m > b) {
            m = b;
        }
        if(m > c) {
            m = c;
        }

        if(a == m) {
            System.out.print(1);
        }
        else {
            System.out.print(0);
        }

        System.out.print(" ");

        if(a == b && b == c) {
            System.out.print(1);
        }
        else {
            System.out.print(0);
        }
    }
}