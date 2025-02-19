import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();

        System.out.println(a * a);

        if(a < 5) {
            System.out.print("tiny");
        }
    }
}