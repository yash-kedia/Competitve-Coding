//implementation of a generic graph


#include<iostream>
#include<map>
#include<list>
#include<cstring>
using namespace std;

//Template for a generic graph
template<typename T>

class Graph{
map<T,list<T> > adjList;
public:
    Graph(){

    }
    void addEdge(T u,T v,bool bidir=true){
    adjList[u].push_back(v);
    if(bidir){
        adjList[v].push_back(u);
    }
    }
    void printAdjList(){
        for(auto row: adjList){

            T key=row.first;
            cout<<key<<"->";
            for(T element:row.second){
                cout<<element<<" ,";
            }
            cout<<endl;
        }
    }
};
int main(){

Graph<string> g;
g.addEdge("Am","D");
g.addEdge("l","kk");
g.printAdjList();

}
