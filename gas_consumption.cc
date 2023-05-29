/**
 *   @file: gas_consumption.cc
 * @author: Ellie Belville
 *   @date: 5/25/23
 *  @brief: A program that calculates gas consumption given miles driven.
 */


#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;


int main(int argc, char const *argv[]) {
    
    double milesTown, milesHighway;
    
    cout << "Enter the number of miles driven in town: ";
    cin >> milesTown;
    if (milesTown < 0){
        cout << "Error: number of miles driven in town cannot be negative";
        exit(0);
    }

    cout << "Enter the number of miles driven on highway: ";
    cin >> milesHighway;
    if (milesHighway < 0){
        cout << "Error: number of miles driven on highway cannot be negative";
        exit(0);
    }
    
    cout << " ";
    if (milesHighway == 0 && milesTown == 0){
        cout << "--------------- Gas Consumption ---------------" << endl;
        cout << "The number of miles driven in town: 0.0 miles"; << endl;
        cout << "The gas consumption for town driving: 0.0 gallons" << endl;
        cout << "The number of miles driven on highway: 0.0 miles" << endl;
        cout << "The gas consumption for highway driving: 0.0 gallons" << endl;
        cout << "The total miles driven: 0.0 miles" << endl;
        cout << "The total gas consumption: 0.0 gallons" << endl;
        cout << "No average can be calculated" << endl;
    }
    else{
        double consumpTown = milesTown / 22.5;
        double consumpHighway = milesHighway / 29.5;
        double milesTotal = milesTown + milesHighway;
        double consumpTotal = consumpTown + consumpHighway;
        double avMPG = milesTotal / consumpTotal;
        
        cout << "--------------- Gas Consumption ---------------" << endl; 
        cout << "The number of miles driven in town: " << milesTown << " miles" << endl;
        cout << "The gas consumption for town driving: " << consumpTown << " gallons" << endl;
        cout << "The number of miles driven on highway: " << milesHighway << " miles" << endl;
        cout << "The gas consumption for highway driving: " << consumpHighway << " gallons" << endl;
        cout << "The total miles driven: " << milesTotal << "miles" << endl;
        cout << "The total gas consumption: " << consumpTotal << "gallons" << endl;
        cout << "The average mpg for the trip: " << avMPG << "miles/gallon" << endl;
    }
        return 0;
}
/// main