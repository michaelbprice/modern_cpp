#ifndef WIN32
namespace std {
    template <typename T>
    struct is_integral { static const bool value; };

    template <>
    struct is_integral<int> { static const bool value; };


    template <typename T>
    const bool is_integral<T>::value = false;

    const bool is_integral<int>::value = true;

    void memcpy(void*, void*, long long);
}
#endif // WIN32

template <typename T>
void some_integral_stuff (T && t)
{
    static_assert(std::is_integral<T>::value,
                  "Template param is not an integral type");
}

struct StuffThis
{
    char one;
    char two;
    char three;
    char four;
    //char five; // Added in most recent build!
};

void my_stuff ()
{
    some_integral_stuff(1);
    //some_integral_stuff(1.0); // ERROR!!!

    StuffThis st;
    char buffer[4];

    static_assert(sizeof(StuffThis) <= sizeof(buffer),
                  "Uh oh, our buffer is not big enough... what changed!");

    std::memcpy(buffer, &st, sizeof(st)); // Would overflow buffer!
}