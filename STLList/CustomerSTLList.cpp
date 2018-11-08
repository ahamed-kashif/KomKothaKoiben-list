#include "CustomerSTLList.h"



CustomerSTLList::CustomerSTLList()
{
}


CustomerSTLList::~CustomerSTLList()
{
}

int CustomerSTLList::get_length()
{
	return customerList.size();
}

void CustomerSTLList::make_empty()
{
	for (it = customerList.begin(); it != customerList.end(); it++)
	{
		customerList.pop_front();
	}
}

bool CustomerSTLList::is_empty()
{
	return(customerList.empty());
}

Customer CustomerSTLList::get_customer_details(int customerIndex)
{
	Customer customer;

	for (it = customerList.begin(); it != customerList.end(); it++)
	{
		customer = *it;
		if (customer.get_customer_index() == customerIndex)
		{
			return customer;
		}
	}

	cout << endl << "Customer Index is not CORRECT!!" << endl;
	return customerList.front();
}

bool CustomerSTLList::put_customer_details(Customer customer)
{
	if (is_empty())
	{
		customerList.push_front(customer);
		return true;
	}
	else
	{
		for (it = customerList.begin(); it != customerList.end(); it++)
		{
			Customer temCus = *it;
			if (temCus.get_age() < customer.get_age() || temCus.get_age() == customer.get_age())
			{
				customerList.insert(it, customer);
				return true;
			}
		}
		return false;
	}
	

}

void CustomerSTLList::delete_customer_details(int customerIndex)
{
	Customer temCustomer;
	for (it = customerList.begin(); it != customerList.end(); it++)
	{
		temCustomer = *it;
		if (temCustomer.get_customer_index() == customerIndex)
		{
			customerList.erase(it);
			break;
		}
	}
}



void CustomerSTLList::print_customer_list()
{
	Customer customer;

	for (it = customerList.begin(); it != customerList.end(); it++)
	{
		customer = *it;
		customer.print_customer_deatails();
	}
}

bool CustomerSTLList::insert_new_number(int customerIndex, PhoneNumber phn)
{
	Customer customer;
	for (it = customerList.begin(); it != customerList.end(); it++)
	{
		customer = *it;
		if (customer.get_customer_index() == customerIndex)
		{
			customer.insert_phone_number(phn);
			*it = customer;
			return true;
		}
	}
	return false;
}
