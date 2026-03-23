#include <iostream>
#include "namespace.hpp"
// using namespace abc;

void printx() {
	std::cout << 5 << std::endl;
}

int main() {
	printx();
	::printx();  
	abc::printx(); 
}
