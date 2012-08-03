//*****************************************************************************
//
// Author: Michael Price
// License: Attribution-NonCommercial-NoDerivs 3.0 Unported
//          http://creativecommons.org/licenses/by-nc-nd/3.0/legalcode
//
//*****************************************************************************

#include <array>
#include <iostream>
using namespace std;

void safety_arrays ()
{
    char builtin[] = {'H','e','y'};
    array<char,3> arr = {'Y','o','u'};

    // Ooops! out-of-bounds
    cout << builtin[3] << endl;

    // Throws out_of_range exception
    cout << arr.at(3) << endl;

    // Or you can opt to shoot at your foot
    cout << arr[3] << endl;
    
}