#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> tree;
vector<int> colors;

void dfs(int node, int parent, int color)
{
    colors[node] = color;
    for (int neighbor : tree[node])
    {
        if (neighbor != parent)
        {
            dfs(neighbor, node, 1 - color);
        }
    }
}

int main()
{
    int T;
    cin >> T; // Number of test cases

    while (T--)
    {
        int N;
        cin >> N; // Number of vertices of the tree

        tree.resize(N + 1);
        colors.assign(N + 1, -1); // Initialize colors

        // Read the edges of the tree
        for (int i = 0; i < N - 1; ++i)
        {
            int u, v;
            cin >> u >> v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }

        // Perform DFS starting from node 1 with color 0
        dfs(1, 0, 0);

        // Output the colors
        for (int i = 1; i <= N; ++i)
        {
            cout << (colors[i] == 0 ? 'R' : 'B');
        }
        cout << endl;

        // Clear tree for the next test case
        tree.clear();
    }

    return 0;
}
