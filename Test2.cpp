#include "Tester.h"

#include <cstdlib>
#include <stdio.h>

extern int glob;

void func2() {
	glob--;
	printf("%d\n", glob);
}