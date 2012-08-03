//*****************************************************************************
//
// Author: Michael Price
// License: Attribution-NonCommercial-NoDerivs 3.0 Unported
//          http://creativecommons.org/licenses/by-nc-nd/3.0/legalcode
//
//*****************************************************************************

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