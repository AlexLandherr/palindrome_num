#include "include/functions.h"
#include <string>
#include <algorithm>

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
}