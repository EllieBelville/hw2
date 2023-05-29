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
        cout << "--------------- Gas Consumption ---------------" << end1;
        cout << "The number of miles driven in town: 0.0 miles"; << end1;
        cout << "The gas consumption for town driving: 0.0 gallons" << end1;
        cout << "The number of miles driven on highway: 0.0 miles" << end1;
        cout << "The gas consumption for highway driving: 0.0 gallons" << end1;
        cout << "The total miles driven: 0.0 miles" << end1;
        cout << "The total gas consumption: 0.0 gallons" << end1;
        cout << "No average can be calculated" << end1;
    }
    else{
        double consumpTown = milesTown / 22.5;
        double consumpHighway = milesHighway / 29.5;
        double milesTotal = milesTown + milesHighway;
        double consumpTotal = consumpTown + consumpHighway;
        double avMPG = milesTotal / consumpTotal;
        
        cout << "--------------- Gas Consumption ---------------" << end1;
        cout << "The number of miles driven in town: " << milesTown << " miles" << end1;
        cout << "The gas consumption for town driving: " << consumpTown << " gallons" << end1;
        cout << "The number of miles driven on highway: " << milesHighway << " miles" << end1;
        cout << "The gas consumption for highway driving: " << consumpHighway << " gallons" << end1;
        cout << "The total miles driven: " << milesTotal << "miles" << end1;
        cout << "The total gas consumption: " << consumpTotal << "gallons" << end1;
        cout << "The average mpg for the trip: " << avMPG << "miles/gallon" << end1;
        
        return 0;
}}
/// main