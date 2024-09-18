//Karson Ward
//9/17

//This project is used to convert units, in this case feet, into my 3 conversions
//Those conversions are: Football Field, Furlong, and Horse Length

#include <iostream>
using namespace std;

int main() {
    // These are the variables that are used to store the information of my conversions
    //I use double because it is useful for decimal numbers
    double feet;
    double footballField, furlong, horseLength;

    // These are my conversions that are going to be used to convert the feet into my conversions. 
    double feetToFootballField = 0.003333333333333335;
    double feetToFurlong = 0.0015151515;
    double feetToHorseLength = 0.127;

    // This will ask the user for their input, in this case feet
    cout << "Please enter the number of feet: ";
    cin >> feet;

    // This will perform the conversions for the input. 
    footballField = feet * feetToFootballField;
    furlong = feet * feetToFurlong;
    horseLength = feet * feetToHorseLength;

    // Output the results
    cout << feet << " feet is equal to:" << endl;
    cout << footballField << " Football Fields" << endl;
    cout << furlong << " Furlongs" << endl;
    cout << horseLength << " Horse Lengths" << endl;
    cout << " Awesome stuff! " << endl;
    return 0;
}