class Solution:
    def is_prime(self, n: int) -> bool:
        if n < 2:
            return False

        small_primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29]
        for p in small_primes:
            if n == p:
                return True
            if n % p == 0:
                return False

        d = n - 1
        s = 0

        def check(a: int) -> bool:
            x = pow(a, d, n)
            if x == 1 or x == n - 1:
                return True

            for _ in range(s - 1):
                x = (x * x) % n
                if x == n - 1:
                    return True
            return False

        bases = [2, 3, 5, 7, 11, 13]
        for a in bases:
            if a >= n:
                break
            if not check(a):
                return False

        return True
            
        
    def completePrime(self, num: int) -> bool:
        s = str(num)
        for k in range(1, len(s) + 1):
            prefix = int(s[:k])
            suffix = int(s[len(s) - k:])
            if not self.is_prime(prefix) or not self.is_prime(suffix):
                return False
        return True