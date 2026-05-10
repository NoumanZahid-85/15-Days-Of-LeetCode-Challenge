// kadanes Algorithm is used to find the maximum subarray sum.
class KadanesAlgo{
    public static void kadanes(int numbers[]){
        int curSum = numbers[0]; 
        int maxSum = numbers[0];
        for(int i = 1; i< numbers.length; i++){
            curSum = Math.max(numbers[i], curSum + numbers[i]);
            maxSum = Math.max(maxSum, curSum);
        }System.out.println("Maximum of subarray sum is: "+maxSum);
    }
    public static void main(String[] args) {
        //int numbers[] = {-2, -3, 4, -6, -1, -2, 1, 5, -3};
        //int numbers[] = {-2, -3, -4, -1, -5};
        int numbers[] = {-2,1,-3,4,-1,2,1,-5,4};
        kadanes(numbers);
    }
}
