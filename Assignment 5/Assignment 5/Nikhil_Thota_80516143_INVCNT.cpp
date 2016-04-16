////
////  Nikhil_Thota_80516143_INVCNT.cpp
////  Assignment 5
////
////  Created by Nikhil Thota on 4/16/16.
////  Copyright © 2016 Nikhil Thota. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//long long Merge(long long *L, long long *R, long long *A, long long lenL, long long lenR)
//{
//    long long i = 0; long long j = 0; long long k = 0; long long inv = 0;
//    while(i < lenL && j < lenR)
//    {
//        if(L[i] <= R[j])
//        {
//            A[k] = L[i];
//            i++;
//        }
//        else
//        {
//            A[k] = R[j];
//            j++;
//            inv += lenL - i;
//        }
//        k++;
//    }
//    while(i < lenL)
//    {
//        A[k] = L[i];
//        i++;
//        k++;
//    }
//    while(j < lenR)
//    {
//        A[k] = R[j];
//        j++;
//        k++;
//    }
//    
//    return inv;
//}
//
//
//long long MergeSort(long long *A, long long lenA)
//{
//    long long inv = 0;
//    if(lenA < 2)
//        return inv;
//    
//    long long mid = lenA/2;
//    long long left[mid];
//    long long right[lenA - mid];
//    
//    for(long long i = 0; i < mid; i++)
//    {
//        long long temp = A[i];
//        left[i] = temp;
//    }
//    
//    for(long long i = 0; i < lenA - mid; i++)
//    {
//        long long temp = A[mid + i];
//        right[i] = temp;
//    }
//    
//    inv = MergeSort(left, mid);
//    inv += MergeSort(right, lenA - mid);
//    inv += Merge(left, right, A, mid, lenA - mid);
//    
//    return inv;
//}
//
//int main()
//{
//    long long t; cin >> t;
//    
//    for(long long i = 0; i < t; i++)
//    {
//        long long aLen; cin >> aLen;
//        long long array[aLen];
//        for(long long j = 0; j < aLen; j++)
//        {
//            long long temp; cin >> temp;
//            array[j] = temp;
//        }
//        cout << endl << MergeSort(array, aLen);
//    }
//    
//    return 0;
//}
//
