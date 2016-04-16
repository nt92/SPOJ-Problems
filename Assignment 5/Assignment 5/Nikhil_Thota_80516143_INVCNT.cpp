//
//  Nikhil_Thota_80516143_INVCNT.cpp
//  Assignment 5
//
//  Created by Nikhil Thota on 4/16/16.
//  Copyright © 2016 Nikhil Thota. All rights reserved.
//

#include <iostream>
using namespace std;

int Merge(int *L, int *R, int *A, int lenL, int lenR)
{
    int i = 0; int j = 0; int k = 0; int inv = 0;
    while(i < lenL && j < lenR)
    {
        if(L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
            inv += lenL - i;
        }
        k++;
    }
    while(i < lenL)
    {
        A[k] = L[i];
        i++;
        k++;
    }
    while(j < lenR)
    {
        A[k] = R[j];
        j++;
        k++;
    }
    
    return inv;
}


int MergeSort(int *A, int lenA)
{
    int inv = 0;
    if(lenA < 2)
        return inv;
    
    int mid = lenA/2;
    int left[mid];
    int right[lenA - mid];
    
    for(int i = 0; i < mid; i++)
    {
        int temp = A[i];
        left[i] = temp;
    }
    
    for(int i = 0; i < lenA - mid; i++)
    {
        int temp = A[mid + i];
        right[i] = temp;
    }
    
    inv = MergeSort(left, mid);
    inv += MergeSort(right, lenA - mid);
    inv += Merge(left, right, A, mid, lenA - mid);
    
    return inv;
}

int main()
{
    int t; cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        int aLen; cin >> aLen;
        int array[aLen];
        for(int j = 0; j < aLen; j++)
        {
            int temp; cin >> temp;
            array[j] = temp;
        }
        cout << endl << MergeSort(array, aLen);
    }
    
    return 0;
}

