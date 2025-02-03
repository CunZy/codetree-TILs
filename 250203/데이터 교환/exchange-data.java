public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        int a = 5, b = 6, c = 7;
        int t = a;
        a = b;
        b = c;
        c = t;

        System.out.printf("%d\n%d\n%d", a, b, c);
    }
}