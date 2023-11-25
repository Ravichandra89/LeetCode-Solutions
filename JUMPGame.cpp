class Solution {
public:
    bool canJump(vector<int>& nums) {
        int temp=0;
        for(int i=0;i<nums.size();i++){
            if(temp < i){
                return false;
            }
            temp = max(temp,i+nums[i]);
        }
        return true;
    }
};
