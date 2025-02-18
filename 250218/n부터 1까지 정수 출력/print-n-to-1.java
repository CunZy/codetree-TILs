import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();

        while(a >= 1) {
            System.out.printf("%d ", a);
            a--;
        }
    }
}