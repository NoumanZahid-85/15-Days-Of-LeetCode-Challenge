package Sorting;

public class SelectionSorting {
    public static void sort(int array[]){
        int n = array.length;
        for(int i = 0; i <= n-2; i++){
            int minPos = i;
            for(int j = i+1; j <= n-1; j++){
                // For descending order change the comparison operator to less-then.
                if(array[minPos] > array[j]){
                    minPos = j;
                }
            }
            int temp = array[minPos];
            array[minPos] = array[i];
            array[i] = temp;
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
