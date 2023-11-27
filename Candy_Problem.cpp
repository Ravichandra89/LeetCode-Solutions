class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int ans = 0;
        
        // Initilizing two Arrays with default 1's rating
        vector<int> left(n,1);
        vector<int> right(n,1);

        // Left to Right
        for(int i=1;i<n;i++){
            if(ratings[i] > ratings[i-1]){
                right[i] = 1 + right[i-1];
            }
        }

        // Right to Left
        for(int i=n-2;i>=0;i--){
            if(ratings[i] > ratings[i+1]){
                left[i] = 1 + left[i+1];
            }
        }

        for(int i=0;i<n;i++){
            ans += max(left[i],right[i]);
        }

        return ans;
    }
};
