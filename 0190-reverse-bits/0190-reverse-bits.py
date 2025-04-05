class Solution:
    def reverseBits(self, n: int) -> int:
        ans = 0
        for i in range(32):
            ans = (ans << 1) + (n & 1)
            # n 取第一個bit加入ans
            # ans + 1th bit 並 shift
            n >>= 1
            # n 往右移一格
        return ans

