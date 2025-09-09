#include "greeting_utils.h"
#include <string>






std::string GreetingUtils::create_message(const std::string& name) {
	return "Hello, " + name + "!";

}
char* GreetingUtils::format_as_c_string(const std::string& msg) {
	char* c_str_p = new char[msg.length() + 1];
	std::strcpy(c_str_p, msg.c_str());
	
	return c_str_p;
}


