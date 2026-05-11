package Sorting;

public class BubbleSorting {
    public static void sort(int array[]){
        int swaps = 0;
        int n = array.length;
        for(int i = 0; i <= n-2; i++){
            for(int j = 0; j <= n-2-i; j++){
                if(array[j] > array[j+1]){
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                    swaps++;
                }
            } // For early stopage, after first inner loop complete the swaps dont change then exit from code rather than doing complete n*2 computation.
            if(swaps == 0) break;
        }
    }
    public static void print(int array[]){
        for(int i = 0; i < array.length; i++){
            System.out.print(array[i]+", ");
        }
    }
    public static void main(String[] args) {
        int array[] = {5,4,3,2,1,66,34,23,12,11,4};
        sort(array);
        print(array);
    }
}
