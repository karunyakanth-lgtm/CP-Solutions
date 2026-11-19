
class Solution:
    def sortIt(self, arr):
        # Separate odd and even numbers
        odd = [x for x in arr if x % 2 != 0]
        even = [x for x in arr if x % 2 == 0]

        # Sort odd numbers in descending order
        odd.sort(reverse=True)

        # Sort even numbers in ascending order
        even.sort()

        # Modify the original array
        arr[:] = odd + even
