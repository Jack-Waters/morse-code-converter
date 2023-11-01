// create dictionary of morse code options to pick from when sorting through the input text.

// loop through string and convert each character to morse code by checking in the dictionary
// for the corresponding morse code value.
#include <iostream>
#include <string>

#include "../headers/convertToMorseCode.h"

int main() {
    std::string test;
    test = convertToMorseCode("Hello there 8008");

    std::cout << test << std::endl;
    return 0;
}