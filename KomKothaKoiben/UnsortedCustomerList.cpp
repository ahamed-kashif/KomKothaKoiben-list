#include "UnsortedCustomerList.h"
#include<exception>
#include<iostream>


UnsortedCustomerList::UnsortedCustomerList()
{
	make_empty();
}


UnsortedCustomerList::~UnsortedCustomerList()
{
	make_empty();
}

bool UnsortedCustomerList::is_full()
{
	try {
		NodeType* newNode = new NodeType;
		delete newNode;
	}
	catch (std::bad_alloc exception) {
		return true;
	}
	return false;
}

int UnsortedCustomerList::get_length()
{
	return length;
}

void UnsortedCustomerList::make_empty()
{
	customerList = nullptr;
	currentPosition = nullptr;
	length = 0;
}

bool UnsortedCustomerList::is_empty()
{
	return (length == 0 && customerList == nullptr);
}

Customer UnsortedCustomerList::get_customer_details(int customIndex)
{

}

bool UnsortedCustomerList::put_customer_details(Customer customer)
{

}

bool UnsortedCustomerList::delete_customer_details(int index)
{


}

void UnsortedCustomerList::reset_list_customer_list()
{
	currentPosition = nullptr;
}

bool UnsortedCustomerList::has_next_customer()
{
	if (currentPosition == nullptr)
		return (customerList != nullptr);

	return (currentPosition->next != nullptr);
}

Customer UnsortedCustomerList::get_next_customer()
{
	currentPosition = ((currentPosition == nullptr) ? customerList : currentPosition->next);
	return currentPosition->info;

}

void UnsortedCustomerList::print_customer_list()
{
	for (int index = 0; index < length; index++)
	{
		get_next_customer().print_customer_deatails();
	}

}
