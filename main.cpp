#include <iostream>
#include "RingBuffer.hpp"

int main()
{
	ring<std::string> text(2);
	ring<std::string> textw(2);
	text.push_back("One");
	text.push_back("three");

	textw.push_back("One");
	textw.push_back("Two");

	if (text != textw)
		std::cout << "Equal";
	else
		std::cout << "Not Equal";
}