#include "PersonType.h"
#include <string>
using namespace std;

PersonType::PersonType() {
	SSN = 000000000;
}
PersonType::PersonType(string fName, string lName, int ssn) {
	firstName = fName;
	lastName = lName;
	SSN = ssn;
}
void PersonType::setPersonInfo(string fName, string lName, int ssn) {
	firstName = fName;
	lastName = lName;
	SSN = ssn;
}
const string PersonType::getFirstName() {
	return firstName;
}
const string PersonType::getLastName() {
	return lastName;
}
const int PersonType::getSSN() {
	return SSN;
}
void PersonType::printName() {
	cout << getLastName() << ", " << getFirstName();
}
void PersonType::printPersonInfo() {
	printSSN();
	cout << " " << getFirstName() << " " << getLastName();
}
void PersonType::printSSN() {
	string ssn = to_string(getSSN());
	for (int i = 0; i < ssn.length(); i++) {
		if (i != 3 && i != 5) {
			cout << ssn[i];
		}
		else {
			cout << "-" << ssn[i];
		}
	}
}
PersonType::~PersonType() {
}