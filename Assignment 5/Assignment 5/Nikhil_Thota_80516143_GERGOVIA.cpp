//
//  Nikhil_Thota_80516143_GERGOVIA.cpp
//  Assignment 5
//
//  Created by Nikhil Thota on 4/16/16.
//  Copyright © 2016 Nikhil Thota. All rights reserved.
//

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next = NULL;
    
    Node(int d)
    {
        data = d;
    }
    
    Node(int d, Node *n)
    {
        data = d;
        next = n;
    }
};

class LinkedList
{
private:
    Node *tail = NULL;
    
public:
    Node *head = NULL;
    
    void addNode(int val)
    {
        Node *p;
        
        if(!head)
        {
            head = new Node(val);
            tail = head;
        }
        else
        {
            p = tail;
            p->next = new Node(val);
            tail = p->next;
        }
    }
    
    void printList()
    {
        Node *p = head;
        while(p)
        {
            cout << p->data << "\n";
            p = p->next;
        }
    }
};

int main()
{
    int n; cin >> n;
    
    LinkedList output;
    
    while(n != 0)
    {
        LinkedList list;
        
        for(int i = 0; i < n; i++)
        {
            int in; cin >> in;
            list.addNode(in);
        }
    }
}
