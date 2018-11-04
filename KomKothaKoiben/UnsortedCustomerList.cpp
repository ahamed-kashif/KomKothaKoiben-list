#include "UnsortedCustomerList.h"
#include"PhoneNumber.h"
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
	NodeType* curr = customerList;
	bool found = false;
	while (curr != nullptr && !found) {
		if (curr->info.get_customer_index() != customIndex)
			curr = curr->next;
		else {
			found = true;
			return curr->info;
		}
	}
	found = false;
	cout << endl;
	cout << "Customer Index is not correct!!" << endl;
	return curr->info;
}

bool UnsortedCustomerList::put_customer_details(Customer customer)
{
	if (is_full())
		return false;
	NodeType* newNode = new NodeType;
	newNode->info = customer;
	newNode->next = customerList;
	customerList = newNode;
	length++;

	return true;

}

bool UnsortedCustomerList::delete_customer_details(int index)
{
	NodeType* curr = customerList;
	NodeType* prev = nullptr;
	bool found = false;
	while (curr != nullptr && !found) {
		if (curr->info.get_customer_index() == index) {
			found = true;
			if (prev == nullptr) {
				customerList = curr->next;
			}
			else {
				prev->next = curr->next;
			}
			delete curr;
			length--;
		}
		else {
			prev = curr;
			curr = curr->next;
		}
	}
	return found;

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

void UnsortedCustomerList::insert_new_num(int customIndex, PhoneNumber phn)
{
	NodeType* curr = customerList;
	bool found = false;
	while (curr != nullptr && !found) {
		if (curr->info.get_customer_index() != customIndex)
			curr = curr->next;
		else {
			found = true;
			curr->info.insert_phone_number(phn);
		}
	}
	found = false;
	cout << endl;
	cout << "Customer Index is not correct!!" << endl;
	
}
