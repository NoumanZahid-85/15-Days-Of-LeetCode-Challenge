package Sorting;

public class CountSorting { 
    public static void countingSort(int arr[]) {
        int largest = Integer.MIN_VALUE;
        for(int i = 0; i < arr.length; i++) {
            largest = Math.max(largest, arr[i]);
        }

        int count[] = new int[largest + 1];
        for(int i = 0; i < arr.length; i++) {
            count[arr[i]]++;
        }

        // Sorting
        int j = 0;
        for(int i = 0; i < count.length; i++) {
            while(count[i] > 0) {
                arr[j] = i;
                j++;
                count[i]--;
            }
        }
    }  

    public static void print(int array[]) {
        for(int i = 0; i < array.length; i++) {
            System.out.print(array[i] + ", ");
        }
        System.out.println(); 
    }

    public static void main(String[] args) {
        int arr[] = {5, 4, 3, 2, 1, 66, 34, 23, 12, 11, 4};
        countingSort(arr);
        print(arr);
    }
}
