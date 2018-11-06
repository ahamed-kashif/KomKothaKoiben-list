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

