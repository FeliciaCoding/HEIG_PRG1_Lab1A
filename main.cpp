/* ---------------------------
Laboratory:         Labo 01A – Calcul du temps de trajet
Author(s):          Richard SIERRA, Dominik SAUL, Pei-Wen LIAO
Version:            1.0
Date:               27.09.2022
Description:        Program to calculate the time a robot needs to reach an object with different
                    speeds on different paths.
Modification(s):    Adding user input to ask the value of the variable distance_road.
--------------------------- */
#include <iostream>
#include <cmath> // use for sqrt and pow

using namespace std;

int main() {
    // constants
    const int DELTA_X       = 3;
    const int DELTA_Y       = 10;
    const int SPEED_ROAD    = 5;
    const int SPEED_TERRAIN = 2;

    // user input: road distance
    double distance_road = 6;

    // BONUS :
    // cout << "Enter the distance the robot makes on the road (0km - 9km):" << endl;
    // cin >> distance_road;

    // calculate the distance the robot makes on the terrain
    double distance_terrain = 0;
    distance_terrain = sqrt(pow((DELTA_Y - distance_road), 2) + pow(DELTA_X, 2));

    // calculate the total time
    double time_total = 0;
    time_total = distance_road / SPEED_ROAD + distance_terrain / SPEED_TERRAIN;

    // output
    cout << time_total << endl;

    // BONUS :
    // cout << "The robot needs " << round(time_total) << "h until he arrives at the object." << endl;

    return 0;
}
