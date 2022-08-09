#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
map<string , int> mp ;
string all[500];

int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word; cin.ignore();
        string answer = "" ;
        for(int j = 0 ; j < word.size() ; j++){
            answer += word[j];
            mp[answer]++;
        } 
        all[i] = word ;
    }
    for (int i = 0; i < n; i++) {
        string answer = "";
        bool flag = 0 ; 
        for(int j = 0 ; j < all[i].size();j++){
            answer += all[i][j];
            if(mp[answer] == 1){
                cout << answer << endl ;
                flag = 1 ; 
                break ;
            }
        }
        // Write an answer using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        if(!flag){
            cout << answer <<endl ;
        }
    }
}
