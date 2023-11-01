#define BOOST_TEST_MODULE MorseCodeTests
#include <boost/test/included/unit_test.hpp>

#include <stdexcept>

#include "morsecode.h"

BOOST_AUTO_TEST_CASE(singleLetterDot)
{
	BOOST_CHECK_EQUAL(convertToMorseCode("E"), ".");
}

BOOST_AUTO_TEST_CASE(singleLetterDash)
{
	BOOST_CHECK_EQUAL(convertToMorseCode("T"), "-");
}

BOOST_AUTO_TEST_CASE(singleWord)
{
	BOOST_CHECK_EQUAL(convertToMorseCode("CAT"), "-.-. .- -");
}

BOOST_AUTO_TEST_CASE(sentence)
{
	BOOST_CHECK_EQUAL(convertToMorseCode("CAT EATS DOG"), "-.-. .- - _ . .- - ... _ -.. --- --.");
}

BOOST_AUTO_TEST_CASE(lowerCaseLetter)
{
	BOOST_CHECK_EQUAL(convertToMorseCode("e"), ".");
}

BOOST_AUTO_TEST_CASE(invalidCharacter)
{
	BOOST_CHECK_THROW(convertToMorseCode("@"), std::invalid_argument);
}