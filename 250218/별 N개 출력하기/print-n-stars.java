import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();

        int i = 1;
        while(i <= a) {
            System.out.println("*");
            ++i;
        }
    }
}