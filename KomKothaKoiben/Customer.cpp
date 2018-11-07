#include "Customer.h"



Customer::Customer()
{
	length = 0;
}


Customer::~Customer()
{

}

void Customer::insert_phone_number(PhoneNumber phoneNumber)
{
	if (length < maxPhoneNumbers)
	{
		phoneNumbers[length] = phoneNumber;
		
		length++;
	}
	else
	{
		cout << "Can't Enter more than 15 numbers!!";
	}

}

void Customer::delete_phone_number(int phoneNumberindex)
{
	if (phoneNumberindex < length)
	{
		for (int index = phoneNumberindex; index < length; index++)
		{
			phoneNumbers[index] = phoneNumbers[index + 1];
			length--;
		}
	}
	else
		cout << "Phone Number Index is not CORRECT!!";

}

PhoneNumber Customer::get_phone_numbers(int index)
{
	return phoneNumbers[index];
}

bool Customer::change_operator_name(string phonenumber, string operatorName)
{


	for (int index = 0; index < length; index++)
	{
		if (phoneNumbers[index].get_phone_number() == phonenumber)
		{
			phoneNumbers[index].set_operator_name(operatorName);
			cout << endl;
			cout << "Operator number has been changed" << endl;
			return true;
		}

	}
	cout << endl;
	cout << "Phone Number is not FOUND!!!" << endl;
	return false;
}

void Customer::print_customer_deatails()
{
	cout << "Customer Index Number:\t\t" << customerIndex << endl;
	print_person();
	for (int index = 0; index < length; index++)
	{
		cout << index + 1;
		cout << ".\t";
		phoneNumbers[index].print_phone_number();
		cout << endl;
	}
	cout << endl;
	cout << endl;
}

int Customer::phone_number_get_length()
{
	return length;
}

void Customer::set_customer_index(int index)
{
	customerIndex = index;
}

int Customer::get_customer_index()
{
	return customerIndex;
}

int Customer::phone_number_get_length()
{
	return length;
}