#include <memory>
#include <vector>

using namespace std;

void pointer_zone ()
{
    auto_ptr<int> ap(new int(5));
    vector<auto_ptr<int>> vap;
    vap.push_back(ap); //NO!

    unique_ptr<int> up(new int(5));
    vector<unique_ptr<int>> uap;
    uap.push_back(up);

    // avoid using delete, use smart
    // pointers instead. raw pointers
    // should indicate 'an optional value
    // that I do not own'
}