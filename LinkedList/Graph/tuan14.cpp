#include <bits/stdc++.h>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Graph {
public:
    Graph() {
        edge = NULL;
        noVertices = 0;
        noEdges = 0;
    }
    Graph (int N) {
        noVertices = N;
        noEdges = 0;
        edge = new bool * [noVertices];
        for (int i = 0; i < noVertices; i++) {
            edge[i] = new bool[noVertices];
            for (int j = 0; j < noVertices; j++) {
                edge[i][j] = false;
            }
        }
    }
    ~Graph () {
        for (int i = 0; i < noVertices; i++) {
            delete [] edge[i];
        }
        delete [] edge;
        edge = NULL;
        noVertices = 0;
        noEdges = 0;
    }
    void randomGenerate(int N) {
        noVertices = N;
        noEdges = 0;
        edge = new bool * [noVertices];
        for (int i = 0; i < noVertices; i++) {
            edge[i] = new bool[noVertices];
        }
        for (int i = 0; i < noVertices; i++) {
            edge[i][i] = false;
            for (int j = i + 1; j < noVertices; j++) {
                edge[i][j] = (rand() % 1000) < 500;
                edge[j][i] = edge[i][j];
                noEdges += edge[i][j];
            }
        }
    }
    void printEdge() {
        for (int i = 0; i < noVertices; i++) {
            for (int j = 0; j < noVertices; j++) {
                cout << edge[i][j] << " ";
            }
            cout << endl;
        }
    }
    void printGraphToFile(char * oFile) {
        ofstream file;
        file.open(oFile);
        file << noVertices << " " << noEdges << endl;
        for (int i = 0; i < noVertices - 1; i++) {
            for (int j = i + 1; j < noVertices; j++) {
                if (edge[i][j]) {
                    file << i << " " << j << endl;
                }
            }
        }
    }

    void bfs_matrix(int start){
        vector<bool> visited(noVertices,false);
        queue<int> q;
        q.push(start);
        visited[start] = true;

        while(!q.empty()){
            int node = q.front();
            q.pop();
            cout << node << " ";
            for(int i=0; i<noVertices; i++){
                if(edge[node][i] && !visited[i]){
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
    }

    void dfs_resursive(int node, vector<bool>& visited){
        visited[node] = true;
        cout << node << " ";
        for(int neighbor=0; neighbor<noVertices; neighbor++){
            if(!visited[neighbor]){
                dfs_resursive(neighbor,visited);
            }
        }
    }

    void dfs(int start){
        vector<bool> visited(noVertices,false);
        dfs_resursive(start, visited);
    }

private:
    bool ** edge;
    int noVertices;
    int noEdges;
};

// Chuong trinh chinh
int main() {
    Graph g;
    // srand(time(NULL));
    g.randomGenerate(5);
    g.printEdge();
    g.printGraphToFile("ThucHanh14_DoThi_Input.txt");
    // g.bfs_matrix(0);
    g.dfs(0);

    return 0;
}