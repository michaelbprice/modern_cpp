//*****************************************************************************
//
// Author: Michael Price
// License: Attribution-NonCommercial-NoDerivs 3.0 Unported
//          http://creativecommons.org/licenses/by-nc-nd/3.0/legalcode
//
//*****************************************************************************

class Base
{
 public:
    virtual void l33t (double d) { }
    //virtual void l33tR (double d) { }
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