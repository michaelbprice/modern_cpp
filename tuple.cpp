//*****************************************************************************
//
// Author: Michael Price
// License: Attribution-NonCommercial-NoDerivs 3.0 Unported
//          http://creativecommons.org/licenses/by-nc-nd/3.0/legalcode
//
//*****************************************************************************

#include <tuple>
#include <string>
#include <iostream>
using namespace std;

tuple<int, double, string> plural ()
{
    auto t = make_tuple(1, 2.0, "Hello");

    cout << get<0>(t) << endl;
    cout << get<1>(t) << endl;
    cout << get<2>(t) << endl;

    // Compilation error!
    //cout << get<3>(t) << endl;

    return t;
}