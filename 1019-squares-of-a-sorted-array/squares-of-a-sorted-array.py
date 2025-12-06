class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        # time complexity here is O(nlogn)
        # for i in range(len(nums)):
        #     nums[i] = nums[i] ** 2
        # return sorted(nums)    

        # second solution O(n), biggest squares are on the end
        n = len(nums)
        result = n * [0]
        L, R = 0, n-1
        for i in range(n-1, -1, -1):
            if abs(nums[L]) > abs(nums[R]):
                val = nums[L]
                L += 1
            else:
                val = nums[R]
                R -= 1
            result[i] = val ** 2        
        return result    