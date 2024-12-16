class QuickFindUF:
    def __init__(self, n):
        # Initialize the id array where each element is its own root
        self.id = [i for i in range(n)]

    def find(self, p):
        # Return the id of p, representing its connected component
        return self.id[p]

    def union(self, p, q):
        # Find component ids for p and q
        pid = self.id[p]
        qid = self.id[q]
        
        # Update all elements in the same component as p to have the id of q
        for i in range(len(self.id)):
            if self.id[i] == pid:
                self.id[i] = qid



    
