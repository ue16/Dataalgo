#include <stdio.h>
#include <vector>
class Quickfinduf {
    private:
        std:: vector<int> id;
    public:
    //constructor 
        Quickfinduf(int n){
            id.resize(n);
            for(int i = 0; i <n;i++){
                id[i]=i;
            }
        };
    
    
        int find(int p){
            return id[p];
        }
        bool connected(int p ,int q){
            return find(p)==find(q);
        
        }
        void _union_(int p ,int q){ //need to be changed
            int pid = id[p];
            int qid= id[q];
            for(int i=0;i< id.size();i++){
                if(id[i]==pid){
                    id[i]=qid;

                }
            }

        }

};