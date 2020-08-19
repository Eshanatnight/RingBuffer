#include <iostream>
#include "RingBuffer.hpp"


int main()
{
    ring<std::string> text(2);
    text.add("One");
    text.add("Two");
    text.add("Three");

    //* CPP 98 Iterative loop
    for (int i = 0; i < text.size(); ++i) {
        std::cout << text.get(i) << std::endl;
    }

    std::cout << std::endl << "----------------" << std::endl << std::endl;

    //* CPP 11 loop
    for (ring<std::string>::iterator it = text.begin(); it != text.end(); it++) {
        std::cout << *it << std::endl;
    }

    std::cout << std::endl << "----------------" << std::endl << std::endl;

    for(std::string value : text) {
        std::cout << value << std::endl;
    }
} 