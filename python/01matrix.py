from collections import deque
from typing import List


class Solution:
    def updatedistandaddtoq(self,x,y,currdist,q,mat):
        m=len(mat)
        n=len(mat[0])
        if x>=0 and x<m and y >=0 and y<n :
            if mat[x][y]== -1:
                mat[x][y]=currdist+1
                #print("added",x,y," with distance ",currdist+1)
                q.append([x,y])
    
    def updateMatrix(self, mat: List[List[int]]) -> List[List[int]]:
        m=len(mat)
        n=len(mat[0])
        # ans=[[(m-1)*(n-1)]*n]*m
        q=deque()
        for i in range(m):
            for j in range(n):
                if mat[i][j]==0:
                    q.append([i,j])
                else:
                    mat[i][j]=-1
        currdist=0
        
        while(len(q)>0):
            currsize=len(q)
            #print("q contains",currsize)
            for i in range(currsize):
                popc=q.popleft()
                #print("popped",popc)
                x=popc[0]
                y=popc[1]
                self.updatedistandaddtoq(x-1,y,currdist,q,mat);
                self.updatedistandaddtoq(x,y+1,currdist,q,mat);
                self.updatedistandaddtoq(x+1,y,currdist,q,mat);
                self.updatedistandaddtoq(x,y-1,currdist,q,mat);
            #print("matrix after this level added",mat)
            currdist+=1
                    
        #print(mat)
        return mat
        


if __name__=="__main__":
    mat = [[0,0,0],
           [0,1,0],
           [1,1,1]]
    obj = Solution()
    obj.updateMatrix(mat)