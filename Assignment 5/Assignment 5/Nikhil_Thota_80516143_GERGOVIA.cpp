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
    long long data;
    Node *next = NULL;
    
    Node(long long d)
    {
        data = d;
    }
    
    Node(long long d, Node *n)
    {
        data = d;
        next = n;
    }
};

bool getSign(long long a)
{
    if (a >= 0)
        return true;
    else
        return false;
}

long long absValue(long long a)
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
    
    void addNode(long long val)
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
    
    long long doBusiness()
    {
//        Node *p = head;
//        Node *n = p->next;
//        long long count = 0;
//        
//        while(n)
//        {
//            long long m = 1;
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
        
        long long count = 0;
        
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
    long long n; cin >> n;
    
    while(n != 0)
    {
        LinkedList list;
        
        for(long long i = 0; i < n; i++)
        {
            long long in; cin >> in;
            list.addNode(in);
        }
        
        cout << list.doBusiness() << endl;
        cin >> n;
    }
}
