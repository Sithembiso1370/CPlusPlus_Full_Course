#include <iostream>
#include <cmath>
// for math operations include the module above


using namespace std;

int datatypez()
{

    // Declaire multiple variable in one line
    int num11,num22;

    cout << "Enter your 11 number : ";
    cin >> num11;
    cout << "Enter your 22 number : "<< endl;
    cin >> num22;
    cout << "The sum of num11 and num22 is "<< num11+num22<< endl;

    // Mad libs game
    //variables for madlibs
    string color, pluralNoun,celebrity;

    //display for madlibs
    cout << "Roses are " << color << endl;
    cout << "Violets and " << pluralNoun << endl;
    cout << "I love " << celebrity << endl;


    return 0;
}

