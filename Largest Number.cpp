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
    int number;
    cin >> number; cin.ignore();
    int d;
    cin >> d; cin.ignore();

    if(number%d == 0){
        cout<<number<<endl;
        return 0 ;
    }

    string numString = to_string(number);

    for(int i = numString.length()-1 ; i >= 0 ; i--){
        string temp ;
        for(int j = 0 ; j < numString.length();j++){
            if(i==j){
                continue ;
            }
            temp+=numString[j];
        }
        if(temp.size()>0){
            long long num = stoi(temp);
            if(num%d ==0){
                cout<<num<<endl;
                return 0 ;
            }
        }
    }

    for(int i = numString.length()-1 ; i >=0 ; i--){
        for(int j  =numString.length()-1 ; j >= 0 ; j--){
            string temp ;
            for(int w = 0 ; w < numString.length() ; w++ ){
                if(i==j || w==i || w==j){
                    continue ;
                }
                temp+=numString[w];
            }
            if(temp.size() > 0){
                long long num = stoi(temp);
                if(num%d == 0){
                    cout << num << endl ;
                    return 0 ;
                }
            }
        }
    }
    cout << "0" << endl ;

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
}
