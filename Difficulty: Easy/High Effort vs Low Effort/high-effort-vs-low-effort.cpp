class Solution {
  public:
    int maxTask(vector<int>& h, vector<int>& l) {
        int n = h.size();

        int noTask = 0;
        int task = 0;

        for (int i = 0; i < n; i++) {
            int newNoTask = max(noTask, task);

            int newTask = max(
                max(noTask, task) + l[i],
                noTask + h[i]
            );

            noTask = newNoTask;
            task = newTask;
        }

        return max(noTask, task);
    }
};