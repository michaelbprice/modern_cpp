//*****************************************************************************
//
// Author: Michael Price
// License: Attribution-NonCommercial-NoDerivs 3.0 Unported
//          http://creativecommons.org/licenses/by-nc-nd/3.0/legalcode
//
//*****************************************************************************

#include <atomic>
#include <thread>
#include <iostream>

void someone_anyone ()
{
    std::atomic<int> more = 0;

    auto one = std::thread([&more]()
    { more++; });

    auto two = std::thread([&more]()
    { more++; });

    one.join();
    two.join();

    std::cout << more << std::endl;
}