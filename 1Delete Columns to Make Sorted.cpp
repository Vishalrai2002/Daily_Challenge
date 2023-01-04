class Solution {
    
public:
    int minDeletionSize(vector<string>& str) {
        int ans=0;
        int m=str.size(); // row size()
        int n=str[0].size(); // col size()
        for(int j=0;j<n;j++){ //start from col 

        // Ist method to check 
            // for(int i=1;i<m;i++){
            //     if(str[i-1][j]>str[i][j]){
            //         ans++;
            //         break;
            //     }
            // }
        // 2nd method to check
            for(int i=0;i<m-1;i++){ // check for all rows
                if(str[i][j]>str[i+1][j]){ // if at any moment its size is greater then ans++                                          // and break it
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};
