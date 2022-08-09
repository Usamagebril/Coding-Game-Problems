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
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    int test[n] ;
    bool flag[n];
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        test[i] = abs(t-0);
        if(t < 0){
            flag[i] = true ;
        }
    }
    int min = test[0] ;
    int sign = flag[0] ;
    for(int i = 1 ; i < n ; i++){
        if(test[i] < min){
            min = test[i];
            sign = flag[i] ;
        }
    }
    int count = 0 ;
    int count_sign = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(min == test[i]){
            if(flag[i] == true){
                count_sign++;
            }
            count++;

        }
        if(count > 1 && count_sign != count){
            sign = false ;
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    if(sign == true){
        cout << "-"<<min <<endl ;
    }
    else{
        cout << min << endl;
    }

}
