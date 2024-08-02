#include <bits/stdc++.h>
using namespace std;

void dfs(unordered_map<char, vector<char>> g, char x)
{
    stack<char> st;
    st.push(x);
    cout << "DFS seq: " << endl;
    ;
    while (st.size() > 0)
    {
        char curr = st.top();
        st.pop();
        cout << curr << ' ';

        for (auto i : g)
        {
            if (i.first == curr)
            {
                for (auto j : i.second)
                {
                    st.push(j);
                }
            }
        }
    }
}

void dfsrec(unordered_map<char, vector<char>> g, char x)
{
    cout << x << ' ';
    for (auto i : g)
    {
        if (i.first == x)
        {
            for (auto j : i.second)
            {
                dfsrec(g, j);
            }
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
    // dfs(g, 'a');
    dfsrec(g, 'a');
    cout << endl;
}
