#define BOOST_TEST_MODULE MyModuleName
#include <boost/test/included/unit_test.hpp>
#include "rational.h"
using namespace ExactArithmetic;

BOOST_AUTO_TEST_CASE(test_case_operator)
{
	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL(Rational(1,3) * Rational(4,9), Rational(4,27));
	system("pause");

}