class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        cst = 0
        op = 0
        for c in s:
            if c == '(':
                op +=1 
            else:
                if op > 0:
                    op -= 1
                else:
                    cst += 1
        return cst + op