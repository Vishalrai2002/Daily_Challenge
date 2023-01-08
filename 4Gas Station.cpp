class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int gsum=0;int csum=0; 
        for(int i=0;i<n;i++){
            gsum+=gas[i]; // calculate the total gas
            csum+=cost[i]; // calculate the total cost
        }
        // if cost is greater then directly yu have to return -1
        if(csum>gsum){
            return -1;
        }
        // if yu are here that means ans is possible 
    int ansidx=0; int curgas=0;
        for(int i=0;i<n;i++){
            // you curgas is gas at i station - how much cost you spend
            curgas+=gas[i]-cost[i];
// if your curgas is negative that means you have to increment you ansidx and try with new
// ansidx so yu have to do i+1 
// and also mark you curgas with 0
            if(curgas<0){ 
                ansidx=i+1;
                curgas=0;
            }
            
        }
        // and finally return your ansidx
        return ansidx;
    }
};
