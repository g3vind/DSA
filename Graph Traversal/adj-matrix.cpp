#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; // n-nodes & m-edges
    cout << "Enter number of nodes : " << endl;
    cin >> n;
    cout << "Enter number of edges : " << endl;
    cin >> m;
    int adj[n + 1][m + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cout << "Enter the edges : ";
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    return 0;
}