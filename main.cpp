#include <iostream>
#include "RingBuffer.hpp"


int main()
{
    std::cout << "Hello World!!" << std::endl;
    ring<std::string> text(2);
    text.add("One");
    text.add("Two");
    text.add("Three");

    //Iterative loop
    for (int i = 0; i < text.size(); ++i)
    {
        std::cout << text.get(i) << std::endl;
    }
}