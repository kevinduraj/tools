#ifndef KEVIN_H
#define	KEVIN_H
#include <map>
/*----------------------------------------------------------------------------*/
using namespace std;

/*----------------------------------------------------------------------------*/
class kevin {
    
public:
    map<string, int> hashtable;
    
    kevin();
    kevin(const kevin& orig);
    virtual ~kevin();
    
    void hello();
    void add2hash(string str, int i);
    void addValues();
 
private:

};
/*----------------------------------------------------------------------------*/
#endif	/* KEVIN_H */

