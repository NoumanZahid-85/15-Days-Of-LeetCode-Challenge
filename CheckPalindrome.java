import java.util.Scanner;
public class Palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number(int) to check if it is a palindrome: ");
        int number = sc.nextInt();
        if(isPalindrome(number)){
            System.out.println("The number : " + number + " is a palindrome");
        }
        else{
            System.out.println("The number : " + number + " is not a palindrome");
        }
        sc.close();
    }
    // This function checks if a number is a palindrome or not
    public static boolean isPalindrome(int n){
        int palindrome = n;
        int reverse = 0;
        while(palindrome != 0){
            int remainder = palindrome % 10;
            reverse = reverse * 10 + remainder;
            palindrome = palindrome / 10;
        }
        if(reverse == n){
            return true;
        }
        else{
            return false;
        }
    }

}
