def slow_min_abs_sum(A):
   N = len(A)
   M = 0
   for i in xrange(N):
      A[i] = abs(A[i]) 
      M = max(A[i], M)
   S = sum(A)
   dp = [0] * (S + 1)
   dp[0] = 1
   for j in xrange(N):
      for i in xrange(S, -1, -1):
         if (dp[i] == 1) and (i + A[j] <= S):
            dp[i + A[j]] = 1
   result = S
