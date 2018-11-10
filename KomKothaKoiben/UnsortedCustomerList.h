#pragma once
#include "Customer.h"
#include"PhoneNumber.h"

class UnsortedCustomerList
{
public:

	struct NodeType {
		Customer info = Customer();
		NodeType* next = nullptr;
	};
public:
	UnsortedCustomerList();
	~UnsortedCustomerList();
	bool is_full();
	int get_length();
	void make_empty();
	bool is_empty();
	Customer get_customer_details(int);
	bool put_customer_details(Customer);
	bool delete_customer_details(int);
	//Iterator Operations
	void reset_list_customer_list();
	bool has_next_customer();
	Customer get_next_customer();
	//Printing List Contents
	void print_customer_list();

	//phone number updating
	bool insert_new_number(int,PhoneNumber);
	bool delete_phone_number(int,int);
	bool change_operator_name(int, string, string);
private:
	NodeType* customerList = nullptr;
	int length = 0;
	NodeType* currentPosition = nullptr;

};

