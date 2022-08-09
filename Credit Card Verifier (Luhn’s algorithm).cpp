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

int r(char x){
    int y = x - '0' ;
    y *= 2 ;
    if(y > 9)
    {
        y -= 9 ;
    }
    return y ;
}
int c(char x){
    return x - '0' ;
}

int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string card;
        getline(cin, card);
        int num1 = r(card[0])+r(card[2])+r(card[5])+r(card[7])+r(card[10])+r(card[12])+r(card[15])+r(card[17]);
        int num2 = c(card[1])+c(card[3])+c(card[6])+c(card[8])+c(card[11])+c(card[13])+c(card[16])+c(card[18]);
        if((num1+num2)%10 == 0){
            cout << "YES" << endl ;
        }
        else{
            cout << "NO" << endl ;
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
}
