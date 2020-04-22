#include "Tester.h"

#include <cstdlib>
#include <stdio.h>

int glob = 0;

void func()
{
	glob++;
	printf("%d\n", glob);
}
