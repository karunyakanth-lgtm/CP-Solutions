
class Solution:
    def longestSubarrayDivK(self, arr, k):
        prefix_sum = 0
        max_len = 0

        # Store the first occurrence of each remainder
        remainder_map = {0: -1}

        for i in range(len(arr)):
            prefix_sum += arr[i]

            # Handle negative numbers
            remainder = prefix_sum % k

            if remainder in remainder_map:
                max_len = max(max_len, i - remainder_map[remainder])
            else:
                remainder_map[remainder] = i

        return max_len
