
class Solution:
    def findPairs(self, arr):
        n = len(arr)
        pos = {}

        for i, x in enumerate(arr):
            pos.setdefault(x, []).append(i)

        vals = sorted(pos)
        groups = {}

        for i, x in enumerate(vals):
            for y in vals[i:]:
                px = pos[x]
                py = pos[y]

                if x == y:
                    if len(px) < 2:
                        continue
                    p = (px[0], px[1])
                    q = (px[2], px[3]) if len(px) >= 4 else None
                else:
                    p = (min(px[0], py[0]),
                         max(px[0], py[0]))

                    q = None
                    if len(px) >= 2 and len(py) >= 2:
                        q = (min(px[1], py[1]),
                             max(px[1], py[1]))

                s = x + y
                groups.setdefault(s, []).append((p, q))

        ans = None

        for items in groups.values():
            items.sort(key=lambda item: item[0])

            # Two different value pairs have disjoint values.
            if len(items) >= 2:
                p = items[0][0]
                q = items[1][0]
                candidate = p + q

                if ans is None or candidate < ans:
                    ans = candidate

            # Two pairs from the same value pair.
            for p, q in items:
                if q is not None:
                    candidate = p + q

                    if ans is None or candidate < ans:
                        ans = candidate

        return list(ans) if ans is not None else [-1, -1, -1, -1]
