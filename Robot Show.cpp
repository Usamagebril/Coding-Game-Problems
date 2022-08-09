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
    int l;
    cin >> l; cin.ignore();
    int n;
    cin >> n; cin.ignore();
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin>> v[i];
    }

    const auto [ l_min, l_max ] = minmax_element( v.begin(), v.end() );
    cout << max(l - *l_min, *l_max) << endl;


    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
}
