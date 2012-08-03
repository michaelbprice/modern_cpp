//*****************************************************************************
//
// Author: Michael Price
// License: Attribution-NonCommercial-NoDerivs 3.0 Unported
//          http://creativecommons.org/licenses/by-nc-nd/3.0/legalcode
//
//*****************************************************************************

#include <iterator>
using namespace std;

template <typename TyContainer>
void alphaAndOmega (TyContainer && c)
{
    // begin and end work with builtin arrays as well
    // as standard containers
    //
    for (auto e = begin(c); e != end(c), ++e)
    {
        cout << e << endl;
    }

    // begin and end are also the basis for range-for    
}
