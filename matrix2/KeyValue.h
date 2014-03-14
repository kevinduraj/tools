#ifndef KEYVALUE_H
#define	KEYVALUE_H
#include <iostream>
#include <cstdlib>
#include <string>
#include <map>
/*----------------------------------------------------------------------------*/
using namespace std;

/*----------------------------------------------------------------------------*/
class KeyValue {
    
public:
    map<string, int> mapTable;
    
    KeyValue();
    virtual ~KeyValue();
    
    void hello();
    void add2map(string str, int i);
    void addValues();
    void display();
 
private:

};
/*----------------------------------------------------------------------------*/
#endif	/* KEYVALUE_H */

