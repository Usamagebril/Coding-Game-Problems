#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string x;
        getline(cin, x);
        string temp = x ;
        string finalResult = x ;
        for(int i = 0 ; i < 1e5 ; i++){
            long long answer = 0 ;
            for(int j = 0; j < x.length() ; j++){
                int y = x[j]-'0';
                answer += pow(y , 2);
            }
            x.clear() ;
            while(answer != 0 ){
                x += (answer%10)+'0';
                answer/=10;
            }

        }

        if(x=="1"){
            cout<<temp<<" :)";
        }else{
            cout<<temp<<" :(";
        }
        cout<<endl;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
}
