import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt(), b = sc.nextInt();

        if(a == 1) {
            if(b >= 19) {
                System.out.print("WOMAN");
            }
            else {
                System.out.print("GIRL");
            }
        }
        else {
            if(b >= 19) {
                System.out.print("MAN");
            }
            else {
                System.out.print("BOY");
            }
        }
    }
}