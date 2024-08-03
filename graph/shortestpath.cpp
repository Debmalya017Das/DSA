#include <bits/stdc++.h>
using namespace std;

void printgraph(unordered_map<char, vector<char>> &g)
{
    for (auto i : g)
    {
        cout << i.first << "-> ";
        cout << "[ ";
        for (auto j : i.second)
        {
            cout << j << ", ";
        }
        cout << "]" << endl;
    }
}
int shortestpath(unordered_map<char, vector<char>> &g, char s, char d)
{
    set<char> vis;
    vis.insert(s);
    queue<pair<char, int>> q;
    q.push({s, 0});

    while (q.size() > 0)
    {
        char node = q.front().first;
        int dist = q.front().second;
        q.pop();
        if (node == d)
            return dist;
        for (auto i : g[node])
        {
            if (vis.find(i) == vis.end())
            {
                vis.insert(i);
                q.push({i, dist + 1});
            }
        }
    }
    return -1;
}

void build(vector<pair<char, char>> &e)
{
    unordered_map<char, vector<char>> g;
    for (auto i : e)
    {
        if (g.find(i.first) == g.end())
            g[i.first] = {};
        if (g.find(i.second) == g.end())
            g[i.second] = {};
        g[i.first].push_back(i.second);
        g[i.second].push_back(i.first);
    }
    printgraph(g);
    cout << shortestpath(g, 'v', 'z') << endl;
}

int main()
{
    // given edges:
    vector<pair<char, char>> edges = {
        {'w', 'x'},
        {'x', 'y'},
        {'z', 'y'},
        {'z', 'v'},
        {'w', 'v'},
    };
    build(edges);
}
