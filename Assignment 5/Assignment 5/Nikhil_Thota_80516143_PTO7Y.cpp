//
//  main.cpp
//  Assignment 5
//
//  Created by Nikhil Thota on 4/15/16.
//  Copyright © 2016 Nikhil Thota. All rights reserved.
//

#include <iostream>
#include <list>
using namespace std;

class Graph
{
private:
    //Initialize N, number of nodes and the adjacency list
    int N;
    list<int> *adjacencyList;
    
    void DFSNode(int n, bool visitedList[])
    {
        //Mark node n as visited
        visitedList[n] = true;
        
        //Iterate through the adjacency list of n and recursively visit each node adjacent to n
    }
    
public:
    //Initialize a new graph with N nodes and create an adjacency list for each node
    Graph(int N)
    {
        this->N = N;
        adjacencyList = new list<int>[N];
    }
    
    //Connect a and b
    void addEdge(int a, int b)
    {
        adjacencyList[a].push_back(b);
        adjacencyList[b].push_back(a);
    }
};

int main(int argc, const char * argv[])
{
    int N, M;
    cin >> N >> M;
    
    return 0;
}
