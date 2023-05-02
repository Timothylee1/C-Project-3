/*!
@file       q.c
@author     Timothy Lee (timothykexin.lee@digipen.edu.sg)
@course     RSE 1201
@section    Tutotial 3
@lab        Lab 3
@date       24/09/2021
@brief      This file contains code for the dispense_change function that takes the inputs
            from the main source file, which are denomination and price of purchase
            and computes the correct combination of change to print the following text to
            standard output stream.

            For example:
            denomination input is 10
            price of product input is 7.61
            The text output will be: 
            2 loonies + 0 half-loonies + 1 quarters + 1 dimes + 0 nickels + 4 pennies
*//*______________________________________________________________________________________*/


#include <stdio.h> // for printf


/*!
@brief dispense_change function takes the assigned variable inputs from 
       the main source file and uses modulus operator to tabulate the 
       correct combination of change to print as an output text.

@param denomination, price_in_cents - variables with assigned values 
                                      from the main source file.
@return returns nothing
*//*____________________________________________________________________*/
void dispense_change(int denomination, int price_in_cents) {

    // initialisation for change combinations.
    int loonies=0, half_loonies=0, quarters=0, dimes=0, nickels=0, pennies=0;
    int change = 0, r = 0;

    change = (denomination*100)-price_in_cents;
    
    loonies = change / 100; //100 cents
    r = change % 100;

    half_loonies = r / 50; //50 cents
    r = r % 50;

    quarters= r / 25; //25 cents
    r = r % 25;

    dimes= r / 10; //10 cents
    r = r % 10;

    nickels= r / 5; //5 cents
    r = r % 5;

    pennies= r / 1; //1 cents
    r = r % 1;

    printf("%d loonies + %d half-loonies + %d quarters + %d dimes + %d nickels + %d pennies\n", loonies, half_loonies, quarters, dimes, nickels, pennies);

}