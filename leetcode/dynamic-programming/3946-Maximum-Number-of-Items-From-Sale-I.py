
class Solution:
    def maximumSaleItems(self, items, budget):
        n = len(items)

        min_price = min(price for factor, price in items)

        # Count free items for each item type
        free = [0] * n

        for i in range(n):
            for j in range(n):
                if i != j and items[j][0] % items[i][0] == 0:
                    free[i] += 1

        # 0/1 Knapsack
        dp = [0] * (budget + 1)

        for i in range(n):
            price = items[i][1]
            value = free[i] + 1

            for b in range(budget, price - 1, -1):
                dp[b] = max(dp[b], dp[b - price] + value)

        # Calculate maximum total items
        ans = 0

        for b in range(budget + 1):
            total = dp[b] + (budget - b) // min_price
            ans = max(ans, total)

        return ans
