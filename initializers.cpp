//*****************************************************************************
//
// Author: Michael Price
// License: Attribution-NonCommercial-NoDerivs 3.0 Unported
//          http://creativecommons.org/licenses/by-nc-nd/3.0/legalcode
//
//*****************************************************************************

#include <vector>
#include <iostream>
#include <initializer_list>
using namespace std;

void i_wasted_all_the_bits_in_this_name ()
{
    int numArray[] = {3, 1, 4, 1, 5};

    // Good thing I don't have to use
    // push_back()!
    //
    vector<char> vChars = {'A', 'D', 'G',
      'J', 'M', 'Q', 'U', 'Z'};

    for (auto s : {"Hello", "World"})
    {
        cout << s << endl;
    }
}

class RememberTheInitialSize
{
 public:
    RememberTheInitialSize (std::initializer_list<int> il)
      : m_initialSize(il.size())
    { }

 private:
    size_t m_initialSize = 0;
};

void what_was_that_size_again ()
{
    RememberTheInitialSize please = {1, 6, 1, 8, 0, 3};
}
