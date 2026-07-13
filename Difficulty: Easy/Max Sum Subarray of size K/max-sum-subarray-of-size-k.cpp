class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int sum = 0;
        for(int i = 0; i<k ; i++){
            sum+=arr[i];
        }
        
        int maxSum = sum;
        
        for(int i = k ; i<arr.size();i++){
            sum = sum +arr[i] - arr[i-k];
            maxSum = max(maxSum,sum);
        }
        return maxSum;
    }
};