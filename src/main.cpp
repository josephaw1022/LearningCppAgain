#include <iostream>
#include <memory>
#include <vector>
#include "math/adder.hpp"
#include "utils/logger.hpp"

int main() {
    Utils::Logger::log("Demo: range-based for loop with smart pointers");

    auto adder = std::make_unique<Math::Adder>();

    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Loop using reference (no copy)
    for (const int& num : numbers) {
        auto result = adder->add(num, 10);
        std::cout << "add(" << num << ", 10) = " << result << std::endl;
    }

    auto logMessage = "Done with main script.";
    Utils::Logger::log(logMessage);
    return 0;
}

