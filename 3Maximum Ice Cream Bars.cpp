class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0;
        // 1 1 2 3 4 total =7;
        if(costs[0]>coins){
            return 0;
        }
        for(int i=0;i<costs.size();i++){
          
            if(coins-costs[i]>=0){
                coins-=costs[i];
                ans++;
            }

        }
        return ans;        
    }
};
