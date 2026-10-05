#include <bits/stdc++.h>
using namespace std;

class graph{
    public:
        unordered_map<int,list<int>> adj;

        void add_edge(int u, int v, bool direction){
            //direction = 0 ->undirected
            //direction = 1 ->directed

            //create an edge from u to v
            adj[u].push_back(v);
            if(direction == 0){
                adj[v].push_back(u);
            }

        }

        void printAdjList(){
            for(auto i: adj){
                cout << i.first << "-> ";
                for(auto j: i.second){
                    cout << j << ", ";
                }
                cout << endl;
            }
        }

        void BFS( unordered_map<int,bool> &visited, int node){
            queue <int> q;
            q.push(node);
            visited[node] = true;

    

            while(!q.empty()){
                int front = q.front();
                int size = q.size();
                q.pop();



                cout << front << " ";

    

                    for(auto &j: adj[front]){
                        if(!visited[j]){
                            q.push(j);
                            visited[j] = true;
                        }
                    }
                    

            }
        }

        void DFS(unordered_map<int,bool> &visited, int node){

            cout << node << " ";
            visited[node] = true;

            for(auto &j:adj[node]){
                if(!visited[j]){
                    DFS(visited,j);
                    visited[j] = true;
                }
            }
        }
};



int main(){
    int n ;
    cout << "Enter number of nodes | " << endl;
    cin >> n;

    int m;
    cout << "Enter number of edges | " << endl;
    cin >> m;

    unordered_map<int,bool> visited_1;
    unordered_map<int,bool> visited_2;

    graph g;

    for(int i = 0; i < m; i++){
        int u, v;
        cout << "Enter u and v : ";
        cin >> u >> v;
        //creating a undirected graph
        g.add_edge(u,v,0);
        g.printAdjList();

        
        //0
    }

    cout << "DFS = ";
    for(int i = 0; i < n;i++){
            if(visited_1[i]){
                continue;
            }
            g.BFS(visited_1,i);
            //4 4 1 3 3 0 0 2 2 1
            
            
        }

    cout << "\nBFS = ";
    for(int i = 0; i < n;i++){
        if(visited_2[i]){
                continue;
            }
        g.DFS(visited_2,i);
    }

}