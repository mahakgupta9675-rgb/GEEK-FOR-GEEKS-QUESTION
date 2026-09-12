class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      int n = nums.size();
      vector<int> ans;
      int MaxRight = nums[n-1];

      ans.push_back(MaxRight); 
      for(int i = n-2; i>=0 ; i--){
        if(nums[i]>= MaxRight){
            ans.push_back(nums[i]);
            MaxRight=nums[i];
        }
      } 
      reverse(ans.begin(),ans.end());
      return ans;

    }
};