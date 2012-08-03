//*****************************************************************************
//
// Author: Michael Price
// License: Attribution-NonCommercial-NoDerivs 3.0 Unported
//          http://creativecommons.org/licenses/by-nc-nd/3.0/legalcode
//
//*****************************************************************************

#ifndef WIN32
namespace std {
    class out {}; out cout; int endl;
    out& operator<<(out & o, int t) { return o; }
}
#endif // WIN32

template <typename T, typename ... Params>
auto multiplier (T && t, Params ... params) ->
  decltype(t * multiplier(params...))
{
    return t * multiplier(params...);
}
 
template <typename T>
auto multiplier (T && t) -> T
{
    return t;
}

void varying ()
{
    std::cout << multiplier(10) << std::endl;
    std::cout << multiplier(1, 2, 3) << std::endl;
    std::cout << multiplier(6, 7.1, 8) << std::endl;
}