class Solution:
    def getSumAbsoluteDifferences(self, nums: List[int]) -> List[int]:
        n = len(nums)
        sumr = [0 for _ in range(n)]
        suml = [0 for _ in range(n)]
        sml = 0
        smr = 0
        for i in range(n):
            sml += nums[i]
            suml[i] = sml
        for i in range(n - 1, -1, -1):
            smr += nums[i]
            sumr[i] = smr
        sm = []
        sm.append(sumr[1] - (n - 1) * nums[0])
        for i in range(1,n-1):
            sm.append(sumr[i + 1] - (n - i - 1) * nums[i] + (i) * nums[i] - suml[i - 1])
        sm.append((n - 1) * nums[n - 1] - suml[n - 2])
        return sm
        