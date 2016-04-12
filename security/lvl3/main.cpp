#include <iostream>
#include "key.cpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;

string encode(string str, int * arr)
{
	for(int i = 0; i < str.size(); i++)
	{
		str[i] =(char)((int)str[i] + arr[i]-65);
	}
	return str;
}

string decode(string str, int * arr)
{
	for(int i = 0; i < str.size(); i++)
	{
		str[i] = (char)((int)str[i] - arr[i]+65);
	}
	return str;
}

int main(int argc, char ** argv)
{
	key tmp;
	tmp.init();
	string str,code,final;
	str = "Test!";
	cout << "Message is: " << str << endl;
	code = encode(str,tmp.keyVal);
	cout << "Encoded message is: " << code << endl;
	final = decode(code,tmp.keyVal);
	cout << "Decoded message is: " << final << endl;
	return 0;
}
