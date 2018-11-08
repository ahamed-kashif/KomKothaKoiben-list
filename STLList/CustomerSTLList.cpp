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

void CustomerSTLList::put_customer_details(Customer customer)
{
	
	
	customerList.push_front(customer);

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
