#include <iostream>
#include <cstdlib>
#include <string>
#include <map>
#include "KeyValue.h"
/*----------------------------------------------------------------------------*/
using namespace std;

map<string, int> hashtable;


/*----------------------------------------------------------------------------*/
int main(int argc, char**argv) {

    if (argc > 1) {
        std::cout << std::endl << "Arguments:" << std::endl;
        for (int i = 1; i < argc; i++) {
            std::cout << i << ": " << argv[i] << std::endl;
        }
    }

    cout << "----------------------------" << endl;
    
    KeyValue * kev = new KeyValue();
    kev->hello();
    kev->addValues();
    cout << "----------------------------" << endl;
    
    kev->display();
    delete kev;

    return 0;
}
/*----------------------------------------------------------------------------*/
