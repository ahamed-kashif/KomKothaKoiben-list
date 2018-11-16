#include"Customer.h"

Customer::Customer()
{
	
}

Customer::~Customer()
{
	make_empty();
}

bool Customer::insert_phone_number(PhoneNumber phoneNumber)
{
	if (phoneNumberList.size() < 15)
	{
		if (!phoneNumberList.empty())
		{
			PhoneNumber temPhoneNumber;
			for (it = phoneNumberList.begin(); it != phoneNumberList.end(); it++)
			{
				temPhoneNumber = *it;

				if (temPhoneNumber.get_phone_number() > phoneNumber.get_phone_number()|| temPhoneNumber.get_phone_number() == phoneNumber.get_phone_number())
				{
					phoneNumberList.insert(it, phoneNumber);
					return true;
				}
			}
			phoneNumberList.push_back(phoneNumber);
			return true;
		}
		else
		{
			phoneNumberList.push_front(phoneNumber);
			return true;
		}
		
	}
	else
	{
		return false;
	}
	
}

bool Customer::delete_phone_number(string phoneNumber)
{
	PhoneNumber temPhoneNumber;
	for (it = phoneNumberList.begin(); it != phoneNumberList.end(); it++)
	{
		temPhoneNumber = *it;
		if (temPhoneNumber.get_phone_number() == phoneNumber)
		{
			phoneNumberList.erase(it);
			return true;
		}
	}
	cout << "Phone number is not correct!!" << endl;
	return false;
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
	}
	cout << "Phone Number is not Correct!!" << endl;
	return phoneNumberList.front();
}

bool Customer::change_operator_name(string phoneNumber, string operatorName)
{
	PhoneNumber temPhoneNumber;
	for (it = phoneNumberList.begin(); it != phoneNumberList.end(); it++)
	{
		temPhoneNumber = *it;
		if (temPhoneNumber.get_phone_number() == phoneNumber)
		{
			temPhoneNumber.set_operator_name(operatorName);
			*it = temPhoneNumber;
			cout << "From " << name << "'s details " << temPhoneNumber.get_phone_number() << " Operator name is been Changed!!" << endl;
			return true;
		}
	}
	cout << "Phone Number is not correct" << endl;
	return false;
}

void Customer::make_empty()
{
	phoneNumberList.clear();
}

bool Customer::is_full()
{
	return (phoneNumberList.size()==15);
}

bool Customer::is_empty()
{
	return (phoneNumberList.empty());
}

void Customer::print_customer_deatails()
{
	int index = 0;
	PhoneNumber temPhonenumber;
	cout << "Customer Index Number:\t\t" << customerIndex << endl;
	print_person();
	for (it = phoneNumberList.begin(); it != phoneNumberList.end(); it++)
	{
		temPhonenumber = *it;
		cout << index + 1;
		cout << ".\t";
		temPhonenumber.print_phone_number();
		cout << endl;
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
	return phoneNumberList.size();
}
