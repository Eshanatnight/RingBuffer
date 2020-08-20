#include <iostream>
#include "RingBuffer.hpp"


int main()
{
    ring<std::string> text({"Quite", "Hello"});  //New Init Lists
    
    text.push_back("One");
    text.push_back("Two");
    //text.push_back("Three");

    // CPP 98 Iterative loop
    for (int i = 0; i < text.size(); ++i) {
        std::cout << text.get(i) << std::endl;
    }

    std::cout << std::endl << "----------------" << std::endl << std::endl;

    // CPP 11 loop
    for (ring<std::string>::iterator it = text.begin(); it != text.end(); it++) {
        std::cout << *it << std::endl;
    }

    std::cout << std::endl << "----------------" << std::endl << std::endl;

    for(std::string value : text) {
        std::cout << value << std::endl;
    }


    // Todo:
    for(auto member : text)
    {
        std::cout << member << std::endl;
    }

    std::cout << std::endl << "----------------" << std::endl << std::endl;
} 