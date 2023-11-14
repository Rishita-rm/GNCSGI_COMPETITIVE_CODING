// Code Chef Streak
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int size;
        cin >> size;
        int count = 0;
        int steak_player1 = 0;
        int steak_player2 = 0;
        int a;
        for(int i = 0;i<size;i++)
        {
            cin >> a;
            if(a == 0)
                count = 0;
            else
                count++;
                
            steak_player1 = max(count,steak_player1);
        }
        count = 0;
        for(int i = 0;i<size;i++)
        {
            cin >> a;
            if(a == 0) 
                count = 0;
            else
                count++;
                
             steak_player2 = max(count,steak_player2);
        }
        if(steak_player1 == steak_player2)
            cout << "Draw" << endl;
        else if(steak_player1 < steak_player2)
            cout << "Addy" << endl;
        else
            cout << "Om" << endl;
        // cout << steak_player1 << " " << steak_player2 << endl;
    }
	// your code goes here
	return 0;
}
