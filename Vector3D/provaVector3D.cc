#include <iostream>
#include "Vector3D.h"
#include <cmath>

int main() {
double* g;
  Vector3D  s1( "Spherical", 3., 1., 3.14);
//  Vector3D nuovo;
 
//g= s1.getVecSecond;
//std::cout<< "g=" << g << endl;
//std::cout<< "*g=" << *g << endl;
//std::cout<< "*(g+1)=" << *(g+1) << endl;

//std:pair<std::string, double*> ptr;
//ptr= s1.getVec();
//std::cout<< "ptr=" << ptr << endl;


  Vector3D copia(s1);
 // Vector3D copiato(nuovo);
  

  /*c1.print();
  std::cout << "mag(c1) =" << c1.mag() <<" /t phi(c1)=" <<c1.phi() <<endl;

  Complex  c2(Polar, 2., 1.);
  c2.print();

  std::cout << "mag(c2) =" << c2.mag() <<"/t phi(c2)=" <<c2.phi() <<endl;

  c2+= c1;
  std::cout << " After c2+= c1 : mag(c2) =" << c2.mag()  << "\t phi(c2)=" <<c2.phi() << endl;*/
  return 0;
}
                                    
