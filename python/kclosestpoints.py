from heapq import *
from typing import List

def dist(p):
    return p[0]*p[0]+p[1]*p[1]

class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        ans=[]
        arr=points
        n=len(arr)
        for i in range(k):
            ans.append((-dist(arr[i]),arr[i]))
        heapify(ans)
        for i in range(k,n):
            if dist(arr[i])<-ans[0][0]:
                heappop(ans)
                heappush(ans,(-dist(arr[i]),arr[i]))
        final = [p[1] for p in  ans]
        return final
            

        
if __name__ == "__main__":
    print("invoked")
    s = Solution()
    ans = s.kClosest([[1,1],[2,2],[3,3],[4,4]], 3)
    print(ans)