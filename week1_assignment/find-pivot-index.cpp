class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int n = nums.size();
        int leftsum=0;
        for(int i=0; i<n;i++){
            sum+=nums[i];
        }
        
        for(int i=0;i<n;i++){
            if(leftsum == sum-nums[i]-leftsum){
                return i;
            }
            leftsum+=nums[i];
        }
        
        return -1;
    }
};