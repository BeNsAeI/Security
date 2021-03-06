#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <cstring>
#include <string.h>
#include <cmath>
#include <math.h>
#include "key.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

key::key()
{

	p1 = 2;			//select
	p2 = 5;		//select
	rho = (p1-1)*(p2-1); 	// rho(N)
	mod = p1 * p2;		//mod value or N
	publicKey = 3;		//e value could be random
	privateKey = 3;	//or d value 

	srand (time(NULL));
}

int key::CharToInt(char Char)
{
	int out;
	out = (int)Char - 64;
	return out;
}

char key::IntToChar(int Int)
{
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
		cout << "Value for Char: " << code[i] << ": " << value << " => ";
		value = (unsigned long long)pow(value,publicKey);
		value = value % mod;
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
		cout << "Value for Char: " << decoded[i] << ": " << value << " => ";
		value = (unsigned long long)pow(value,privateKey);
		value = value % mod;
		cout << value << endl;
		decoded[i] = IntToChar(value);
	}
	return decoded;
}

unsigned long long getPrime()
{
	return 0;
}
