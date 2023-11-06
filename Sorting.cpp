#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    Problem Statement: Passing Marks
    T.C = O(n) * (O(n) + O(nlogn) + O(n))
    S.C = O(n)
*/

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int size;
        int passingStudents;
        cin >> size >> passingStudents;
        vector<int>v(size);
        for(int i = 0;i<size;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        // sorting in decreasing order
        int marks = 0;
        for(int i = 0;i<size;i++)
        {
            if(i < passingStudents)
            {
                marks = v[i]-1;
            }
        }
        cout << (marks) << endl;
    }
	// your code goes here
	return 0;
}
