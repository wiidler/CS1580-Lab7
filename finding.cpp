#include "finding.h"
#include <iostream>
using namespace std;

/***********************FUNCTION DEFINITIONS***********************/

int findCriminal(string array[], int SIZE){
    int min = array[0].length();
    int returnValue = 0;
    for (int i=1; i<SIZE; i++){
        int names = array[i].length();
        if(names > min){
            returnValue = i;
        }
    }
    return returnValue;
}