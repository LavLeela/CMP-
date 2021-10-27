#ifndef Vector3D_h
#define Vector3D_h
// Vector3D.h
#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include <utility>      // std::pair, std::make_pair
#include <string>

class Vector3D {



  public:
   Vector3D();
   Vector3D(std::string coordSys, double a, double b, double c);
   Vector3D(const Vector3D& vector3D);
    ~Vector3D() { };
 
 std::pair<std::string, double*>  getVec() const {return vec_;};
 double* getVecSecond() const{ return vec_.second;};



   // double magnitude() const;
   //double theta() const;
   //double phi() const;
   

    /*void print() const;
i
    Vector3D operator+( const Vector3D& rhs ) const;
    Vector3D operator-( const Vector3D& rhs ) const;
    
    Vector3D operator*(const double& rhs) const;
    Vector3D operator/(const double& rhs) const;

    const Vector3D& operator=( const Vector& rhs );
    

    friend Vector3D operator+(const double& lhs, const Complex& rhs);
    friend Vector3D operator-(const double& lhs, const Complex& rhs);   
   
    friend Vector3D operator*(const double& lhs, const Complex& rhs);
    friend Vector3D operator/(const double& lhs, const Complex& rhs) ;
    */
    

  private:
   std::pair<std::string, double* > vec_;
      
   
};
#endif
