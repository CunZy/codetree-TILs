import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();

        if(a >= 12 || a <= 2) {
            System.out.print("Winter");
        }
        if(a <= 5) {
            System.out.print("Spring");
        }
        if(a <= 8) {
            System.out.print("Summer");
        }
        if(a <= 11) {
            System.out.print("Fall");
        }
    }
}