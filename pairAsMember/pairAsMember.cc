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
cout <<endl << "getId2(p2):\t" << (p2.getId()).second << endl;

//pairClass p3 ("Cartesian", 9., 8., 3.);
pairClass p3 (p2);
cout <<endl << "getId2 (p2):\t" << (p2.getId()).second << endl;

cout <<endl << "getId2(p3):\t" << (p3.getId()).second << endl;

p2.setCoord2(0.);
cout<< endl<< "coordinate di p2\t "<< p2.getSysOfCoordinates()<< ":\t"<< p2.getCoord1() <<"\t,\t" <<p2.getCoord2()<< "\t,\t" << p2.getCoord3()<< endl;

cout<< endl<< "coordinate di p3\t "<< p3.getSysOfCoordinates()<< ":\t"<< p3.getCoord1() <<"\t,\t" <<p3.getCoord2()<< "\t,\t" << p3.getCoord3()<< endl;



return 0;
}
