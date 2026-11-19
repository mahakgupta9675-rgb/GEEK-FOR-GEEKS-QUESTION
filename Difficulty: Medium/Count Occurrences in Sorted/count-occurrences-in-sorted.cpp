class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int count = 0;
        for(int i = 0; i<arr.size(); i++){
            if(target==arr[i]){
                count++;
            }
        }
        return count;
    }
};
