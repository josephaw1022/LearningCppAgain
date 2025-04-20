#pragma once

namespace Math {

    /**
     * @class Adder
     * @brief Provides basic integer addition functionality.
     */
    class Adder {
    public:
        Adder() = default;
        ~Adder() = default;

        /**
         * @brief Returns the sum of two integers.
         * @param a First integer.
         * @param b Second integer.
         * @return The sum of a and b.
         */
        int add(int a, int b) const;

        /**
         * @brief Adds two integers and returns a pointer to the result allocated on the heap.
         * @param a First integer.
         * @param b Second integer.
         * @return Pointer to the sum of a and b.
         */
        int* heap_add(int a, int b) const;

        /**
         * @brief Adds two integers and stores the result in the provided reference.
         * @param a First integer.
         * @param b Second integer.
         * @param result Reference to store the sum.
         */
        void add_into(int a, int b, int& result) const;
    };
}
