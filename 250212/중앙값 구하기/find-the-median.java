import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();

        if(a > b) {
            if(c > a) {
                System.out.print(a);
            }
            else if(c < a && c > b) {
                System.out.print(c);
            }
            else {
                System.out.print(b);
            }
        }
        else {
            if(c > b) {
                System.out.print(b);
            }
            else if(c < b && c > a) {
                System.out.print(c);
            }
            else {
                System.out.print(a);
            }
        }
    }
}