/* passgen.cpp */
#include <iostream>
#include "pwgen_fn.h"
int main(void) {
    int passLen;
    std::cout << "Define Password Length : ";
    std::cin >> passLen;
    PasswordGenerator pg;
    std::string password = pg.Generate(passLen);
    std::cout << "Your password : " << password << "\n";
    return 0;
}
