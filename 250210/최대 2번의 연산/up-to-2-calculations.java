import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.

        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();

        if(a % 2 == 0) {
            a /= 2;
        }

        if(a % 2 == 1) {
            a += 1;
            a /= 2;
        }

        System.out.print(a);
    }
}