#include <iostream>
#include "KeyValue.h"
/*----------------------------------------------------------------------------*/
using namespace std;

/*----------------------------------------------------------------------------*/
KeyValue::KeyValue() {
    cout << endl << "KeyValue Constructor ... " << endl;

}
/*----------------------------------------------------------------------------*/
KeyValue::~KeyValue() {
    cout << endl << "KeyValue Destructor ... " << endl;
}

/*----------------------------------------------------------------------------*/
void KeyValue::hello() {

    cout << "Hello from Kevin" << endl;
}

/*----------------------------------------------------------------------------*/
void KeyValue::add2map(string str, int i) {

    if (hashtable[str]) hashtable[str] += i;
    else hashtable[str] = i;

}

/*----------------------------------------------------------------------------*/
void KeyValue::addValues() {

    add2map("Google.com", 10);
    add2map("Amazon.com", 24);
    add2map("Apple.com", 15);
    add2map("TeslaMotors.com", 25);
    add2map("Google.com", 100);
}

/*----------------------------------------------------------------------------*/
void KeyValue::display() {
    
    cout << "Map size: " << hashtable.size() << endl;

    for (map<string, int>::iterator ii = hashtable.begin(); ii != hashtable.end(); ++ii) {
        cout << (*ii).first << ": " << (*ii).second << endl;
    }
}
/*----------------------------------------------------------------------------*/