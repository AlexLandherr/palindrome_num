#include <string>
#include <cstdint>

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

namespace func {
    bool is_palindrome(std::string str);
    int64_t largest_n_digit_palindrome(int factor_digit_count);
}

#endif
