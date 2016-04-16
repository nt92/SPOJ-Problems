//
//  Nikhil_Thota_80516143_BUSYMAN.cpp
//  Assignment 5
//
//  Created by Nikhil Thota on 4/16/16.
//  Copyright © 2016 Nikhil Thota. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Activity class with the start and end times for the activity
class Activity
{
public:
    int start;
    int end;
    
    Activity(int s, int e)
    {
        start = s;
        end = e;
    }
};

//Overloading the < operator to compare two activities. In order to sort them by ascending end times
bool operator<(const Activity &a1, const Activity &a2)
{
    return a1.end < a2.end;
}

//Overloading the <= constructor to check whether a certain activity has a start time <= than the previous one's end time
bool operator<=(const Activity &a1, const Activity &a2)
{
    return a1.end <= a2.start;
}

//Iterates through array sorted by end time of activities and increments count if there is an activity with a start time
//greater than the current end time
int numActivities(vector<Activity> a)
{
    int count = 0;
    Activity temp = a.at(0); count++;
    
    for(int i = 1; i < a.size(); i++)
    {
        if(temp <= a.at(i))
        {
            temp = a.at(i);
            count++;
        }
    }
    
    return count;
}

int main()
{
    int t; cin >> t;
    for(int i = 0; i < t; i++)
    {
        vector<Activity> activities;
        int l; cin >> l;
        
        for(int j = 0; j < l; j++)
        {
            int s; int e; cin >> s >> e;
            activities.push_back(*new Activity(s, e));
        }
    
        //Sort the activities vector based on the activity end time
        //Uses standard vector sort with iterators and overloaded operators
        sort(activities.begin(), activities.end());
        
        cout << numActivities(activities) << endl;
    }
}