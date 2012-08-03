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