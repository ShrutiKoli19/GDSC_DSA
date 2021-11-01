class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool flag1 = true;
        bool flag2 = true;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                flag1 = false;
            }
            
            if(nums[i]>nums[i+1]){
                flag2 =  false;
            }
        }
        
        return flag1 || flag2;
    }
};