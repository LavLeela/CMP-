#include "pairClass.h"
#include <iostream>
using namespace std;
#include <string>
#include <vector>
using namespace std;
pairClass::pairClass(){
	 
        id_.second = new vector<double> ;
	id_.first = "Cartesian";
	(id_.second)->push_back(0.);
	(id_.second)->push_back(0.);
	(id_.second)->push_back(0.);
         //*(id_.second +2) = 12.;

  	  cout<< "id_.first = \t " <<id_.first<< endl;
  
	  cout << "*id_.second [0]=\t " <<(*(id_.second))[0]<< endl;
	  cout << "*id_.second [1] =\t" << (*(id_.second)) [1]<< endl;
          cout << "*id_.second [2] =\t" << (*(id_.second))[2] << endl;

}


pairClass::pairClass(const pairClass& ToBeCopied){

	 id_.first= ToBeCopied.id_.first;
         id_.second= new vector<double>;

	(id_.second)->push_back((*(ToBeCopied.id_.second))[0]);
        (id_.second)->push_back((*(ToBeCopied.id_.second))[1]);
        (id_.second)->push_back((*(ToBeCopied.id_.second))[2]);

      
        cout<< "Coordinate del vettore copiato:\t" << endl;
	cout<<(*(id_.second))[0]<< endl;
        cout<< (*(id_.second)) [1]<< endl;
	cout<< (*(id_.second)) [2]<< endl;
}

pairClass::pairClass(const std::string System, const double a, const double b, const double c){

	id_.second = new vector<double> ;
        id_.first = System;
        
	(id_.second)->push_back(a);
        (id_.second)->push_back(b);
        (id_.second)->push_back(c);

        cout<< "Vettore creato in coordinate\t" << System <<":" << endl;
        cout<<(*(id_.second))[0]<< endl;
        cout<< (*(id_.second)) [1]<< endl;
        cout<< (*(id_.second)) [2]<< endl;
}

pairClass pairClass::operator+( const pairClass& rhs) const {

if ((id_.first == "Cartesian")  & (rhs.id_.first == "Cartesian")){

  double x= (*(id_.second))[0] + (*(rhs.id_.second))[0];
  double y= (*(id_.second))[1] + (*(rhs.id_.second))[1];
  double z= (*(id_.second))[2] + (*(rhs.id_.second))[2];
  
  return pairClass ("Cartesian", x, y,z);
}


else { cout<<"Implementazione non ancora disponibile"<<endl;}

}


const pairClass& pairClass::operator=(const pairClass& rhs) {

      	id_.first= rhs.id_.first;
        
        (*(id_.second))[0] = (*(rhs.id_.second))[0];
        (*(id_.second))[1] = (*(rhs.id_.second))[1];
        (*(id_.second))[2] = (*(rhs.id_.second))[2];


  cout<< "Coordinate del vettore a sinistra:\t" << endl;
        cout<< id_.first << endl;
        cout<<(*(id_.second))[0]<< endl;
        cout<< (*(id_.second)) [1]<< endl;
        cout<< (*(id_.second)) [2]<< endl; 

  return *this;
}

