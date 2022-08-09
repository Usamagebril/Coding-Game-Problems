#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
long sumDigits(int num){
    int n = 0 ;
    int sum = 0 ;
    while(num > 0){
        n=num%10;    
        sum=sum+n;    
        num=num/10;    
    }
    return sum ;
}
/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int r_1;
    cin >> r_1; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    
    for(int i = r_1-1 ; i > 0 ; i--){
        long answer = i+sumDigits(i);
        if(answer == r_1){
            cout<<"YES"<<endl ;
            return 0;
        }

    }
    cout << "NO" << endl;
}
