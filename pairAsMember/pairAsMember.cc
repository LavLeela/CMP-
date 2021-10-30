#include "pairClass.h"
#include <iostream>
using namespace std;

int main () {

//pairClass p0;
//cout<< endl <<"getId1:\t"<< (p0.getId()).first <<endl; 
//cout <<endl << "getId2:\t" << (p0.getId()).second << endl;
//cout<< endl <<"getId2[1]:\t"<< (*((p0.getId()).second))[1] <<endl;




//cout<< endl<< "coordinate\t "<< p0.getSysOfCoordinates()<< ":\t"<< p0.getCoord1() <<"\t,\t" <<p0.getCoord2()<< "\t,\t" << p0.getCoord3()<< endl;

//pairClass p1(p0);
//cout<< endl <<"getId1:\t"<< (p1.getId()).first<<endl;
//cout<< endl<< "coordinate\t "<< p1.getSysOfCoordinates()<< ":\t"<< p1.getCoord1() <<"\t,\t" <<p1.getCoord2()<< "\t,\t" << p1.getCoord3()<< endl;


pairClass p2("Cartesian", 1., 2., 7.);
pairClass p3 ("Cartesian", 9., 8., 3.);
pairClass p4 (p2+p3);
cout<< endl<< "coordinate\t "<< p4.getSysOfCoordinates()<< ":\t"<< p4.getCoord1() <<"\t,\t" <<p4.getCoord2()<< "\t,\t" << p4.getCoord3()<< endl;

return 0;
}
