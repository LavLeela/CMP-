#ifndef PairClass_h
#define PairClass_h
//pairClass.h

#include <iostream>
using namespace std;
#include <utility>
#include <string>

class pairClass {

	public:
		pairClass();
		//pairClass(const pairClass& Tobecopied);	       
		std::pair<std::string,  double*> getId(){return id_;}; 
                ~pairClass(){};




 	 private: 

		std::pair<std::string,  double *> id_;

};
#endif

