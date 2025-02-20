import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write yur code here.
        Scanner sc = new Scanner(System.in);

        int a = 0;

        for(int i = 0; i < 5; ++i) {
            int n = sc.nextInt();

            if(n % 2 == 0) {
                ++a;
            }
        }

        System.out.print(a);
    }
}