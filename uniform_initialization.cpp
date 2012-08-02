// #ifndef WIN32

// namespace std {

//     template<class _Ep>
//     class initializer_list
//     {
//         const _Ep* __begin_;
//         long long    __size_;

//         initializer_list(const _Ep* __b, long long __s)
//             : __begin_(__b),
//               __size_(__s)
//             {}
//     public:
//         typedef _Ep        value_type;
//         typedef const _Ep& reference;
//         typedef const _Ep& const_reference;
//         typedef long long    size_type;

//         typedef const _Ep* iterator;
//         typedef const _Ep* const_iterator;

//         initializer_list() : __begin_(nullptr), __size_(0) {}

//         long long    size()  const {return __size_;}
//         const _Ep* begin() const {return __begin_;}
//         const _Ep* end()   const {return __begin_ + __size_;}
//     };

//     template <typename T>
//     class vector
//     {
//      public:
//         vector<std::initializer_list<T>> () { }
//     };
// }
// #endif // WIN32

class Avenger
{
 public:
    Avenger () : Avenger("Newb") { }
    Avenger (const char * name) { }
    ~Avenger () { }
    Avenger (const Avenger&) { }
    Avenger (Avenger &&) { }
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

//    std::vector<Avenger> team = {cap, irony, strongest, cat, newb, "Thor"};
    // instead of vector::push_back!
}