import java.util.Scanner;

public class DecimalToBinary {
    // This function converts a decimal number to binary
    public static void DecToBin(int n){
        int pow = 0;
        int binary = 0;
        while (n > 0) {
            int lastDigit = n % 2;
            binary += lastDigit * (int)Math.pow(10, pow);
            pow++;
            n = n / 2;
        }
        System.out.println(binary);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a decimal number: ");
        int n = sc.nextInt();
        DecToBin(n);
    }
}
