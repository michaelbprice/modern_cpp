//*****************************************************************************
//
// Author: Michael Price
// License: Attribution-NonCommercial-NoDerivs 3.0 Unported
//          http://creativecommons.org/licenses/by-nc-nd/3.0/legalcode
//
//*****************************************************************************

class Distance
{
 public:
    constexpr Distance (long long millimeters)
      : millis(millimeters)
    { }

 private:
    long long millis = 0;
};

// ignoring overflow issues...

constexpr Distance operator"" _m (unsigned long long meters)
{ return Distance(meters*1000); }

constexpr Distance operator"" _km (unsigned long long kilometers)
{ return Distance(kilometers*1000*1000); }

constexpr Distance operator"" _cm (unsigned long long centimeters)
{ return Distance(centimeters*10); }

void literal_distances ()
{
    Distance a = 10_m;
    Distance b = 1_km;
    Distance c = 1_cm;

    Distance z {1};
}