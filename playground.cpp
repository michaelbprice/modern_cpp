
//#include <vector>

// void rval_helper ()
// {
//     Moveable this_can_move;
//     return this_can_move;
// }

// void rval_func ()
// {
//     Moveable some_object = rval_helper();

//     Moveable && rref = rval_helper();

//     Moveable;// m(1);

//     //std::vector v;


    
// }

//#include <iostream>
 
template <typename T, typename ... Params>
auto multiplier (T && t, Params ... params) -> decltype(t * multiplier(params...))
{
    return t * multiplier(params...);
}
 
template <typename T>
auto multiplier (T && t) -> T
{
    return t;
}
 
// int multiplier() { return 1; }
 
int main()
{
  //std::cout << multiplier(2, 3) << std::endl;
  multiplier(2, 3);
  multiplier(6, 7.1, 8);
  return 0;
}

class Distance
{
 public:
    constexpr Distance (long long millimeters)
      : millis(millimeters)
    { }

 private:
    long long millis = 0;
};

constexpr Distance operator"" _m (unsigned long long meters)
{ return Distance(meters*1000); }

constexpr Distance operator"" _km (unsigned long long kilometers)
{ return Distance(kilometers*1000*1000); }

constexpr Distance operator"" _cm (unsigned long long centimeters)
{ return Distance(centimeters*10); }

void literal_distances ()
{
    // Distance a = 10_m;
    // Distance b = 1_km;
    // Distance c = 1_cm;

    Distance z {1};
}

template <typename TyContainer, typename TyPred>
void print_if (const TyContainer & container,
               TyPred && predicate)
{
    for (auto thing : container)
    {
        if (predicate(thing))
        {
            //std::cout << thing << std::endl;
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

void no_exceptions () noexcept(true)
{
	throw 1;
}

class Base
{
 public:
    Base() = default;

    virtual void l33t (double d) { }
};

class DerivedDumb : public Base
{
 public:
    virtual void l33t (double d) { }
};

class DerivedSmart : public Base
{
 public:
    virtual void l33t (double d) override { }
};


bool ambig (int i);
char* ambig (void * v);

#define NULL 0

void nothingness ()
{
//    int * _i = NULL;
//    int * i  = nullptr;

//    int _j = NULL;
    //int j = nullptr; // ERROR!!!

    if (ambig(0)) { }

    if (ambig(NULL)) { }

    if (ambig(nullptr)) { }
    
}

template <typename Ty>
struct is_integral
{
    static const bool value = false;
};

template <>
struct is_integral<int>
{ static const bool value = true; };

template <typename T>
void some_integral_stuff (T && t)
{
    static_assert(is_integral<T>::value, "Template param [T] is not an integral type");
}

void memcpy (void *dst, void* src);

struct StuffThis
{
    char one;
    char two;
    char three;
    char four;
    //char five;
};

void my_stuff ()
{
	some_integral_stuff(1);
	//some_integral_stuff(1.0);

    StuffThis st;
	char buffer[4];
	static_assert(sizeof(StuffThis) <= sizeof(buffer), "Uh oh, our buffer is WEAK!");
	memcpy(buffer, &st);

}

struct IMaiar
{
    virtual bool shallYouPass () = 0;
};

struct GandalfGrey : public IMaiar
{
    virtual bool shallYouPass () { return false; }
};

struct GandalfWhite final : public GandalfGrey
{
    virtual bool shallYouPass () { return true; }
};

// struct GandalfWashedOut : public GandalfWhite
// {
//     virtual bool shallYouPass ()
//     { throw "Why bother"; return false; }
// };

void unicodify ()
{
//    const char * iso88591 = "Hello World!";
//    const wchar_t * platform_encoding = L"hallå världen";

    // Hallo Welt
//    const char * utf8 = u8"\x48\x61\x6C\x6C\x6F"
                        u8"\x20\x57\x65\x6C\x74";

    // Hello World -> Shalom Olam (but in Hebrew script)
//    const char16_t * utf16 = u"\u05E9\u05DC\u05D5\u05DD \u05E2\u05D5\u05DC\u05DD";

    // Hello World + some supplementary plane chars (in Simplified Chinese)
//    const char32_t * utf32 =
//                         U"\u4F60\u597D\u4E16\u754C_\U00020027\U00020929\U00021A3A\U00021F6B";

}

void raw ()
{
/*	const char * xhtml = R"(
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head/> <body/>
</html>
)";


    const char * uh_oh = R"*(
What if there is a )" in my text
)*";
*/
}

class Avenger
{
 public:
    Avenger () : Avenger("Newb") { }
    Avenger (const char * name) { }
    ~Avenger ()  { }
    Avenger (const Avenger&)  { }
    Avenger (Avenger &&)  { }
};

Avenger getCat () { return Avenger("Black Panther"); }

void avengers_assemble ()
{
    Avenger cap("Captain America");
    Avenger irony = "Iron-Man";
    Avenger strongest = Avenger("Hulk");
    Avenger skrull(cap);
    Avenger cat(getCat());

    //Avenger newb(); // function declaration!!!
    Avenger newb{}; // variable declaration!!!

    Avenger team[] = {cap, irony, strongest, cat, newb, "Thor"};
    team[0];
    // instead of vector::push_back!
}

//#include "array"
//#include <tuple>
//#include <type_traits>
//#include <atomic>
//#include <functional>




