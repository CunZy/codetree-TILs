import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.

        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();

        if(a <= 2 || a >= 12) {
            System.out.print("Winter");
        }
        else if(a <= 5) {
            System.out.print("Spring");
        }
        else if(a <= 8) {
            System.out.print("Summer");
        }
        else {
            System.out.print("Fall");
        }
    }
}