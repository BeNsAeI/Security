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

	str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "Message is: " << str << endl;
	cout << "---------------------------------" << endl;

	code = tmp.encode(str);
	cout << "Encoded message is: " << code << endl;
	cout << "---------------------------------" << endl;

	final = tmp.decode(code);
	cout << "Decoded message is: " << final << endl;
	cout << "---------------------------------" << endl;

	return 0;
}
