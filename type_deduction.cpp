#ifndef WIN32
namespace std {
    class string { public: string(const char *) { } string operator+(string other) { return other; } };
}

#endif // WIN32


template <typename T, typename U>
auto some_calculation (T t, U u) -> decltype(t+u)
{
    return t + u;
}

void deduce_types ()
{
    // 'i' is an int
    auto i = 1;

    // 'j' is an int
    decltype(i) j = i + 1;

    // 'x' is whatever 'int+int' is (an int)
    auto x = some_calculation(41, 1);

    // 'y' is whatever 'string+string' is (a string)
    auto y = some_calculation(std::string("Hello"),
                              std::string("World"));
}