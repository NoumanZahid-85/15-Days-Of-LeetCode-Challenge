package Sorting;
public class InsertionSorting{
    public static void insertionSort(int arr[]) {
        for(int i = 1; i <= arr.length-1; i++) {
            int curr = i;
            int prev = i - 1;
            int key = arr[curr];  // Store the element to insert
            
            // Finding the correct position to insert
            while(prev >= 0 && arr[prev] > key) {
                arr[prev + 1] = arr[prev];
                prev--;
            }
            // Insertion
            arr[prev + 1] = key;
        }
    }
    public static void print(int array[]){
        for(int i = 0; i < array.length; i++){
            System.out.print(array[i]+", ");
        }
    }
    public static void main(String[] args) {
        int arr[] = {5,4,3,2,1,66,34,23,12,11,4};
        insertionSort(arr);
        print(arr);
    }
}
