#include <vector>
class Quickunion {
    private:
        std::vector<int> id;
        std:: vector<int> size;


    public:
        Quickunion(int n){
            id.resize(n); // resize the array
            for(int i=0;i<n;i++){
                id[i]=0;

            }
        }
        int find(int p){
            while(id[p] != p){
                p =id[p];
            }
            return p;
        }
        void QuickUnion(int p, int q){
           int proot = find(p);
           int rroot = find(q);
           id[proot]=rroot;
        }

        bool connected(int p, int q){
            return find(p) == find(q);
        }

        int pathcompressedfind(int p){
            while(id[p] != p){
                id[p]= id[id[p]];
                p= id[p];
            }
            return p;
        }

        void weightedcompressedfile(int p , int q)
        {
            int pr = find(p);
            int qr = find (q);
            if(pr ==qr)return;
            if(size[pr]<size[qr]){id[pr]=qr;size[qr] += size[pr];}
            else{id[qr]=pr;size[pr] += size[qr];}
        }
};
int main(){
    Quickunion(20);

    return 0;
}