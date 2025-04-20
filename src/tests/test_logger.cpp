#include "catch.hpp"
#include "utils/logger.hpp"
#include <sstream>
#include <iostream>

TEST_CASE("Logger logs to std::cout") {
    std::ostringstream output;
    auto* old_buf = std::cout.rdbuf(output.rdbuf());

    Utils::Logger::log("unit test message");

    std::cout.rdbuf(old_buf); // restore std::cout

    REQUIRE(output.str().find("[LOG]: unit test message") != std::string::npos);
}
