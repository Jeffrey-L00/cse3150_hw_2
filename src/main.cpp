#include <iostream>
#include <greeting_utils.h>
#include <string>

using std::cout, std::string, std::getline, std::endl, std::cin;

int main() {
	string fullName;
	std::getline(cin, fullName);
	
	std::string greeting = GreetingUtils::create_message(fullName); //call to GreetingUtils, generates greeting
	char* c_greeting = GreetingUtils::format_as_c_string(greeting); //C-style call to format_as_c_string
	
	cout << c_greeting << endl;
	
	delete[] c_greeting;
	
	return 0;
}
