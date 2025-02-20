import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int a = 0;

        for(int i = 1; i <= n; ++i) {
            if(i % 4 == 0) {
                a++;
                if(i % 100 == 0 && i % 400 != 0) {
                    --a;
                }
            }
        }

        System.out.print(a);
    }
}