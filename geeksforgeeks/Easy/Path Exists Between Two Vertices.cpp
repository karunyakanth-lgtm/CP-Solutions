
from collections import deque

class Solution:
    def checkPath(self, adj, src, dest):
        visited = [False] * len(adj)
        q = deque([src])

        visited[src] = True

        while q:
            node = q.popleft()

            if node == dest:
                return True

            for neighbor in adj[node]:
                if not visited[neighbor]:
                    visited[neighbor] = True
                    q.append(neighbor)

        return False
