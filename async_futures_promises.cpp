//*****************************************************************************
//
// Author: Michael Price
// License: Attribution-NonCommercial-NoDerivs 3.0 Unported
//          http://creativecommons.org/licenses/by-nc-nd/3.0/legalcode
//
//*****************************************************************************

#include <array>
#include <future>
#include <iterator>
#include <iostream>

void even_or_odd ()
{
    std::array<int, 10> jumble = {9,6,3,1,7,3,8,0,4,2};

    auto is_even = [](int e) { return e%2 == 0; };
    auto is_odd = [](int e) { return e%2 != 0; };

    auto count_of_evens = std::async([=]()
    {
        return std::count_if(std::begin(jumble),
                             std::end(jumble), is_even);
    });

    auto count_of_odds = std::async([=]()
    {
        return std::count_if(std::begin(jumble),
                             std::end(jumble), is_odd);
    });

    std::cout << "Evens: " << count_of_evens.get()
              << " Odds: " << count_of_odds.get()
              << std::endl;
}