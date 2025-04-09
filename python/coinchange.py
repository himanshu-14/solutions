from typing import List


class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        n=len(coins)
        t=amount
        arr=coins
        dp=[[-1]*(t+1)]*n
        dp[0][0]=0
        # min number of coins to make 0 using just the first denom is 0
        for i in range(arr[0],t+1): # go from 0 to t
            #arr[0] the first denom can only be taken for amts>=arr[0]
            if dp[0][i-arr[0]]==-1:
                dp[0][i]= -1
            else:
                 dp[0][i]= 1+ dp[0][i-arr[0]]
        #cant make a sum using arr[0] denomination if it's not divisible by that denomination
        for row in range(1,n):
            for i in range(arr[row],t+1):
                dp[row][i]=dp[row-1][i]
                if dp[row][i]== -1 and dp[row][i-arr[row]] != -1:
                    dp[row][i]= dp[row][i-arr[row]]+1
                elif dp[row][i-arr[row]] != -1:
                    dp[row][i]= min(dp[row][i],dp[row][i-arr[row]]+1)
        

        return dp[n-1][t]