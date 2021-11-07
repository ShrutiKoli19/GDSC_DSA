class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int found=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
               found = i;
            }
            else if(nums[i]<target){
                found = i+1;
            }
        }
        return found;
    }
};