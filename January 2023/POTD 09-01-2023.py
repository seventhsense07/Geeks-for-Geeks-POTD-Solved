class Solution():
    def solve(self, N, A):
        #your code here
        while(A[-1]==9):
            A.pop()
        return(len(A))
