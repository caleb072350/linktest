#include "base64.h"
#include <string>
#include <iostream>

int main() {
    std::string str = "Tom";
    std::cout << str << " after encode is: " << base64Encode(str) << std::endl;
}