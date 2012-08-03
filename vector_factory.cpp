//*****************************************************************************
//
// Author: Michael Price
// License: Attribution-NonCommercial-NoDerivs 3.0 Unported
//          http://creativecommons.org/licenses/by-nc-nd/3.0/legalcode
//
//*****************************************************************************

#include <vector>
#include <map>
#include <string>

using namespace std;

typedef vector<map<string, string>> Dictionaries;

// Before move construction...
// returning vectors was EXPENSIVE!!!
//
void getDictionaries (Dictionaries & d)
{
    /* populate d */
    return;
}

// But now, we can use the natural
// syntax with minimal performance impact
//
Dictionaries getDictionaries ()
{
    vector<map<string, string>> dictionaries;
    /* populate dictionaries */
    return dictionaries;
}