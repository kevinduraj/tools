#include <iostream>
#include <cstdlib>
#include <iostream>
#include <string>
#include <map>
#include "kevin.h"

using namespace std;

map<string, int> hashtable;

void add2hash(string str, int i) {
    if (hashtable[str]) hashtable[str] += i;
    else hashtable[str] = i;
}

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

    //-----------
    add2hash("kevin", 1);
    add2hash("thomas", 1);
    add2hash("duraj", 1);
    add2hash("kevin", 100);

    cout << "Map size: " << hashtable.size() << endl;

    for (map<string, int>::iterator ii = hashtable.begin(); ii != hashtable.end(); ++ii) {
        cout << (*ii).first << ": " << (*ii).second << endl;
    }

    //-----------

    return 0;
}
