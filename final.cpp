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