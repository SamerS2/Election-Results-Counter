#ifndef PERSONTYPE_H
#define PERSONTYPE_H
#include <iostream>

class PersonType {
private:
public:
	PersonType();
	PersonType(std::string fName, std::string lName, int ssn);
	void setPersonInfo(std::string fName, std::string lName, int ssn);
	const std::string getFirstName();
	const std::string getLastName();
	const int getSSN();
	void printName();
	void printPersonInfo();
	void printSSN();
	~PersonType();
protected:
	int SSN;
	std::string firstName, lastName;
};
#endif