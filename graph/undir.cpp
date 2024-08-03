#include <bits/stdc++.h>
using namespace std;

//-------PRINTING THE GRAPH-------//
void printgraph(unordered_map<char, vector<char>> g)
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

//---------Checking path-----------//

bool path(unordered_map<char, vector<char>> g, char s, char d, set<char> vis)
{
    if (s == d)
        return true;
    for (auto i : vis)
    {
        if (vis.find(s) != vis.end())
            return false;
    }
    vis.insert(s);

    cout << "visited: ";
    for (auto v : vis)
    {
        cout << v << ", ";
    }
    cout << endl;
    for (auto i : g[s])
    {
        if (path(g, i, d, vis) == true)
            return true;
    }
    return false;
}

//---------CREATING UNDIRECTED GRAPH FROM THE VERTEX PAIRS---------//
void makegraph(vector<pair<char, char>> e)
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
    set<char> vis;
    cout << path(g, 'i', 'n', vis);
}

//----------GIVEN JUST THE VERTEX PAIRS(EDGES)-------//
int main()
{
    vector<pair<char, char>> edges = {
        {'i', 'j'},
        {'k', 'i'},
        {'m', 'k'},
        {'k', 'l'},
        {'o', 'n'},
    };

    makegraph(edges);
}