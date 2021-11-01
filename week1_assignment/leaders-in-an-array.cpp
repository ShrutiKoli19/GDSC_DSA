class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        int res=0;
        vector<int> leader;
        for(int i=n-1;i>=0;i--){
            if(a[i]>=res){
                leader.push_back(a[i]);
                res = max(a[i], res);
            }
        }
        
        reverse(leader.begin(), leader.end());
        return leader;
    }
};