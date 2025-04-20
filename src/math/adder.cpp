#include "math/adder.hpp"

namespace Math {

    int Adder::add(int a, int b) const {
        return a + b;
    }

    int* Adder::heap_add(int a, int b) const {
        int* result = new int(a + b);  // allocated on heap
        return result;
    }

    void Adder::add_into(int a, int b, int& result) const {
        result = a + b;
    }

}
