/*
 * Member.cpp
 * 
 * Class Description: Models a Fitness Studio Registration System.
 * Class Invariant: Each member has a unique cell phone number.
 *                  This cell phone number must have 12 digits.
 *                  This cell phone number must have the following format: XXX-XXX-XXXX.
 *                  This cell phone number cannot be modified. 
 *
 * Author: AL + SD
 * Last modified: Sept. 2022
 */


#include <iostream>
#include <string>
#include "Member.h"



//constructors

Member::Member(){
    name;
    phone = "000-000-0000";
    email;
    creditCard;

}

//check to see if the phone number meets the precondiction

Member::Member(string aPhone){
    if(aPhone.length() == SIZE_OF_PHONE_NUMBER){
        phone = aPhone;

    }
    else{
        phone = "000-000-0000";
    }
}


Member::Member(string aName, string aPhone, string anEmail, string aCreditCard){
    if(aPhone.length() == SIZE_OF_PHONE_NUMBER){
    name = aName;
    phone = aPhone;
    email = anEmail;
    creditCard = aCreditCard;
     
    }
    else{
    name = aName;
    phone = "000-000-0000";
    email = anEmail;
    creditCard = aCreditCard;

    }

}

//getter functions
string Member::getName() const{
    return name;
}

string Member:: getPhone() const{
    return phone;
}


void Member::setEmail(const string anEmail){
    email = anEmail;
}      

void Member::setCreditCard(const string aCreditCard){
    creditCard = aCreditCard;
}

void Member::setPhone(const string aPhone){
    phone = getPhone();
}

// Overloaded Operators
// Description: Comparison operator. Compares "this" Member object with "rhs" Member object.
//              Returns true if both Member objects have the same cell phone number.
bool Member::operator == (const Member & rhs) {
    
    return this->phone == rhs.getPhone();
}
	
// Description: Greater than operator. Compares "this" Member object with "rhs" Member object.
//              Returns true if the cell phone number of "this" Member object is > the 
//              cell phone number of "rhs" Member object.
bool Member::operator > (const Member & rhs) {

    return this->phone > rhs.getPhone();
} 

// Description: Less than operator. Compares "this" Member object with "rhs" Member object.
//              Returns true if the cell phone number of "this" Member object is < the 
//              cell phone number of "rhs" Member object.
bool Member::operator < (const Member & rhs) {
	
    return this->phone < rhs.getPhone();
} 

// For testing purposes!
// Description: Prints the content of "this".
// Example: Louis Pace, 604-853-1423, louis@nowhere.com, 1234 5678 9098 7654 
ostream & operator<<(ostream & os, const Member & p) {
	
    os << p.name << ", " << p.phone << ", " << p.email << ", " << p.creditCard << endl;  
	     
    return os;
} 

// end of Member.cpp