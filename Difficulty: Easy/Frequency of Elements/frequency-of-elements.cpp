class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        vector<vector<int>>ans;
        for(int i: arr){
            mp[i]++;
        }
        for(auto j: mp){
            ans.push_back({j.first,j.second});
        }
        
        return ans;
    }
};