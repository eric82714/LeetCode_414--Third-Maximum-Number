class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        nums = set(nums)
        
        return sorted(nums, reverse=True)[2] if len(nums) > 2 else max(nums)
