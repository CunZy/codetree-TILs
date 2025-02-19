import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write ur code here.
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt(), b = sc.nextInt();

        while(a <= b) {
            System.out.printf("%d ", a);
            if(a % 2 == 1) {
                a *= 2;
            }
            else {
                a += 3;
            }
        }
    }
}