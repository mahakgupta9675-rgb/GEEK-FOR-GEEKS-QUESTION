class Solution {
  public:
    vector<int> parent, sz;

    int find(int x) {
        if (parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }

    void unite(int a, int b) {
        a = find(a);
        b = find(b);

        if (a == b)
            return;

        if (sz[a] < sz[b])
            swap(a, b);

        parent[b] = a;
        sz[a] += sz[b];
    }

    int minEdgesReq(int n, vector<vector<int>>& edges) {
        int m = edges.size();

        // Not enough edges to form a connected graph
        if (m < n - 1)
            return -1;

        parent.resize(n);
        sz.assign(n, 1);

        for (int i = 0; i < n; i++)
            parent[i] = i;

        for (auto &e : edges)
            unite(e[0], e[1]);

        int components = 0;

        for (int i = 0; i < n; i++) {
            if (find(i) == i)
                components++;
        }

        // Need components - 1 edges to connect all components
        return components - 1;
    }
};