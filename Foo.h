#include<iostream>
class Foo
{
    public:
        Foo ( void )
        {
            cout << __PRETTY_FUNCTION__ << endl;
        }
        ~Foo ( void )
        {
            cout << __PRETTY_FUNCTION__ << endl;
        }
        void func( void )
        {
            cout << __PRETTY_FUNCTION__ << endl;
        }
};
