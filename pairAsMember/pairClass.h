#ifndef PairClass_h
#define PairClass_h
//pairClass.h
#include <vector>
#include <iostream>
using namespace std;
#include <utility>
#include <string>

class pairClass {

	public:
		pairClass();
		pairClass(const pairClass& );	       
                std::pair<std::string, std::vector<double>*> getId() const{return id_;}; 
		pairClass(const std::string , const double , const double , const double);


	        
                ~pairClass(){delete id_.second;
		
			cout<<"~pairClass called" << endl;};


		std::string getSysOfCoordinates() const {return id_.first;};

		//std::vector<double>* getPtr2CoordVector() const{return id_.second;};

		double getCoord1() const { return (*(id_.second))[0];};
                double getCoord2() const {return  (*(id_.second))[1];};
		double getCoord3() const   {return (*(id_.second))[2];};
		void setCoord2(double a) { (*(id_.second))[1]=a;} 
               pairClass  operator+( const pairClass& ) const;

		const pairClass& operator=( const pairClass& rhs );


 	 private: 

		std::pair<std::string, std::vector<double>*> id_;

};
#endif

