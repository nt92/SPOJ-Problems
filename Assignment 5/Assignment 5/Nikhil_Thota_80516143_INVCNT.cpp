//
//  Nikhil_Thota_80516143_INVCNT.cpp
//  Assignment 5
//
//  Created by Nikhil Thota on 4/16/16.
//  Copyright © 2016 Nikhil Thota. All rights reserved.
//

#include <iostream>
using namespace std;

void Merge(int *L, int *R, int *A, int lenL, int lenR)
{
    int i = 0; int j = 0; int k = 0;
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
    
    MergeSort(left, mid);
    MergeSort(right, lenA - mid);
    Merge(left, right, A, mid, lenA - mid);
}

int main()
{
    int array[4];
    array[0] = 5; array[1] = 4; array[2] = 3; array[3] = 2;
    
    MergeSort(array, 4);
    
    for(int i = 0; i < 4; i++)
        cout << array[i] << " ";
    
    return 0;
}

