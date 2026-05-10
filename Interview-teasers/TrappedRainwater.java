public class TrapRainwater {
    public static int trapRainwater(int height[]){
        int n = height.length;
        // Auxalary-array to keep  track of left-max of current height
        int leftMax[] = new int[n];
        leftMax[0] = height[0];
        for(int i = 1; i < n; i++){
            leftMax[i] = Math.max(height[i], leftMax[i-1]);
        }

        // Auxalary-array to keep  track of right-max of current height
        int rightMax[] = new int[n];
        rightMax[n-1] = height[n-1];
        for(int i = n-2; i >=0; i--){
            rightMax[i] = Math.max(height[i], rightMax[i+1]);
        }

        // loop
        int trappedWater = 0;
        for(int i = 0; i <n; i++){
            int waterLevel = Math.min(leftMax[i], rightMax[i]);
            trappedWater = trappedWater + waterLevel - height[i];
        }
        return trappedWater;
    }
    public static void main(String[] args) {
        int height[] = {4,2,0,3,2,5};
        System.out.println("Total trap water is: "+trapRainwater(height));
    }
}
