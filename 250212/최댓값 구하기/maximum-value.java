import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();

        int d = a;
        if(d < b) {
            d = b;
        }
        if(d < c) {
            d = c;
        }

        System.out.print(d);
    }
}