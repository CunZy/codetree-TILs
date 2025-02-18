import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt(), b = sc.nextInt();

        for(int i = b; i >= a; --i) {
            System.out.printf("%d ", i);
        }
    }
}