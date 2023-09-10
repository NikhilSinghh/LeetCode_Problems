class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cur=prices[0];
        int m=0;
        for(int i=1; i<prices.size(); i++){
            if(cur>prices[i])
                cur=prices[i];
                else
                   m= max(m, prices[i]-cur );
        }
        return m;

        
    }
};
