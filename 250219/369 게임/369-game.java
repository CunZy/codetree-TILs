import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write yr code here.
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for(int i = 1; i <= n; ++i) {
            int a = i % 10;
            int b = i / 10;
            if((i % 3 == 0) || (a == 3 || a == 6 || a == 9) || (b == 3 || b == 6 || b == 9)) {
                System.out.print("0 ");
            }
            else {
                System.out.printf("%d ", i);
            }
        }
    }
}