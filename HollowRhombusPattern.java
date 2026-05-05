import java.util.Scanner;
public class HollowRhombus {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter height of the rhombus: ");
        int height = sc.nextInt();
        for(int i = 1; i <= height; i++){
            for(int j = 1; j<=(height-i); j++){
                System.out.print(" ");
            }
            for(int j = 1; j<=height; j++){
                if(i == 1 || i == height || j == 1 || j == height){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        sc.close();
    }
}
