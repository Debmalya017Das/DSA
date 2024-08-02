#include <bits/stdc++.h>
using namespace std;
// dfs
bool haspath(unordered_map<char, vector<char>> g, char s, char d)
{
    if (s == d)
        return 1;
    for (auto i : g[s])
    {

        if (haspath(g, i, d) == 1)
        {
            return 1;
        }
        return 0;
    }
}
// bfs
// bool haspath(unordered_map<char, vector<char>> g, char s, char d)
// {

//     queue<char> q;
//     q.push(s);
//     while (q.size() > 0)
//     {
//         char curr = q.front();
//         q.pop();
//         if (curr == d)
//             return 1;
//         for (auto i : g)
//         {
//             if (i.first == s)
//             {
//                 for (auto j : i.second)
//                 {
//                     if (haspath(g, j, d) == 1)
//                     {
//                         return 1;
//                     }
//                 }
//             }
//         }
//     }

//     return 0;
// }
int main()
{
    unordered_map<char, vector<char>> g;
    g['a'].push_back('b');
    g['a'].push_back('c');
    g['b'].push_back('d');
    g['c'].push_back('e');
    g['d'].push_back('f');

    cout << haspath(g, 'a', 'f');
}