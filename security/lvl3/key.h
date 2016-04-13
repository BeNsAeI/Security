#include <iostream>
#include <cstring>
#include <string.h>

using std::string;

class key
{
public:
	key();
	string encode(string str);
	string decode(string str);
	int CharToInt(char Char);
	char IntToChar(int Int);
	int rho;
	unsigned long long publicKey;
	unsigned long long mod;
private:
	int p1;
	int p2;
	unsigned long long getPrime();
	unsigned long long privateKey;

};
