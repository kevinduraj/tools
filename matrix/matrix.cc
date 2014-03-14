#include <iostream>
#include <cstdlib>
#include <string>
#include <map>
#include "kevin.h"
/*----------------------------------------------------------------------------*/
using namespace std;

map<string, int> hashtable;

/*----------------------------------------------------------------------------*/
void add2hash(string str, int i) {
    if (hashtable[str]) hashtable[str] += i;
    else hashtable[str] = i;
}

/*----------------------------------------------------------------------------*/
int main(int argc, char**argv) {


    std::cout << "Welcome to Matrix..." << std::endl;

    //------ Display Arguments ----//
    if (argc > 1) {
        std::cout << std::endl << "Arguments:" << std::endl;
        for (int i = 1; i < argc; i++) {
            std::cout << i << ": " << argv[i] << std::endl;
        }
    }

    kevin * kev = new kevin();
    kev->hello();
    kev->addValues();

    return 0;
}
/*----------------------------------------------------------------------------*/
