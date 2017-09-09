#include <iostream>
#include "greeter.h"
#include "fmt/format.h"

using namespace std;
using namespace fmt;

int main() {
	string name = format("{}", "World");

	greeter g;
	g.sayHello(name);
	return 0;
}
