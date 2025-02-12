import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        double a = sc.nextDouble(), b = sc.nextDouble();

        if(a >= 1 && b >= 1) {
            System.out.print("High");
        }
        else if(a >= 0.5 && b >= 0.5) {
            System.out.print("Middle");
        
        }
        else {
            System.out.print("Low");
        }

        
    }
}