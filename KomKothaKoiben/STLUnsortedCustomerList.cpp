#include "STLUnsortedCustomerList.h"



STLUnsortedCustomerList::STLUnsortedCustomerList()
{
	make_empty();
}


STLUnsortedCustomerList::~STLUnsortedCustomerList()
{
	make_empty();
}

int STLUnsortedCustomerList::get_length()
{
	return length;
}

void STLUnsortedCustomerList::make_empty()
{

	customerList.clear();

	length = 0;
}

bool STLUnsortedCustomerList::is_empty()
{
	return (customerList.empty());
}

Customer STLUnsortedCustomerList::get_customer_details(int index)
{
	while (!customerList.empty())
	{
		if (customerList.front().get_customer_index() == index)
			return customerList.front();
	}
	cout << "Customer Index Number does not match";
	return customerList.front();
}

void STLUnsortedCustomerList::put_customer_details(Customer customer)
{
	customerList.push_front(customer);
}

/*bool STLUnsortedCustomerList::delete_customer_details(Customer customer)
{
	
}*/



Customer STLUnsortedCustomerList::get_next_customer()
{
	return customerList.front();
}

void STLUnsortedCustomerList::print_customer_list()
{
	while (customerList.empty())
		customerList.front().print_customer_deatails();
}
