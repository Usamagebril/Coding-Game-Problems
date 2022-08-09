#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int width;
    int height;
    cin >> width >> height; cin.ignore();
    char line[101][101];
    for (int i = 0; i < height; i++) {
        cin >> line[i] ;
    }
    for (int i = 0; i < height; i++) {

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        for(int j=0; j < width ; j++){
            if(line[i][j] != '#'){
                if( i > 0   && line[i-1][j  ] != '#' ) { line[i][j]++; }
                if( i < height-1 && line[i+1][j  ] != '#' ) { line[i][j]++; }
                if( j > 0   && line[i][j-1] != '#' ) { line[i][j]++; }
                if( j < width-1 && line[i][j+1] != '#' ) { line[i][j]++; }
            }
        }
        cout<<line[i]<<endl;
    }
}
