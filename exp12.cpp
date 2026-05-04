#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void BFS(int startNode, vector<int> adj[], int nodes) {
    vector<bool> visited(nodes, false);
    queue<int> q;

    visited[startNode] = true;
    q.push(startNode);

    cout << "BFS Traversal: ";
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << curr << " ";

        for (int neighbor : adj[curr]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

void DFSUtil(int curr, vector<int> adj[], vector<bool> &visited) {
    visited[curr] = true;
    cout << curr << " ";

    for (int neighbor : adj[curr]) {
        if (!visited[neighbor]) {
            DFSUtil(neighbor, adj, visited);
        }
    }
}

void DFS(int startNode, vector<int> adj[], int nodes) {
    vector<bool> visited(nodes, false);
    cout << "DFS Traversal: ";
    DFSUtil(startNode, adj, visited);
    cout << endl;
}

int main() {
    int nodes = 5;
    vector<int> adj[5];

    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0};
    adj[3] = {1};
    adj[4] = {1};

    BFS(0, adj, nodes);
    DFS(0, adj, nodes);

    return 0;
}
