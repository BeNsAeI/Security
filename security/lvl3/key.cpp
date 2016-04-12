#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "key.h"

void key::init()
{
	srand (time(NULL));
	for(int i = 0; i < 256; i++)
		keyVal[i] = rand() % 5 + 1;
}

