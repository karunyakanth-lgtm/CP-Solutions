
class Solution:
    def smallestUniqueSubarray(self, nums):
        n = len(nums)

        if n == 1:
            return 1

        # Coordinate compression
        values = {v: i for i, v in enumerate(sorted(set(nums)))}
        rank = [values[x] for x in nums]

        # Build suffix array using doubling
        sa = list(range(n))
        k = 1

        while k < n:
            sa.sort(key=lambda i: (
                rank[i],
                rank[i + k] if i + k < n else -1
            ))

            new_rank = [0] * n

            for i in range(1, n):
                prev = sa[i - 1]
                curr = sa[i]

                prev_key = (
                    rank[prev],
                    rank[prev + k] if prev + k < n else -1
                )

                curr_key = (
                    rank[curr],
                    rank[curr + k] if curr + k < n else -1
                )

                new_rank[curr] = new_rank[prev] + (
                    prev_key != curr_key
                )

            rank = new_rank

            if rank[sa[-1]] == n - 1:
                break

            k *= 2

        # Build inverse suffix array
        pos = [0] * n

        for i in range(n):
            pos[sa[i]] = i

        # Kasai's algorithm: calculate LCP
        lcp = [0] * n
        h = 0

        for i in range(n):
            p = pos[i]

            if p == 0:
                continue

            j = sa[p - 1]

            while (i + h < n and j + h < n
                   and nums[i + h] == nums[j + h]):
                h += 1

            lcp[p] = h

            if h > 0:
                h -= 1

        # Find the shortest unique subarray
        ans = n

        for p in range(n):
            longest = lcp[p]

            if p + 1 < n:
                longest = max(longest, lcp[p + 1])

            length = longest + 1

            if sa[p] + length <= n:
                ans = min(ans, length)

        return ans
