#include "pairClass.h"
#include <iostream>
using namespace std;
#include <string>

pairClass::pairClass(){
	 
	  double v[3]= { 3., 6., 9.};
	  id_.first = "stringa";
	  id_.second = v;
	 

	  cout<< "id_.first = \t " <<id_.first;
	  cout << "id_.second =\t " << id_.second;
	  cout << "id_.second [0] =\t" << *(id_.second);

}

/*pairClass::pairClass(const pairClass& ToBeCopied){

	id_=ToBeCopied.id_;

	cout << "Id1 copiato = \t" << id_.first <<endl;
}*/
