#include <iostream>
#include "key.cpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char ** argv)
{
	key tmp;;
	string str,code,final;
	str = "Test!";
	cout << "Message is: " << str << endl;
	code = tmp.encode(str);
	cout << "Encoded message is: " << code << endl;
	final = tmp.decode(str);
	cout << "Decoded message is: " << final << endl;
	return 0;
}
