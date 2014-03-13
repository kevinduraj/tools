#include <iostream>
#include "kevin.h"

int main(int argc, char**argv) {
    

    std::cout << "Welcome to Matrix..." << std::endl;

    //------ display arguments ----//
    if (argc > 1) {
        std::cout << std::endl << "Arguments:" << std::endl;
        for (int i = 1; i < argc; i++) {
            std::cout << i << ": " << argv[i] << std::endl;
        }
    }
    
    kevin * kev = new kevin();
    kev->hello();
    
    
    return 0;
}
