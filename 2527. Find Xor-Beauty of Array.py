class Solution:
    def xorBeauty(self, nums: List[int]) -> int:
        xor_beauty = 0
        for i in nums:
            xor_beauty ^= i
        return xor_beauty