class Solution {
public:
    int maxProfit(vector<int>& prices) {

    int maxdiff=0;
    int minelem=prices[0];
    for(int i=0;i<prices.size();i++)
    {
        minelem=min(minelem, prices[i]);
        maxdiff=max(maxdiff,prices[i]-minelem);
    }
    return maxdiff;
    

    }
};


