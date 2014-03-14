#include <iostream>
#include <cstdlib>
#include <string>
#include <map>
#include "KeyValue.h"
/*----------------------------------------------------------------------------*/
using namespace std;

/*----------------------------------------------------------------------------*/
void test_map() {
        
    KeyValue * kv = new KeyValue();
    kv->hello();
    kv->addValues();    
    kv->display();
    delete kv;    
    
}
/*----------------------------------------------------------------------------*/
int main(int argc, char**argv) {

    if (argc > 1) {
        std::cout << std::endl << "Arguments:" << std::endl;
        for (int i = 1; i < argc; i++) {
            std::cout << i << ": " << argv[i] << std::endl;
        }
    }
    test_map();
    
    return 0;
}
/*----------------------------------------------------------------------------*/
