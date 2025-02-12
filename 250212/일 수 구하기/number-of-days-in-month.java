import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();

        if(a == 2) {
            System.out.print("28");
        }
        else if((a < 8 && a % 2 == 1) || (a > 7 && a % 2 == 0)) {
            System.out.print("31");
        }
        else {
            System.out.print("30");
        }
    }
}