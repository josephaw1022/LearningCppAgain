#include "catch.hpp"
#include "math/adder.hpp"

TEST_CASE("Math::Adder::add works correctly") {
    Math::Adder adder;
    REQUIRE(adder.add(2, 3) == 5);
    REQUIRE(adder.add(-10, 5) == -5);
}

TEST_CASE("Math::Adder::heap_add allocates and returns correct value") {
    Math::Adder adder;
    int* result = adder.heap_add(4, 6);

    REQUIRE(result != nullptr);
    REQUIRE(*result == 10);

    delete result;
}

TEST_CASE("Math::Adder::add_into sets the result correctly") {
    Math::Adder adder;
    int result = 0;
    adder.add_into(10, 5, result);
    REQUIRE(result == 15);
}
