#include <iostream>
#include "greeter.h"
#include "fmt/format.h"

using namespace std;
using namespace fmt;

void greeter::sayHello(std::string name) {
	string message = format("Hello {}", name);
	cout << message << endl;
}
