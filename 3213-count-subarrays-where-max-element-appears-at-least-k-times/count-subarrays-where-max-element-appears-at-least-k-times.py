class Solution:
    def countSubarrays(self, nums: List[int], k: int) -> int:
        l, r, c, counter, res = 0, 0, 0, 0, 0
        mx = max(nums)
        while r < len(nums):
            if nums[r] == mx:
                c += 1
            while c >= k:
                if nums[l] == mx:
                    c -= 1
                l += 1
                counter += 1
            r += 1
            res += counter
        return res

        