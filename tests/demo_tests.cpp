#include "demo.hpp"

#include <iostream>
#include <string>
#include <string_view>

namespace {

bool expect_equal(std::string_view test_name, const std::string& actual,
                  const std::string& expected) {
    if (actual == expected) {
        return true;
    }

    std::cerr << test_name << " failed: expected \"" << expected
              << "\", got \"" << actual << "\"\n";
    return false;
}

}  // namespace

int main() {
    const bool named_greeting =
        expect_equal("named greeting", demo::make_greeting("world"),
                     "Hello, world!");
    const bool empty_name =
        expect_equal("empty name", demo::make_greeting(""), "Hello, !");

    if (!named_greeting || !empty_name) {
        return 1;
    }

    std::cout << "All demo tests passed.\n";
    return 0;
}
