#include <string>
#include <map>

#include "../headers/convertToMorseCode.h"

std::string convertToMorseCode(std::string text) {

    // TODO in future create getAlphabetMorseCode() and getNumbersMorseCode() functions
    std::map<char, std::string> alphabetMorseCode = {
        {'A', ".-"},
        {'B', "-..."},
        {'C', "-.-."},
        {'D', "-.."},
        {'E', "."},
        {'F', "..-."},
        {'G', "--."},
        {'H', "...."},
        {'I', ".."},
        {'J', ".---"},
        {'K', "-.-"},
        {'L', ".-.."},
        {'M', "--"},
        {'N', "-."},
        {'O', "---"},
        {'P', ".--."},
        {'Q', "--.-"},
        {'R', ".-."},
        {'S', "..."},
        {'T', "-"},
        {'U', "..-"},
        {'V', "...-"},
        {'W', ".--"},
        {'X', "-..-"},
        {'Y', "-.--"},
        {'Z', "--.."}
    };

    std::map<int, std::string> numbersMorseCode = {
        {1, ".----"},
        {2, "..---"},
        {3, "...--"},
        {4, "....-"},
        {5, "....."},
        {6, "-...."},
        {7, "--..."},
        {8, "---.."},
        {9, "----."},
        {0, "-----"},
    };

    std::string conversion = "";

    for (int i = 0; i < text.length(); i++) {
        char character = text[i];
        if (character == ' ') {
            conversion += "_";
        }
        else if (isdigit(character)) {
            //conversion += numbersMorseCode.at(character);
            conversion += numbersMorseCode[character];
        }
        else {
            //conversion += alphabetMorseCode.at(toupper(character));
            conversion += alphabetMorseCode[toupper(character)];
        }
        conversion += " ";
    }
    return conversion;
}