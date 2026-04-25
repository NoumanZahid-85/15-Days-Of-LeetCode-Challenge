import java.util.Scanner;

public class BinaryToDecimal {
    public static void BinToDec(int binary){
        int bin = binary;
        int decimal = 0;
        int power = 0;
        while (binary > 0) {
            int lastDigit = binary % 10;
            decimal += lastDigit * (int)Math.pow(2, power);
            power++;
            binary = binary / 10;
        }
        System.out.println("Binary to Decimal of " + bin + " is " + decimal);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter binary number: ");
        int binary = sc.nextInt();
        BinToDec(binary);
    }
        
}
