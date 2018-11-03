#include "STLUnsortedCustomerList.h"



STLUnsortedCustomerList::STLUnsortedCustomerList()
{
}


STLUnsortedCustomerList::~STLUnsortedCustomerList()
{
}

bool STLUnsortedCustomerList::put_customer_details(Customer customer)
{
	customerList.push_front(customer);
}
