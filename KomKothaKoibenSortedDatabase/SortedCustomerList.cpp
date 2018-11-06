#include<exception>
#include<iostream>
#include "SortedCustomerList.h"



SortedCustomerList::SortedCustomerList()
{
	make_empty();
}


SortedCustomerList::~SortedCustomerList()
{
	make_empty();
}





bool SortedCustomerList::is_full()
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

int SortedCustomerList::get_length()
{
	return length;
}

void SortedCustomerList::make_empty()
{
	customerList = nullptr;
	currentPosition = nullptr;
	length = 0;
}

bool SortedCustomerList::is_empty()
{
	return (length == 0 && customerList == nullptr);
}

Customer SortedCustomerList::get_customer_details(int customIndex)
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

bool SortedCustomerList::put_customer_details(Customer customer)
{
	if (is_full())
		return false;

	NodeType* newNode = new NodeType;
	newNode->info = customer;
	NodeType* curr = customerList;
	NodeType* prev = nullptr;

	bool posFound = false;

	while (curr != nullptr && !posFound) {
		if (curr->info.get_age() < customer.get_age()) {
			prev = curr;
			curr = curr->next;
		}
		else {
			posFound = true;
			newNode->next = curr;
			if (prev == nullptr) {
				customerList = newNode;
			}
			else {
				prev->next = newNode;
			}
		}
	}
	if (!posFound)
	{
		posFound = true;
		newNode->next = curr;
		if (prev == nullptr) {
			customerList = newNode;
		}
		else {
			prev->next = newNode;
		}
	}
	length++;
	return posFound;

}

bool SortedCustomerList::delete_customer_details(int index)
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

void SortedCustomerList::reset_list_customer_list()
{
	currentPosition = nullptr;
}

bool SortedCustomerList::has_next_customer()
{
	if (currentPosition == nullptr)
		return (customerList != nullptr);

	return (currentPosition->next != nullptr);
}

Customer SortedCustomerList::get_next_customer()
{
	currentPosition = ((currentPosition == nullptr) ? customerList : currentPosition->next);
	return currentPosition->info;

}

void SortedCustomerList::print_customer_list()
{
	for (int index = 0; index < length; index++)
	{
		if (has_next_customer())
			get_next_customer().print_customer_deatails();
	}

}

