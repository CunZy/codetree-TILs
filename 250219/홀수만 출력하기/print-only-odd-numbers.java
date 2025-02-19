import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();

        for(int i = 0; i < a; ++i) {
            int n = sc.nextInt();

            if(n % 3 == 0 && n % 2 == 1) {
                System.out.println(n);
            }
        }
    }
}