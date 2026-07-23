class Solution:
    def maxAmount(self, initialCurrency: str, 
                  pairs1: List[List[str]], rates1: List[float], 
                  pairs2: List[List[str]], rates2: List[float]) -> float:
        
        def build_graph(pairs, rates):
            """
            Build a bidirectional graph from currency exchange pairs and rates.
            Example: if A->B = 2.0, we also add B->A = 1/2.0.
            """
            graph = defaultdict(list)
            for (a, b), r in zip(pairs, rates):
                graph[a].append((b, r))
                graph[b].append((a, 1 / r))
            return graph
        
        def max_exchange(graph, start_amounts):
            """
            Run a maximum-product shortest path algorithm (Dijkstra-like).
            
            - start_amounts: dictionary of starting currency -> amount
            - graph: adjacency list {currency: [(neighbor, rate), ...]}
            
            Returns: dictionary of the maximum achievable amount for each currency.
            """
            best = defaultdict(float)   # stores the best (maximum) amount for each currency
            pq = []  # priority queue (max-heap using negative values)
            
            # Initialize heap with starting amounts
            for cur, amt in start_amounts.items():
                best[cur] = max(best[cur], amt)
                heapq.heappush(pq, (-amt, cur))   # push negative to simulate max-heap
            
            # Standard Dijkstra loop (maximize instead of minimize)
            while pq:
                amt, cur = heapq.heappop(pq)
                amt = -amt   # convert back to positive
                
                # Skip if we already found a better path for this currency
                if amt < best[cur]:
                    continue
                
                # Explore neighbors
                for nxt, rate in graph[cur]:
                    new_amt = amt * rate
                    if new_amt > best[nxt]:
                        best[nxt] = new_amt
                        heapq.heappush(pq, (-new_amt, nxt))
            
            return best
        
        # --- Build graphs for both days ---
        day_one_graph = build_graph(pairs1, rates1)
        day_two_graph = build_graph(pairs2, rates2)
        
        # --- Day 1: find max amount reachable in all currencies ---
        day_one_best = max_exchange(day_one_graph, {initialCurrency: 1.0})
        
        # --- Day 2: start from the amounts obtained at the end of Day 1 ---
        day_two_best = max_exchange(day_two_graph, day_one_best)
        
        # --- Final result: best amount of the initial currency ---
        return max(day_two_best[initialCurrency], 1.0)
