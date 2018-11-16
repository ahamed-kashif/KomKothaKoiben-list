#include "Customer.h"



Customer::Customer()
{
	make_empty();
}


Customer::~Customer()
{
	make_empty();
}

void Customer::insert_phone_number(PhoneNumber phoneNumber)
{
	phoneNumberList.push_front(phoneNumber);
	length++;

}

void Customer::delete_phone_number(string phoneNumber)
{

	PhoneNumber temPhoneNumber;
	std::forward_list<PhoneNumber> temPhoneNumberList;
	for (it = phoneNumberList.begin(); it != phoneNumberList.end(); it++)
	{
		temPhoneNumber = *it;
		if (temPhoneNumber.get_phone_number() != phoneNumber)
		{

			temPhoneNumberList.push_front(temPhoneNumber);

		}

	}
	phoneNumberList=temPhoneNumberList;
	length--;

}

PhoneNumber Customer::get_phone_numbers(string phoneNumber)
{
	PhoneNumber temPhoneNumber;
	for (it = phoneNumberList.begin(); it != phoneNumberList.end(); it++)
	{
		temPhoneNumber = *it;
		if (temPhoneNumber.get_phone_number() == phoneNumber)
		{
			return temPhoneNumber;
		}
		else
		{
			cout << "Phone Number does not match";
			return phoneNumberList.front();
		}
	}
}

bool Customer::change_operator_name(string phonenumber, string operatorName)
{

	PhoneNumber temPhoneNumber;

	for (it=phoneNumberList.begin();it!=phoneNumberList.end();it++)
	{
		temPhoneNumber = *it;
		if (temPhoneNumber.get_phone_number() == phonenumber)
		{
			temPhoneNumber.set_operator_name(operatorName);
			cout << endl;
			cout << "From "+name+"'s details "<< temPhoneNumber.get_phone_number() << " Operator name has been changed!!" << endl;
			*it = temPhoneNumber;
			return true;
		}

	}
	cout << endl;
	cout << "Phone Number is not FOUND!!!" << endl;
	return false;
}

void Customer::print_customer_deatails()
{
	int index = 0;

	PhoneNumber temPhoneNumber;

	cout << "Customer Index Number:\t\t" << customerIndex << endl;
	print_person();

	for (it = phoneNumberList.begin(); it != phoneNumberList.end(); it++)
	{
		temPhoneNumber=*it;
		cout << index + 1;
		cout << ".\t";
		temPhoneNumber.print_phone_number();
		cout << endl;
		index++;
	}
	cout << endl;
	cout << endl;
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

void Customer::make_empty()
{
	length = 0;
	phoneNumberList.clear();
}