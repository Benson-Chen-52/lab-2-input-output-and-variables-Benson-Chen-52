// Benson Chen
// Lab 2
// 09/17/24

#include <iostream>
#include <string>
using namespace std;

int main()
{   
    //Stating Variables
    string Cerealname;
    double calories;
    double ounces;
    double calories_limit;
    double ounces_within_limit;
    double calories_per_ounce;

    //User Prompt
    cout << "Enter the cereal name, number of calories per serving, " 
    <<"and the number of ounces per serving, seperated by spaces." << "\n" << endl;

    //Inputs
    cin >> Cerealname;
    cin >> calories >> ounces;

    //Outputs
    calories_per_ounce = calories/ounces;
    cout << "\nOne serving of " << Cerealname << " is " << ounces << " ounces and has "
    << calories_per_ounce << " calories per ounce." << endl;

    //Additional Question
    cout << "\nHow many calories of cereal is the user willing to eat today?\n" << endl;
    cin >> calories_limit;
    ounces_within_limit = calories_limit/calories_per_ounce;
    cout << "\nYou can eat " << ounces_within_limit << " ounces of cereal and still stay within your limit of calories." << endl;

    return 0;

}

/*Enter the cereal name, number of calories per serving, and the number of ounces per serving, seperated by spaces.

Cornflakes 120 8

One serving of Cornflakes is 8 ounces and has 15 calories per ounce.

How many calories of cereal is the user willing to eat today?

1000

You can eat 66.6667 ounces of cereal and still stay within your limit of calories.*/