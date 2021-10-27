#include "Vector3D.h"
#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>




Vector3D::Vector3D(){
	double v[3]= {0};
	vec_.first= "Cartesian";
	vec_.second=v;
	std::cout<< "Created vector in\t" << vec_.first <<"\t coordinates \t (" << *vec_.second << "," << *(vec_.second +1) <<","  << *(vec_.second +2)<<")"<< endl;

}



Vector3D::Vector3D(std::string coordSys, double a, double b, double c) { 
  if (coordSys == "Spherical" || coordSys== "Cartesian") {
       double m[3];
	  if ((coordSys == "Spherical") && ( (a < 0.)  || (b < 0.) || (b > M_PI) || (c<0.) || (c> 2*M_PI))){
       	cout << "Uncorrect assignment for the spherical coordinates of the vector!" << endl;}

	else {
	
		vec_.first= coordSys;
                vec_.second=m;
		vec_.second[0] =a;
		vec_.second[1] =b;
		vec_.second[2]=c;
                
	std::cout<< "Created vector in\t" << vec_.first <<" \tcoordinates \t (" << *vec_.second << "," << *(vec_.second +1) <<","  << *(vec_.second +2)<<")"<< endl;
 		}
  }
  
  else{ cout << "Uncorrect selection of coordinate system! Options are: Spherical , Cartesian." << endl;}

}


Vector3D::Vector3D(const Vector3D& vector3D) {
     cout << "Vector to be copied  in\t" << vector3D.vec_.first <<" \tcoordinates \t (" << vector3D.vec_.second[0] << "," << vector3D.vec_.second[1] <<","  << vector3D.vec_.second[2]<<")"<< endl;
                

    vec_=vector3D.vec_; 
       
   vec_.first= vector3D.vec_.first;
   vec_.second= vector3D.vec_.second;
   vec_.second[0]= vector3D.vec_.second [0];
   vec_.second[1]= vector3D.vec_.second [1];
   vec_.second[2] = vector3D.vec_.second [2];
  std::cout<< "Created vector in\t" << vec_.first <<" \tcoordinates \t (" << *(vec_.second) << "," << *(vec_.second +1) <<","  << *(vec_.second +2)<<")"<< endl;

}






/*double Vector3D::magnitude() const{
	if ( vec_.first == Spherical) { return vec_.second[0];}
	else if (vec_.first == Cartesian){ 
		return ( sqrt (vec_.second[0] * vec_.second[0] + vec_.econd[1] * vec_.econd[1] + vec_.second[2] * vec_.second[2] ));}
	else {cout << " Magnitude not computable. Uncorrect coordinate system!" << endl;}
}


	
	}
double Vector3D::theta() const {
	 if ( vec_.first == Spherical) { 
		 return vec_.second[1];
	 }
        else if (vec_.first == Cartesian){
                return ( atan (sqrt (vec_.second[0] * vec_.second[0] + vec_.second[1] * vec_.second[1] )/vec_.second[2]));
	}

        else {cout << " Theta not computable. Uncorrect coordinate system!" << endl;}
}





double Vector3D::phi() const {
         if ( vec_.first == Spherical) {
                 return vec_.second[2];
         }
        else if (vec_.first == Cartesian){ 

		if (vec_.second[0] >= 0.) {
                return ( atan (vec_.second[1] /vec_.second[0]));
		}

		else {
		return ( atan (vec_.second[1] /vec_.second[0])+ cmath.pi);
        }

        else {cout << " Phi not computable. Uncorrect coordinate system!" << endl;}
}


*/


/*void Complex::print() const {

  cout<< "complex number: " << re_  << " + i ( " << im_ << ")" << endl;
}


Complex Complex::operator+( const Complex& rhs) const {

  double re= re_ + rhs.re_;
  double im= im_ + rhs.im_;

  // result of the sum beetween 2 complex numbers
  return Complex(Cartesian, re, im);
}

Complex Complex::operator+( const double& rhs) const {

  double re= re_ + rhs;
  double im= im_ + rhs;

  // result of the sum of a complex  and a double  
                                                                                                                                                                                          3,2           Top
*/
