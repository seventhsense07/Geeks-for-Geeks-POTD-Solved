class Solution:
    def asteroidCollision(self, N, arr):
        stck=[]
        i=0
        while i<len(arr):
            if len(stck)==0:
                stck.append(arr[i])
                i+=1
            elif stck[-1]>0 and arr[i]<0:
                if (arr[i]*-1)<stck[-1]:
                    i+=1
                elif (arr[i]*-1)==stck[-1]:
                    stck.pop()
                    i+=1
                else:
                    stck.pop()
            else:
                stck.append(arr[i])
                i+=1
        return stck
