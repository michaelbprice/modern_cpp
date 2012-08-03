#include <cstddef>
#include <limits>
#include <array>

using namespace std;

void holding_constant ()
{
    constexpr size_t small = numeric_limits<int>::min();
    
    std::array<int, 5> a = {1, 9, 8, 1, 7};
    constexpr size_t asize = a.size();
}