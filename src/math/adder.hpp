#pragma once

namespace Math {
    class Adder {
    public:
        Adder() = default;
        ~Adder() = default;

        int add(int a, int b) const;

        int* heap_add(int a, int b) const;

        void add_into(int a, int b, int& result) const;
    };
}
