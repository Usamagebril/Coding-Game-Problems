#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string b;
    getline(cin, b);
    int maxSeq = 0 ;
    int prev = 0 ;
    int current = 0 ;
    for(int i = 0 ; i < b.length() ; i++){
        if (b[i] == '1') {
            current++;
        } else {
            prev = b[i + 1] != '1' ? 0 : current;
            current = 0;
        }
        maxSeq = max(prev + current, maxSeq);
        }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << maxSeq+1 << endl;
}
