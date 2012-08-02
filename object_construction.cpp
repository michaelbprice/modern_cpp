#ifndef WIN32
namespace std {
    class string { public: string(const char *) { } string operator+(string other) { return other; } };
}

#endif // WIN32

#define THING_VER 2

class SomeComplicatedThing
{
#if THING_VER == 1 ////////////////////////////////////////////////////////////

 public:

    SomeComplicatedThing ()
      : m_one(1)
      , m_two(2.0)
      , m_three("Three")
    { init(false); }

    SomeComplicatedThing (bool make_square)
      : m_one(1)
      , m_two(2.0)
      , m_three("Three")
    { init(make_square); }

 private:

    int m_one;
    double m_two;
    std::string m_three;

    void init (bool make_square)
    { if (make_square) m_two = m_one * m_one; }

#elif THING_VER == 2 //////////////////////////////////////////////////////////

 public:

    SomeComplicatedThing ()
    { init(false); }

    SomeComplicatedThing (bool make_square)
    { init(make_square); }

 private:

    int m_one = 1;
    double m_two  = 2.0;
    std::string m_three = "Three";

    void init (bool make_square)
    { if (make_square) m_two = m_one * m_one; }

#elif THING_VER == 3 //////////////////////////////////////////////////////////

 public:

    SomeComplicatedThing ()
      : SomeComplicatedThing(false)
    { }

    SomeComplicatedThing (bool make_square)
    { if (make_square) m_two = m_one * m_one; }

 private:

    int m_one = 1;
    double m_two  = 2.0;
    std::string m_three = "Three"; 

#endif // THING_VER == ? //////////////////////////////////////////////////////

};

class SomeDerivedThing : public SomeComplicatedThing
{
 public:
//    using SomeComplicatedThing::SomeComplicatedThing;

    void anotherMethodHere () { }
};

void ctorInheritance ()
{
    SomeDerivedThing sdt;

//    SomeDerivedThing multiplied_sdt(true);
}