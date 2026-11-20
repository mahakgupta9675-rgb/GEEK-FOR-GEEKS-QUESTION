class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        for(int i = 0; i<arr.size(); i++){
            swap(arr[i],arr[arr.size()-1]);
            
        }
        
    }
};