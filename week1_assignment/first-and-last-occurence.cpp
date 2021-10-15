class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        if(nums.size()==0){
            result.push_back(-1);
            result.push_back(-1);
        }
        
        for(int i=0;i!=nums.size();i++){
            if(nums[i]==target){
                result.push_back(i);
                break;
            }
        }
        
        for(int i=nums.size()-1; i>=0;i--){
            if(nums[i]==target){
                result.push_back(i);
                break;
            }
        }
        
        if(result.empty()){
            result.push_back(-1);
            result.push_back(-1);
        }
        return result;
    }
   
};