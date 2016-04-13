#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <cstring>
#include <string.h>
#include <cmath>
#include <math.h>
#include "key.h"

#define DEBUG 0

using std::cin;
using std::cout;
using std::endl;
using std::string;

key::key()
{

	p1 = 5;			//select
	p2 = 7;		//select
	rho = (p1-1)*(p2-1); 	// rho(N)
	mod = p1 * p2;		//mod value or N
	publicKey = 5;		//e value could be random
	privateKey = 5;	//or d value 

	srand (time(NULL));
}

int key::CharToInt(char Char)
{
	if(Char == ' ')
		return 0;
	int out;
	out = (int)Char - 64;
	return out;
}

char key::IntToChar(int Int)
{
	if(Int == 0)
		return ' ';
	char out;
	out = (char)(Int + 64);
	return out;
}

string key::encode(string str)
{
	string code = str;
	for(int i = 0; i < str.size();i++)
	{
		unsigned long long value;
		value = CharToInt(code[i]);
		if(DEBUG)
			cout << "Value for Char: " << code[i] << ": " << value << " => ";
		value = (unsigned long long)pow(value,publicKey);
		value = value % mod;
		if(DEBUG)
			cout << value << endl;
		code[i] = IntToChar(value);
	}
	return code;
}

string key::decode(string str)
{
	string decoded = str;
	for(int i = 0; i < str.size();i++)
	{
		unsigned long long value;
		value = CharToInt(decoded[i]);
		if(DEBUG)
			cout << "Value for Char: " << decoded[i] << ": " << value << " => ";
		value = (unsigned long long)pow(value,privateKey);
		value = value % mod;
		if(DEBUG)
			cout << value << endl;
		decoded[i] = IntToChar(value);
	}
	return decoded;
}

unsigned long long getPrime()
{
	return 0;
}
