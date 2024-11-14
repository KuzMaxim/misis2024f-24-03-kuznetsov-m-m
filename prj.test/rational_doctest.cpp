#include <rational/rational.hpp>
#include "doctest.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

TEST_CASE("Rational ariphmetic") {
	CHECK((Real{ 1, -2 } + Real{ 1, 1 }) == Real{2, -1});
}
