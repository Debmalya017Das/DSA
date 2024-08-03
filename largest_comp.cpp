#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int dfs(unordered_map<int, vector<int>> &g, int x, set<int> &v)
{
    if (v.find(x) != v.end())
        return 0;
    v.insert(x);
    int s = 1;
    for (auto i : g[x])
    {
        s += dfs(g, i, v);
    }
    return s;
}

int largest(unordered_map<int, vector<int>> &g)
{
    set<int> vis;
    int longest = 0;
    for (auto i : g)
    {
        int s = dfs(g, i.first, vis);
        if (s > longest)
            longest = s;
    }
    return longest;
}

int main()
{
    unordered_map<int, vector<int>> graph;
    graph[0] = {8, 1, 5};
    graph[1] = {0};
    graph[5] = {0, 8};
    graph[8] = {0, 5};
    graph[2] = {3, 4};
    graph[3] = {2, 4};
    graph[4] = {3, 2};

    cout << largest(graph);
}