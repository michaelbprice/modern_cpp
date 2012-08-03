#include <array>
#include <thread>
#include <iostream>

void no_io_from_current_thread ()
{
    std::array<int, 3> arr = {1, 2, 3};

    std::thread do_io = std::thread([&arr]()
    {
        for (auto e : arr)
            std::cout << e << std::endl;
    });

    do_io.join();
}