import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();

        for(int i = 1; i <= a; ++i) {
            System.out.printf("%d ", i);
        }
    }
}