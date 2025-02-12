import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int n = 0;
        char a1 = sc.next().charAt(0);
        int a2 = sc.nextInt();


        if(a1 == 'Y') {
            if(a2 >= 37) {
                n += 1;
            }
        }
        a1 = sc.next().charAt(0);
        a2 = sc.nextInt();


        if(a1 == 'Y') {
            if(a2 >= 37) {
                n += 1;
            }
        }
        a1 = sc.next().charAt(0);
        a2 = sc.nextInt();


        if(a1 == 'Y') {
            if(a2 >= 37) {
                n += 1;
            }
        }

        if(n >= 2) {
            System.out.print("E");
        }
        else {
            System.out.print("N");
        }
    }
}