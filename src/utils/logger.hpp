#pragma once

#include <string>

namespace Utils {

    /**
     * @class Logger
     * @brief Provides logging functionality to standard output.
     */
    class Logger {
    public:
        /**
         * @brief Logs a message to standard output.
         * @param message The message to log.
         */
        static void log(const std::string& message);
    };

}
