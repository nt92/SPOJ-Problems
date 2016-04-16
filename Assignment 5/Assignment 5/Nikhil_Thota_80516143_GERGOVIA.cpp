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

bool getSign(int a)
{
    if (a >= 0)
        return true;
    else
        return false;
}

int absValue(int a)
{
    if (a >= 0)
        return a;
    else
        return -a;
}

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
    
    int doBusiness()
    {
//        Node *p = head;
//        Node *n = p->next;
//        int count = 0;
//        
//        while(n)
//        {
//            int m = 1;
//            bool pSign = getSign(p->data);
//            
//            while(pSign == getSign(n->data) || n->data == 0)
//            {
//                n = n->next;
//                m++;
//            }
//            
//            if(absValue(p->data) > absValue(n->data))
//            {
//                count += m * absValue(n->data);
//                p->data += n->data;
//                n->data = 0;
//            }
//            else
//            {
//                count += m * absValue(p->data);
//                n->data += p->data;
//                p->data = 0;
//                p = p->next;
//            }
//        }
//        
//        return count;
        
        int count = 0;
        
        Node *p = head;
        
        while(p)
        {
            count += absValue(p->data);
            if(p->next)
                p->next->data += p->data;
            
            p = p->next;
        }
        
        return count;
    }
};

int main()
{
    int n; cin >> n;
    
    while(n != 0)
    {
        LinkedList list;
        
        for(int i = 0; i < n; i++)
        {
            int in; cin >> in;
            list.addNode(in);
        }
        
        cout << list.doBusiness() << endl;
        cin >> n;
    }
}
