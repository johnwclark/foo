#include <iostream>
#include <cstdio>

using namespace std;
#include "Foo.h"

int main ()
{
    int i;
    cout <<  "Howdy world!" << endl;

	for ( i = 0 ; i < 10 ; ++i )
	{
	    cout << ( 10 - i ) << ' ';
	}
    cout << endl;

    {
        Foo f;
        f.func();
    }

	return 0;
}
