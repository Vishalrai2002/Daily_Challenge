class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int n=tasks.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[tasks[i]]++;
        }
        int ans=0;
        for(auto it:mp){
            if(it.second<2){
                return -1;
            }
            if(it.second==2){
                ans++;
            }
            else if(it.second==3){
                ans++;
            }
            else if(it.second>3){
                float a=it.second;
                float b=3.0;
                ans+=ceil(a/b);
            }
        }
        return ans;
    }
};
