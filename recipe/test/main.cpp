// From: https://github.com/martinmoene/gsl-lite#user-content-example-usage

#include "gsl/gsl-lite.hpp"

using namespace gsl;

int * use( not_null<int *> p )
{
    // use p knowing it's not nullptr, NULL or 0.

    return p;
}

struct Widget
{
    Widget() : owned_ptr( new int(42) ) {}
    ~Widget() { delete owned_ptr; }

    void work() { non_owned_ptr = use( not_null<int *>( owned_ptr ) ); }

    owner<int *> owned_ptr;
    int *        non_owned_ptr;
};

int main()
{
    Widget w;
    w.work();
}
