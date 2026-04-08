class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        idx = m + n - 1
        i = m - 1
        j = n - 1
        while i >= 0 and j >= 0:
            if nums1[i] > nums2[j]:
                nums1[idx] = nums1[i]
                idx = idx -1
                i = i -1
            else:
                nums1[idx] = nums2[j]
                idx = idx -1
                j = j -1
        # If there are remaining elements in nums2, copy them
        # (If there are remaining elements in nums1, they're already in place)
        while j >= 0:
            nums1[idx] = nums2[j]
            idx = idx -1
            j = j -1