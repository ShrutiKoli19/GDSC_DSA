class Solution{
    public:
    int immediateSmaller(int arr[], int n, int x)
    {
        // your code here
        int min=0;
        for(int i=0;i<n;++i)
        {
            if(x-min>x-arr[i] && x-arr[i]>0)
                min=arr[i];
        }
        if(min>0)
            return min;
        else
            return -1;
    }
};