#include <iostream>
#include "PhoneNumber.h"
#include "Customer.h"

int main()
{
	PhoneNumber numOne, numTwo, numThree, numFour;
	numOne.set_phone_number("01783511730");
	numOne.set_operator_name("GP");

	numTwo.set_phone_number("01715583543");
	numTwo.set_operator_name("Grameenphone");

	numThree.set_phone_number("01998021382");
	numThree.set_operator_name("Banglalink");

	numFour.set_phone_number("01675743091");
	numFour.set_operator_name("Airtel");


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

	customer.print_customer_deatails();

}


