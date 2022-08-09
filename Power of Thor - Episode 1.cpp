#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

int main()
{
    int light_x; // the X position of the light of power
    int light_y; // the Y position of the light of power
    int initial_tx; // Thor's starting X position
    int initial_ty; // Thor's starting Y position
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();
    int distance_x = initial_tx ;
    int distance_y = initial_ty ;
    string direction ;

    // game loop
    while (1) {
        int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remaining_turns; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        if((distance_x > light_x) && (distance_y > light_y)){
            distance_x -=1 ;
            distance_y -=1 ;
            direction = "NW";
        }
        else if((distance_x < light_x) && (distance_y < light_y)){
            distance_x +=1 ;
            distance_y +=1 ;
            direction = "SE";
        }

        else if((distance_x > light_x) && (distance_y < light_y)){
            distance_x -=1 ;
            distance_y +=1 ;
            direction = "SW";
        }
        else if((distance_x < light_x) && (distance_y > light_y)){
            distance_x +=1 ;
            distance_y -=1 ;
            direction = "NE";
        }
        else if(distance_y > light_y){
            distance_y -=1 ;
            direction = "N" ;
        }
        
        else if(distance_y < light_y){
            distance_y +=1 ;
            direction = "S" ;
        }
        
        else if(distance_x > light_x ){
            distance_x -=1 ;
            direction = "W" ;
        }
        else{
            distance_x +=1 ;
            direction = "E" ;
        }

        // A single line providing the move to be made: N NE E SE S SW W or NW
        cout << direction << endl;
    }
}
