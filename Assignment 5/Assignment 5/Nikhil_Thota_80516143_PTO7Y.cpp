////
////  Nikhil_Thota_80516143_PTO7Y.cpp
////  Assignment 5
////
////  Created by Nikhil Thota on 4/15/16.
////  Copyright © 2016 Nikhil Thota. All rights reserved.
////
//
//#include <iostream>
//#include <list>
//#include <string>
//using namespace std;
//
//class Graph
//{
//private:
//    //Initialize N, number of nodes and the adjacency list
//    int N;
//    list<int> *adjacencyList;
//    
//    void DFSNode(int n, bool visitedList[])
//    {
//        //Mark node n as visited
//        visitedList[n] = true;
//        
//        //Iterate through the adjacency list of n and recursively visit each node adjacent to n
//        list<int>::iterator i;
//        for(i = adjacencyList[n].begin(); i != adjacencyList[n].end(); i++)
//        {
//            if(!visitedList[*i])
//                DFSNode(*i, visitedList);
//            else if(visitedList[*i])
//                treeFlag = "NO";
//        }
//    }
//    
//public:
//    //Flag for whether or not the Graph is a tree
//    string treeFlag = "YES";
//    
//    //Initialize a new graph with N nodes and create an adjacency list for each node
//    Graph(int N)
//    {
//        //N + 1 so that there is no index 0 error
//        this->N = N + 1;
//        adjacencyList = new list<int>[N + 1];
//    }
//    
//    //Connect a and b
//    void addEdge(int a, int b)
//    {
//        adjacencyList[a].push_back(b);
//        //adjacencyList[b].push_back(a);
//    }
//    
//    //Does a DFS of the whole graph
//    void DFS()
//    {
//        bool *visitedList = new bool[N];
//        for(int i = 0; i < N; i++)
//            visitedList[i] = false;
//        
//        for(int i = 0; i < N; i++)
//        {
//            if(visitedList[i] == false)
//                DFSNode(i, visitedList);
//        }
//    }
//};
//
//int main(int argc, const char * argv[])
//{
//    int N, M;
//    cin >> N >> M;
//    
//    Graph DFSGraph(N);
//    
//    for(int i = 0; i < M; i++)
//    {
//        int a, b;
//        cin >> a >> b;
//        
//        DFSGraph.addEdge(a, b);
//    }
//    
//    DFSGraph.DFS();
//    
//    cout << DFSGraph.treeFlag;
//    
//    return 0;
//}
