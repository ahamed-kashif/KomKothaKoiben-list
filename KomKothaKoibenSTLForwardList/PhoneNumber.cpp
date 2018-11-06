#include "PhoneNumber.h"

using namespace std;

PhoneNumber::PhoneNumber()
{
	phoneNumber = "";
	operatorName = "";
}


PhoneNumber::PhoneNumber(string phNumber, string opName)
{
	phoneNumber = phNumber;
	operatorName = opName;
}

PhoneNumber::~PhoneNumber()
{
}

void PhoneNumber::set_phone_number(string phoneNum)
{

	phoneNumber = phoneNum;


}

void PhoneNumber::set_operator_name(string opName)
{
	operatorName = opName;
}

string PhoneNumber::get_phone_number()
{
	return phoneNumber;
}

string PhoneNumber::get_operator_name()
{
	return operatorName;
}

void PhoneNumber::print_phone_number()
{
	cout << "Phone Number:\t" + phoneNumber << endl;
	cout << "\tOperator Name:\t" + operatorName << endl;
}
