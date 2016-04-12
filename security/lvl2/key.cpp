#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <cstring>
#include <string.h>
#include "key.h"

using std::string;

key::key()
{
	srand (time(NULL));
	publicKey = 3;
	privateKey = 10;
	div = 3;
}
string key::encode(string str)
{
	string code = str;
	return code;
}
string key::decode(string str)
{
	string decoded = str;
	return decoded;
}

unsigned long long getPrime()
{
	return 0;
}
