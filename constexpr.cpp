//*****************************************************************************
//
// Author: Michael Price
// License: Attribution-NonCommercial-NoDerivs 3.0 Unported
//          http://creativecommons.org/licenses/by-nc-nd/3.0/legalcode
//
//*****************************************************************************

constexpr double circle_area (double radius)
{ return 3.14 * radius * radius; }

class CircleArea
{
 public:
    constexpr CircleArea (double radius)
      : m_area(circle_area(radius))
    { }

 private:
    double m_area;
};

void area_computations ()
{
    // Calculated at compile-time!
    constexpr double a1 = circle_area(2.0);
    constexpr CircleArea ca(2.5); // Compile-time ctor!

    // Calculated at run-time
    double r2 = 3.0;
    double a2 = circle_area(r2);
}