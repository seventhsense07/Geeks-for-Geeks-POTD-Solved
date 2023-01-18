class Solution:
    def carpetBox(self, A,B,C,D):
        s=0
        x=A
        y=B
        while x>C or y>D:
            if x>C:
                s+=1
                x//=2
            if y>D:
                s+=1
                y//=2
        ans=s
        s=0
        x=B
        y=A
        while x>C or y>D:
            if x>C:
                s+=1
                x//=2
            if y>D:
                s+=1
                y//=2
        return min(ans,s)
