import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt(), b = sc.nextInt();

        int c = 0;

        for(int i = a; i <= b; ++i) {
            if(i % 2 == 0) {
                c += i;
            }
        }

        System.out.print(c);
    }
}