class Quickunionuf:
    def __init__(self,n):
        #initialisiation of the array
        self.id = [i for i in range(n)]
        self.size = [1]* n
    
    def find(self,p):
        while(self.id[p] != p):
            p = self.id[p]
        return p
    
    def union(self,p,q):
        proot= self.find(p)
        rroot= self.find(q)
        self.id[proot]=rroot
    
    def connected(self,p,q):
        return self.find(p)==self.find(q)
    
    def weightedunion(self,p,q):
        proot = self.find(p)
        rroot = self.find(q)
        if proot==rroot: return
        if self.size[proot]< self.size[rroot]:
            self.id[proot]=rroot
            self.size[rroot] += self.size[proot]
        else:
             self.id[rroot]=proot
             self.size[proot] += self.size[rroot]
    
    def pathcompressedfind(self,p):
        while(self.id[p]!=p):
            self.id[p] =self.id[self.id[p]]
            p=self.id[p]
        return p




