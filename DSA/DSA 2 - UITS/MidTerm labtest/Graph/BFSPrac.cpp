#include <bits/stdc++.h>
using namespace std;

// global variables
vector<int> adj[100], res;// 2D vector adj, 1D vector res
int vis[100]; // 1D array vis


void bfs(int source)
{
    // process source node
    queue<int> q;
    q.push(source);
    vis[source]=1;
    res.push_back(source);

    // loop until queue is empty
    while(!q.empty())
    {
        int cur = q.front(); // store current node
        q.pop(); // pop front node

        // access neighbour nodes of current node
        for(int i=0; i<adj[cur].size(); i++)
            // loop each node until all neighbors found
        {
            int neighbor = adj[cur][i];
            // check if not visited
            if(vis[neighbor]==0)
            {
                vis[neighbor]=1; // mark viisted
                q.push(neighbor); // push neighbor into queue
                res.push_back(neighbor); // add neighbor into traversal
            }


        }


    }

}

int main()
{
    // node, edge
    int node, edge, u, v;
    cin >> node >> edge;
    // loop until edge
    for(int i=0; i<edge; i++)
    {
        //take node and edge values
        cin >> u >> v;
        // push into the data structure
        adj[u].push_back(v); //undirected graph
        adj[v].push_back(u);
    }
    int source = 0; // starting node
    bfs(source); // run bfs traversal
    cout << endl;
// output the result of traversal
    for(int i=0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }



    /*
    6 10
    0 1
    0 2
    1 3
    1 4
    2 4
    2 5
    5 6
    4 6
    3 4
    3 6
    */
    return 0;
}
