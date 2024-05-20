# include<iostream>
# include<list>
# include<unordered_map>

using namespace std;

// class Graph {
//     public:
//         unordered_map<int, list<int> > adjList;

//         void addEdge(int u, int v, bool direction) {
//             //direction => 0 -> Undirected
//             //direction => 1 -> Directed
//             if(direction == 1) {
//                 adjList[u].push_back(v);
//             }

//             else {
//                 adjList[u].push_back(v);
//                 adjList[v].push_back(u);
//             } 
//             cout <<endl << "Printing adjList: " << endl;
//             printGraph();
//             cout << endl;   
//         }

//         void printEdge() {
//             for(auto i : adjList) {
//                 cout << i.first << " -> {";
//                 for(auto neighbour : i.second) {
//                     cout << neighbour << ", ";
//                 }
//                 cout << " }" << endl;
//             }
//         }

// };

template <typename T>
class Graph {
    public:
        unordered_map<T, list<pair<T, int> > > adjList;

        void addEdge(T u, T v, int weight, bool direction) {
            //directed => 1
            if(direction == 1) {
                adjList[u].push_back({v, weight});
            }

            else {
                //direction => 0 -> undirected (both way)
                adjList[u].push_back({v, weight});
                adjList[v].push_back({u, weight});
            }

            cout <<endl << "Printing adjList: " << endl;
            printEdge();
            cout << endl;
        }

        void printEdge() {
            for(auto i : adjList) {
                cout << i.first << " -> { ";
                for(auto neighbour : i.second) {
                    cout << "{" << neighbour.first << ", " << neighbour.second << "}, ";
                }
                cout << "}" << endl;
            }
        }
};

int main() {

    Graph<int> g;
    g.addEdge(0, 1, 10, 0);
    g.addEdge(1, 2, 20, 0);
    g.addEdge(1, 3, 30, 0);
    g.addEdge(2, 3, 15, 0);

    return 0;
}