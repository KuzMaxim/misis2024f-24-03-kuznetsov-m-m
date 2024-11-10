#include <complex/complex.hpp>
#include "doctest.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

TEST_CASE("Complex ariphmetic") {
	CHECK((Complex{ 1, -2 } + Complex{ 1, 1 }) == Complex{2, -1});
}
