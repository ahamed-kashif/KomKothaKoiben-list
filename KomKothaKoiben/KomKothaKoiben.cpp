#include <iostream>
#include "PhoneNumber.h"
#include "Customer.h"
#include "UnsortedCustomerList.h"
#include "SortedCustomerList.h"
#include "STLUnsortedCustomerList.h"

using namespace std;
int main()
{
	PhoneNumber numOne, numTwo, numThree, numFour, numFive;
	numOne.set_phone_number("01783511730");
	numOne.set_operator_name("KomKothaKoiben");

	numTwo.set_phone_number("01715583543");
	numTwo.set_operator_name("Grameenphone");

	numThree.set_phone_number("01998021382");
	numThree.set_operator_name("Banglalink");

	numFour.set_phone_number("01675743091");
	numFour.set_operator_name("Airtel");

	numFive.set_phone_number("01815565307");
	numFive.set_operator_name("Robi");

	Customer customer;
	customer.set_name("Oyon");
	customer.set_father_name("Anudip");
	customer.set_mother_name("Promila");
	string nid = "19992222341";
	char customerNID[11];
	for (int index = 0; index < 11; index++)
	{
		customerNID[index] = nid[index];
	}
	customer.set_age(19);
	customer.set_gender('M');
	customer.set_national_ID(customerNID);
	customer.set_present_address("Dhaka");
	customer.set_permanent_address("Mymensingh");
	customer.set_marital_status(false);
	customer.set_customer_index(1);
	customer.set_eye_color("brown");
	customer.set_hair_color("black");
	customer.set_height(5.5);
	customer.set_weight(42);
	customer.insert_phone_number(numOne);
	customer.insert_phone_number(numTwo);
	//customer.delete_phone_number(0);

	//customer.print_customer_deatails();

	Customer customer1;
	customer1.set_name("Noyon");
	customer1.set_father_name("Anudipa");
	customer1.set_mother_name("PromilaD");
	string nid1 = "19992222344";
	char customerNID1[11];
	for (int index1 = 0; index1 < 11; index1++)
	{
		customerNID1[index1] = nid1[index1];
	}
	customer1.set_age(20);
	customer1.set_gender('M');
	customer1.set_national_ID(customerNID1);
	customer1.set_present_address("Dhakaa");
	customer1.set_permanent_address("Mymensinghh");
	customer1.set_marital_status(false);
	customer1.set_customer_index(2);
	customer1.set_eye_color("browns");
	customer1.set_hair_color("blacks");
	customer1.set_height(6.5);
	customer1.set_weight(55);
	customer1.insert_phone_number(numThree);
	customer1.insert_phone_number(numFour);

	UnsortedCustomerList uncustomer;
	uncustomer.put_customer_details(customer);
	uncustomer.put_customer_details(customer1);

	uncustomer.insert_new_num(1, numFive);


	uncustomer.print_customer_list();
}


