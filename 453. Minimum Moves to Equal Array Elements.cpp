class Solution {
public:
    int minMoves(vector<int>& n) {
        sort(n.begin(), n.end());
        int d=0;
        for(int i=n.size()-1; i>0; i--)
                 d+=n[i]-n[0];

        return d;
        
    }
};
