
class Solution:
    def countVowels(self, s, queries):
        n = len(s)
        vowels = "aeiou"

        prefix = [0] * (n + 1)

        # Build prefix sum
        for i in range(n):
            prefix[i + 1] = prefix[i]

            if s[i] in vowels:
                prefix[i + 1] += 1

        # Process queries
        ans = []

        for l, r in queries:
            ans.append(prefix[r + 1] - prefix[l])

        return ans
