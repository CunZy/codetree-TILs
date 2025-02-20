import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int a = 0;

        for(int i = 1; i < n; ++i) {
            if(n % i == 0) {
                a += i;
            }
        }

        if(a == n) {
            System.out.print("P");
        }
        else {
            System.out.print("N");
        }
    }
}