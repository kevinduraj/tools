#include <iostream>
#include "kevin.h"
/*----------------------------------------------------------------------------*/
using namespace std;

/*----------------------------------------------------------------------------*/
kevin::kevin() {
    
}
/*----------------------------------------------------------------------------*/
kevin::kevin(const kevin& orig) {
    
}
/*----------------------------------------------------------------------------*/
kevin::~kevin() {
    
}
/*----------------------------------------------------------------------------*/
void kevin::hello() {
    
    cout << "Hello from Kevin" << endl;
}
/*----------------------------------------------------------------------------*/
void kevin::add2hash(string str, int i) {
    
    if (hashtable[str]) hashtable[str] += i;
    else hashtable[str] = i;
    
}
/*----------------------------------------------------------------------------*/
void kevin::addValues() {
    
    add2hash("kevin", 1);
    add2hash("thomas", 1);
    add2hash("duraj", 1);
    add2hash("kevin", 100);

    cout << "Map size: " << hashtable.size() << endl;

    for (map<string, int>::iterator ii = hashtable.begin(); ii != hashtable.end(); ++ii) {
        cout << (*ii).first << ": " << (*ii).second << endl;
    }
}
/*----------------------------------------------------------------------------*/