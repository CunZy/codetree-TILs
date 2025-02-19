import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int h = sc.nextInt(), w = sc.nextInt();

        int b = (10000 * w) / (h * h);

        System.out.printlnn(b);
        if(b >= 25) {
            System.out.print("Obesity");
        }
    }
}