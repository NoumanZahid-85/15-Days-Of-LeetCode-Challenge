class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        # If needle is empty, return 0
        if not needle:
            return 0
        
        # If needle is longer than haystack, impossible to find
        if len(needle) > len(haystack):
            return -1
        
        # Iterate through possible starting positions
        for i in range(len(haystack) - len(needle) + 1):
            # Check if substring matches needle
            if haystack[i:i + len(needle)] == needle:
                return i
        
        return -1