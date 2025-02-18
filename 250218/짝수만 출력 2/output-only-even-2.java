import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int b = sc.nextInt(), a = sc.nextInt();

        while(a <= b) {
            System.out.printf("%d ", b);
            b -= 2;
        }
    }
}