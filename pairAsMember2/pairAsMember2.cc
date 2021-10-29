#include "pairClass2.h"
#include <iostream>
using namespace std;

int main () {

pairClass p0;
cout<< endl <<"getId1:\t"<< (p0.getId()).first <<endl; 
cout <<endl << "getId2:\t" << (p0.getId()).second << endl;
cout<< endl <<"getId2[0]:\t"<< *((p0.getId()).second) <<endl;

//pairClass p1(p0);
//cout<< endl <<"getId1:\t"<< (p1.getId()).first<<endl;


return 0;
}
