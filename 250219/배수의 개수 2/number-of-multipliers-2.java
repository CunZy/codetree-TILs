import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int a;
        int cnt = 0;
        for(int i = 0; i < 10; ++i) {
            a = sc.nextInt();

            if(a % 2 == 1) {
                cnt++;
            }
        }
        System.out.print(cnt);
    }
}