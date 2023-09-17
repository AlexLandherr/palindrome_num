#include "include/functions.h"
#include <string>
#include <algorithm>
#include <cstdint>
#include <vector>

namespace func {
    bool is_palindrome(std::string str) {
        std::string reversed = str;
        std::reverse(reversed.begin(), reversed.end());

        if (reversed == str) {
            return true;
        } else {
            return false;
        }
    }

    int64_t largest_n_digit_palindrome(int factor_digit_count) {
        //factor_digit_count sets how many digits the two respective factors can have.

        return 0;
    }
}