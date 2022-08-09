#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int sumDigits(int num){
    int n = 0 ;
    int sum = 0 ;
    while(num > 0){
        n=num%10;    
        sum=sum+n;    
        num=num/10;    
    }
    return sum ;
}
int main()
{
    long long r_1;
    cin >> r_1; cin.ignore();
    long long r_2;
    cin >> r_2; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    while(r_1 != r_2){
        if( r_1 < r_2){
            r_1 += sumDigits(r_1);
        }
        else{
            r_2 += sumDigits(r_2);
        }
    }

    cout << r_1 << endl;
}
