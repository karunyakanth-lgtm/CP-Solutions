
class Solution:
    def maxLength(self, nums):
        n = len(nums)
        ans = 0

        def gcd(a, b):
            while b:
                a, b = b, a % b
            return a

        def lcm(a, b):
            return (a // gcd(a, b)) * b

        for i in range(n):
            prod = 1
            g = 0
            l = 1

            for j in range(i, n):
                prod *= nums[j]
                g = gcd(g, nums[j])
                l = lcm(l, nums[j])

                if prod == g * l:
                    ans = max(ans, j - i + 1)

        return ans
