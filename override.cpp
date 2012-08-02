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