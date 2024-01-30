class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        if not nums:
            return 0  

        start = 0  
        min_len = float('inf')  
        current_sum = 0 

        for end in range(len(nums)):
            current_sum += nums[end]

            while current_sum >= target:
                min_len = min(min_len, end - start + 1)
                current_sum -= nums[start]
                start += 1

        # If min_len is still positive infinity, no subarray was found.
        return min_len if min_len != float('inf') else 0

