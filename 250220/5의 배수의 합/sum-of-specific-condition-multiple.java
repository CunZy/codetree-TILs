import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt(), b = sc.nextInt();

        int c, d;

        if(a > b) {
            c = b;
            d = a;
        }
        else {
            c = a;
            d = b;
        }

        int t = 0;

        for(int i = c; i <= d; ++i) {
            if(i % 5 == 0) {
                t += i;
            }
        }

        System.out.print(t);
    }
}