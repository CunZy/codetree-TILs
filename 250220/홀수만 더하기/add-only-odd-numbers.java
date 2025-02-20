import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int a = 0;

        for(int i = 0; i < n; ++i) {
            int b = sc.nextInt();

            if(b % 2 == 1 && b % 3 == 0) {
                a += b;
            }
        }

        System.out.print(a);
    }
}