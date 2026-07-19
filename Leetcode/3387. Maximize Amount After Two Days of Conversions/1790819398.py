class Solution:
    def maxAmount(self, initialCurrency: str, pairs1: List[List[str]], rates1: List[float], pairs2: List[List[str]], rates2: List[float]) -> float:

        seen = set()
        day_one_graph = defaultdict(list)
        day_two_graph = defaultdict(list)

        for i in range(len(pairs1)):
            start, target = pairs1[i]
            rate = rates1[i]

            day_one_graph[start].append((target, rate))
            day_one_graph[target].append((start, 1 / rate))

        for i in range(len(pairs2)):
            start, target = pairs2[i]
            rate = rates2[i]

            day_two_graph[start].append((target, rate))
            day_two_graph[target].append((start, 1 / rate))
        
        queue = [(initialCurrency, 1)]
        day_one_max = defaultdict(int)

        while queue:
            currency, amount = queue.pop(0)
            amount = round(amount, 10)

            if (currency, amount) in seen:
                continue

            seen.add((currency, amount))
            day_one_max[currency] = max(day_one_max[currency], amount)
        
            for target, rate in day_one_graph[currency]:
                queue.append((target, amount * rate))
            
        queue = [(currency, amount) for currency, amount in day_one_max.items()]
        seen = set()
        day_two_max = defaultdict(int)

        while queue:
            currency, amount = queue.pop(0)
            amount = round(amount, 10)

            if (currency, amount) in seen:
                continue

            seen.add((currency, amount))
            day_two_max[currency] = max(day_two_max[currency], amount)
        
            for target, rate in day_two_graph[currency]:
                queue.append((target, amount * rate))
        
        return max(day_two_max[initialCurrency], 1)