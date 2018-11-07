#include "PhoneNumber.h"

using namespace std;

PhoneNumber::PhoneNumber()
{
	phoneNumber = "";
	operatorName = "";
}


PhoneNumber::PhoneNumber(string phNumber, string opName)
{
	if (phNumber.size() == 11 && opName == "KomKothaKoiben" || opName == "GrameenPhone" || opName == "Robi" || opName == "Teletalk" || opName == "BanglaLink")
	{
		phoneNumber = phNumber;
		operatorName = opName;
	}
	else
	{
		cout << "Phone number or Operator Name is not Correct!!";
	}
}

PhoneNumber::~PhoneNumber()
{
}

void PhoneNumber::set_phone_number(string phoneNum)
{

	if (phoneNum.size() == 11)
	{
		phoneNumber = phoneNum;
	}
	else
	{
		cout << "Number is not Correct!!";
	}


}

void PhoneNumber::set_operator_name(string opName)
{
	if (opName == "KomKothaKoiben" || opName == "GrameenPhone" || opName == "Robi" || opName == "Teletalk" || opName == "BanglaLink")
	{
		operatorName = opName;
	}
	else
	{
		cout << "Enter Correct Operator Name!!";
	}
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
