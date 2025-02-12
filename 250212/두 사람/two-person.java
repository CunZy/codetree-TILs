import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int a1 = sc.nextInt();
        char a2 = sc.next().charAt(0);

        int b1 = sc.nextInt();
        char b2 = sc.next().charAt(0);

        if((a1 >= 19 && a2 == 'M') || (b1 >= 19 && b2 == 'M')) {
            System.out.print(1);
        }
        else {
            System.out.print(0);
        }
    }
}