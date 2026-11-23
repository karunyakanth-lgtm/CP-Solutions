class Solution:
    def posInfinite(self, s, pos):
        n = len(s)

        # Find the expansion level containing pos
        lengths = [n]
        step = 1

        while lengths[-1] < pos:
            lengths.append(2 * lengths[-1] + step)
            step += 1

        # Trace backwards
        while len(lengths) > 1:
            length = lengths.pop()
            old_length = lengths[-1]
            added = length - 2 * old_length

            if pos > old_length:
                if pos <= old_length + added:
                    return '$'

                pos = length - pos + 1

        return s[pos - 1]