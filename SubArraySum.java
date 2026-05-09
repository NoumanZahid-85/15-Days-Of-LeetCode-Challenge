package Arrays;
// Sub-array sum using double loop O(n*2).
public class SubArraysSum {
    public static void subArraysSum(int numbers[]){
        int curSum = 0;
        int maxSum = Integer.MIN_VALUE;
        int prefix[] = new int[numbers.length];
        prefix[0] = numbers[0];
        for(int i = 1; i < prefix.length; i++){
            prefix[i] = prefix[i-1] + numbers[i];
        }
        for(int i = 0; i<numbers.length; i++){
            int start = i;
            for(int j = i; j<numbers.length; j++){
                int end = j;
                curSum = start == 0 ? prefix[end] : prefix[end] - prefix[start-1];

                System.out.println(curSum);
                if(curSum > maxSum){
                    maxSum = curSum;
                }
            }System.out.println();
        }System.out.println("Max-sum is: "+maxSum);
    }
    public static void main(String[] args) {
        int numbers[] = {1,2,3,4,5,6};
        subArraysSum(numbers);
    }
}
