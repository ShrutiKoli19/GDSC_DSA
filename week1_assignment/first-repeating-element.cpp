class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        for(int i=0;i<n-1;i++){
            for(int j = i;j<n;j++){
                if(arr[i]==arr[j]){
                    cout<<arr[i]<<endl;
                    break;
                }
            }
        }
        
    }
};