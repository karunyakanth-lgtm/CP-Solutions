
class Solution:
    def minTime(self, a, b, d, l, r):
        MOD = 10**9 + 7
        c = a - b

        # Minimum time without special jump
        k = max(0, (d - a + c - 1) // c)
        normal = d + 2 * b * k

        # Prefix sum of ceil(i / c)
        def prefix(n):
            if n <= 0:
                return 0
            q, rem = divmod(n, c)
            return c * q * (q + 1) // 2 + rem * (q + 1)

        # Sum of special jump times for x in [L, R]
        def special_sum(L, R):
            if L > R:
                return 0

            ans = 0

            # When x <= a
            end = min(R, a)

            if L <= end:
                n = end - L + 1
                ans += n * (L + end) // 2 + n

            # When x > a
            start = max(L, a + 1)

            if start <= R:
                n = R - start + 1

                # Sum of x + 1
                ans += n * (start + R) // 2 + n

                # Sum of additional backward movement time
                ans += 2 * b * (
                    prefix(R - a) - prefix(start - a - 1)
                )

            return ans

        # Find largest x where special jump is faster
        low, high = 0, d
        cutoff = -1

        while low <= high:
            mid = (low + high) // 2

            k = max(0, (mid - a + c - 1) // c)
            t = mid + 1 + 2 * b * k

            if t < normal:
                cutoff = mid
                low = mid + 1
            else:
                high = mid - 1

        L = d - r
        R = d - l

        end = min(R, cutoff)

        ans = special_sum(L, end)

        # Remaining cases use normal movement
        remaining = max(0, R - max(L, cutoff + 1) + 1)

        ans += remaining * normal

        return ans % MOD
