#include <iostream>
#include <cstdio>

using namespace std;
#include "Foo.h"

int main ()
{
    int i;
	printf("Hello world!\n");

	for ( i = 0 ; i < 10 ; ++i )
	{
		printf("%d ", 10 - i );
	}
	printf("\n");

    {
        Foo f;
        f.func();
    }

	return 0;
}
