#ifndef WIN32
namespace std {
    class out {}; out cout; int endl;
    out& operator<<(out & o, int t) { return o; }
}
#endif // WIN32

template <typename TyContainer, typename TyPred>
void print_if (const TyContainer & container,
               TyPred && predicate)
{
    for (auto thing : container)
    {
        if (predicate(thing))
        {
            std::cout << thing << std::endl;
        }
    }
}

void printapalooza ()
{
    int some_ints[5] = {0, 1, 2, 3, 4};
    print_if(some_ints, [] (int i)
    {
        return i%2;
    });
}