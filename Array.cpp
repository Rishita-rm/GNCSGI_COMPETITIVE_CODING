#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n,x; // n = number of items
        // minimum freshnessvalue
        cin >> n >> x;
        vector<int>A(n);
        vector<int>B(n);
        for(int i = 0;i<n;i++)
        {
            cin >> A[i];
            // cout << A[i] << " ";
        }
        for(int i = 0;i<n;i++)
        {
            cin >> B[i];
        }
        int cost = 0;
        for(int i = 0;i < n;i++)
        {
            if(A[i] >= x)
            {
                cost += B[i];
            }
        }
        cout << cost << endl;
    }
	// your code goes here
	return 0;
}
