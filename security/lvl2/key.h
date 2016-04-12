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
	unsigned long long publicKey;
	unsigned long long div;
private:
	unsigned long long getPrime();
	unsigned long long privateKey;

};
