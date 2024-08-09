class Solution {
  public:
    int max(int x, int y){
        if(x>y){
            return x;
        }
        else{
            return y;
        }
    }
    long long maxSubarraySum(vector<int> &arr) {
    
        long long curr_max=arr[0];
        long long global_max= arr[0];
        
        for(int i=1;i<arr.size();i++){
            curr_max= max(curr_max+arr[i], arr[i]); 
            //negative elements will not add up in curr_max
            //value will update and new subarray will start at a positive number
            global_max = max(global_max, curr_max);
        }
        
        return global_max;
    }
};
