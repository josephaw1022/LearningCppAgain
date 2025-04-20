#include <iostream>
#include "utils/logger.hpp"

namespace Utils {
    void Logger::log(const std::string& message) {
        std::cout << "[LOG]: " << message << std::endl;
    }
}
