import java.util.Scanner;
public class FloydsTriangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter height of the triangle: ");
        int height = sc.nextInt();
        int counter = 1;
        for(int i = 1; i <= height; i++){
            for(int j = 1; j <= i; j++){
                System.out.print(counter + " ");
                counter++;
            }
            System.out.println();
        }
        sc.close();
    }
}
