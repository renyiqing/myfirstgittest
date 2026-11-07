#pragma once

#include <string>
#include <string_view>

namespace demo {

inline std::string make_greeting(std::string_view name) {
    return "Hello, " + std::string(name) + "!";
}

}  // namespace demo
