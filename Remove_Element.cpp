// Remove Duplicates from Sorted Array II

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        if(size < 3) return size;

        int ind = 2;
        for(int i=2;i<size;i++){
            if(nums[i] != nums[ind-2]){
                nums[ind] = nums[i];
                ind++;
            }
        }
        return ind;
    }
};
