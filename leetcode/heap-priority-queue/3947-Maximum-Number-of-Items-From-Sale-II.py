
class Solution:
    def maximumSaleItems(self, items, budget):
        n = len(items)

        # Step 1: Count frequency of each factor
        freq = [0] * (n + 1)

        min_price = float('inf')

        for factor, price in items:
            freq[factor] += 1
            min_price = min(min_price, price)

        # Step 2: Count how many item types
        # have factors divisible by each factor
        for i in range(1, n + 1):
            for j in range(i * 2, n + 1, i):
                freq[i] += freq[j]

        # Step 3: Sort items by price
        items.sort(key=lambda x: x[1])

        ans = 0

        # Step 4: Buy profitable items first
        for factor, price in items:

            # Skip if buying two cheapest items is better
            if price >= 2 * min_price:
                break

            # Number of possible free items
            gain = freq[factor] - 1

            # Number of copies we can afford
            take = min(gain, budget // price)

            ans += take * 2
            budget -= take * price

        # Step 5: Spend remaining budget on cheapest items
        ans += budget // min_price

        return ans
