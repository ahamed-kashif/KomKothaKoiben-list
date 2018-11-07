#include "STLForwardList.h"



STLForwardList::STLForwardList()
{
	make_empty();
}


STLForwardList::~STLForwardList()
{
	make_empty();
}

int STLForwardList::get_length()
{
	return length;
}

void STLForwardList::make_empty()
{

	customerList.clear();

	length = 0;
}

bool STLForwardList::is_empty()
{
	return (customerList.empty());
}

Customer STLForwardList::get_customer_details(int index)
{
	Customer customer;
	for (it = customerList.begin(); it != customerList.end(); it++)
	{
		customer = *it;
		if (customer.get_customer_index() == index)
		{
			return customer;
		}
	}
	cout << "Customer Index Number does not match";
	return customerList.front();
}

void STLForwardList::put_customer_details(Customer customer)
{
	customerList.push_front(customer);
}

bool STLForwardList::delete_customer_details(int  index)
{
	Customer customer;
	for (it = customerList.begin(); it != customerList.end(); it++)
	{
		customer = *it;
		if (customer.get_customer_index() == index)
		{

			customerList.erase_after(it);
			return true;
		}
		else continue;
	}
	cout << "Customer Index Number does not match";
	return false;
}



Customer STLForwardList::get_next_customer()
{
	return customerList.front();
}

void STLForwardList::print_customer_list()
{
	Customer customer;
	for (it = customerList.begin(); it != customerList.end(); it++)
	{
		customer = *it;
		customer.print_customer_deatails();
	}

}

bool STLForwardList::insert_new_number(int customIndex, PhoneNumber phn)
{
	
	bool found = false;
	Customer customer;

	for (it = customerList.begin(); it != customerList.end();it++) {

		customer = *it;
		if (customer.get_customer_index() != customIndex)
			continue;
		else {
			found = true;
			customer.insert_phone_number(phn);
			*it = customer;
			cout << "New Phone Number is Added in " << customer.get_name() << "'s Information!!" << endl << endl;
			return found;
		}
	}
	found = false;
	cout << endl;
	cout << "Customer Index is not correct!!" << endl;
	return found;
}

bool STLForwardList::delete_phone_number(int customIndex, int phoneNumberIndex)
{
	
	bool found = false;
	Customer customer;
	for (it = customerList.begin(); it!=customerList.end();it++) {

		customer = *it;

		if (customer.get_customer_index() != customIndex)
			continue;

		else {
			found = true;
			customer.delete_phone_number(phoneNumberIndex);
			*it = customer;
			cout << "A Phone Number is Deleted from " << customer.get_name() << "'s Information!!" << endl << endl;
			if (customer.phone_number_get_length() == 0)
			{
				
				delete_customer_details(customer.get_customer_index());
				cout << customer.get_name() << "'s information is DELETED!!" << endl << endl;


			}

			return found;
		}
	}
	found = false;
	cout << endl;
	cout << "Customer Index or Phone Number Index is not correct!!" << endl;
	return found;
}

