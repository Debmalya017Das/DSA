#include <bits/stdc++.h>
using namespace std;

void bfs(unordered_map<char, vector<char>> g, char a)
{
    queue<char> q;
    q.push(a);
    cout << "BFS seq : " << endl;
    while (q.size() > 0)
    {
        char curr = q.front();
        q.pop();
        cout << curr << ' ';

        for (auto i : g[curr])
        {
            q.push(i);
        }
    }
}

int main()
{
    unordered_map<char, vector<char>> g;
    g['a'].push_back('b');
    g['a'].push_back('c');
    g['b'].push_back('d');
    g['c'].push_back('e');
    g['d'].push_back('f');
    bfs(g, 'a');
}
