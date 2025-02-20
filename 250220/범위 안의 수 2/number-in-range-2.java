import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write yur code here.
        Scanner sc = new Scanner(System.in);

        int c = 0;
        int a = 0;

        for(int i = 0; i < 10; ++i) {
            int t = sc.nextInt();

            if(t >= 0 && t <= 200) {
                c += t;
                a++;
            }
        }

        System.out.printf("%d %.1f", c, (double)c / a);
    }
}