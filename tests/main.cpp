#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../tests/doctest/doctest.h"
#include "../include/vector.hh"
#include "../include/matrix.hh"
#include "../include/rectangle.hh"
#include <gtest/gtest.h>



// This is all that is needed to compile a test-runner executable.
// More tests can be added here, or in a new tests/*.cpp file.
TEST_CASE("construction of vector without parameters")
{   
    Vector v;
}