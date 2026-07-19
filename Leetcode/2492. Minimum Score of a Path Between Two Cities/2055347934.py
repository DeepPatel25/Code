class Solution:
    def minScore(self, n: int, roads: List[List[int]]) -> int:
        graph = {i: [] for i in range(1, n + 1)}
        for u, v, w in roads:
            graph[u].append((v, w))
            graph[v].append((u, w))
        
        ans = float('inf')
        visited = set()
        queue = deque([1])
        visited.add(1)
    
        while queue:
            node = queue.popleft()
            for neighbor, weight in graph[node]:
                ans = min(ans, weight)
            
                if neighbor not in visited:
                    visited.add(neighbor)
                    queue.append(neighbor)

        return ans 