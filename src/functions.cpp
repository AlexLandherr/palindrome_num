#include "include/functions.h"
#include <string>
#include <algorithm>
#include <cstdint>
#include <cmath>

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

    int64_t largest_palindrome() {
        //Find the largest palindrome number that is a product of two three-digit numbers.
        int64_t max_palindrome = 0;

        for (int i = 999; i >= 100; i--) {
            for (int j = i; j >= 100; j--) {
                int64_t product = i * j;
                if (is_palindrome(std::to_string(product))) {
                    if (product > max_palindrome) {
                        max_palindrome = product;
                    }
                }
            }
        }

        return max_palindrome;
    }
}