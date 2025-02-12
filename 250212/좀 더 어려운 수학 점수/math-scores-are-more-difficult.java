import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int a1 = sc.nextInt(), a2 = sc.nextInt();

        int b1 = sc.nextInt(), b2 = sc.nextInt();

        if(a1 > b1) {
            System.out.print('A');
        }
        else if(a1 < b1) {
            System.out.print('B');
        }
        else if(a2 > b2) {
            System.out.print('A');
        }
        else {
            System.out.print('B');
        }
    }
}