class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int n = citations.size();
        int left = 0, right = n-1;
        int result = 0;

        while(left<=right){
            int mid = left+(right-left)/2;
            int index = n-mid;

            if(citations[mid] >= index){
                result = max(result,index);
                right = mid-1;
            }else{
                left = mid+1;
            }
            
        }
        return result;
    }
};
