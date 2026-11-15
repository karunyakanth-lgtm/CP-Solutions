
class Solution:
    def subsequenceSum(self, s):
        MOD = 10**9 + 7
        n = len(s)

        total = 0

        for i in range(n):
            digit = int(s[i])
            count = pow(2, n - 1, MOD)

            total = (total + digit * count) % MOD

        return total
