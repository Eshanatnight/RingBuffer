#include <iostream>
#include "RingBuffer.hpp"


int main()
{
    ring<std::string> text(2);
    
    text.push_back("One");
    text.push_back("Two");

    std::cout << text[0] << std::endl;
} 