// #define FMT_HEADER_ONLY // may need this line

#include <filesystem>
#include <fstream>
#include <iostream>

#include "config.hpp"
#include "my_lib.h"

int main() {
    std::cout << "Running\n";

    int i {};
    if (i == 22) {
        std::cout << "That's odd\n";
    }
}
