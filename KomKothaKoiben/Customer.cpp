#include "PhoneNumber.h"
#include "Customer.h"



Customer::Customer()
{
	make_empty();
}


Customer::~Customer()
{
	make_empty();
}

bool Customer::insert_phone_number(PhoneNumber phoneNumber)
{
	if (is_full())
		return false;

	NodeType* newNode = new NodeType;
	newNode->info = phoneNumber;


	
	newNode->next = phoneNumberList;
	phoneNumberList = newNode;
	
	length++;
	return true;

}
bool Customer::delete_phone_number(string phoneNumber)
{
	NodeType* curr = phoneNumberList;
	NodeType* prev = nullptr;
	bool found = false;
	while (curr != nullptr && !found) {
		if (curr->info.get_phone_number() == phoneNumber) {
			found = true;
			if (prev == nullptr) {
				phoneNumberList = curr->next;
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

PhoneNumber Customer::get_phone_numbers(string phoneNumber)
{
	NodeType* curr = phoneNumberList;
	bool found = false;
	while (curr != nullptr && !found) {
		if (curr->info.get_phone_number() != phoneNumber)
			curr = curr->next;
		else {
			found = true;
			return curr->info;
		}
	}
	found = false;
	cout << endl;
	cout << "Phone Number is not correct!!" << endl;
	return curr->info;
}

bool Customer::change_operator_name(string phoneNumber, string operatorName)
{
	NodeType* curr = phoneNumberList;
	while (curr != nullptr)
	{
		if (curr->info.get_phone_number() == phoneNumber)
		{
			curr->info.set_operator_name(operatorName);
			cout << endl;
			cout << endl << phoneNumber << " operator name is been changed!!" << endl << endl;
			return true;
		}
		else
		{
			curr = curr->next;
		}
	}
}

void Customer::print_customer_deatails()
{
		NodeType* curr = phoneNumberList;
		int index = 0;
		cout << "Customer Index Number:\t\t" << customerIndex << endl;
		print_person();
		while (curr != nullptr)
		{
			cout << index + 1;
			cout << ".\t";
			curr->info.print_phone_number();
			cout << endl;
			curr = curr->next;
			index++;
		}
		cout << endl;
		cout << endl;
}

int Customer::phone_number_get_length()
{
	return length;
}

void Customer::set_customer_index(int index)
{
	customerIndex = index;
}

int Customer::get_customer_index()
{
	return customerIndex;
}

void Customer::make_empty()
{
	phoneNumberList = nullptr;
	length = 0;
	currentPosition = nullptr;
}

bool Customer::is_full()
{
	return length == 15;
}

bool Customer::is_empty()
{
	return (length==0);
}

void Customer::reset_list()
{
	currentPosition = nullptr;
}