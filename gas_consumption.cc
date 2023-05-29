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
    
    double milesTown, milesHighway
    
    cout << "Enter the number of miles driven in town: ";
    cin >> milesTown;
    if (milesTown < 0){
        cout << "Error: number of miles driven in town cannot be negative";
        exit(0);
        
    else{   cout << "Enter the number of miles driven on highway: ";
            cin >> milesHighway;
            if (milesHighway < 0){
                cout << "Error: number of miles driven on highway cannot be negative";
                exit(0);
            }

    return 0;
}/// main