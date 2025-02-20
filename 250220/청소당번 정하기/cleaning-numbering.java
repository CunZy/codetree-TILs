import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write yur code here.
        Scanner sc = new Scanner(System.in);

        int a = 0, b = 0, c = 0;

        int n = sc.nextInt();

        for(int i = 1; i <= n; ++i) {
            if(i % 12 == 0) {
                c++;
            }
            else if(i % 3 == 0) {
                b++;
            }
            else if(i % 2 == 0) {
                a++;
            }
        }

        System.out.printf("%d %d %d", a, b, c);
    }
}