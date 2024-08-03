#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/// it was coming 7 but using pass by reference corrected it////

bool path(unordered_map<int, vector<int>> &g, int x, set<int> &v)
{

    if (v.find(x) != v.end())
        return false;
    v.insert(x);
    for (auto nb : g[x])
    {
        path(g, nb, v);
    }
    return true;
}
// void print(const set<int> &v)
// {
//     for (auto it : v)
//     {
//         cout << it << " ";
//     }
//     cout << endl;
// }

int count(unordered_map<int, vector<int>> &g)
{

    set<int> vis;
    int count = 0;
    for (auto node : g)
    {
        // print(vis);
        if (path(g, node.first, vis) == true)
            count++;
    }
    return count;
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

    cout << count(graph);
}