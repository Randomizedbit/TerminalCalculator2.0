//standard library lol i can't spell
#include <iostream>
////////////////////

//The purpose of this application is to provide a well.. a Calculator for Terminal Users so yeah!
//Created using GCC/G++ (Yes GCC/G++ Cry about it)

//Main function 
int main(void)
{
    //initing a, b and sum so I don't have to add them to each switch case (You save more time) you probably hate the fact that i used a switch case shutup if it works it works!
    int option; 
    int a; 
    int b;
    int sum;

  //intro to Terminal Calculator
  //yes yes I know its ugly.
    std::cout << "Please do Note that if you want to switch from addition to Subtraction you must force the application to stop and run it again (CTRL+C) I will create a function later\n\n";
    std::cout << "Terminal_Calculator2.0\n\n\n please pick an option (1)add, (2)Subtract, (3)Multiply, (4)Divide: ";
    std::cin >> option;


  //while loop option
  //If the user inputs either 1 2 or 3 switch to option >> case 1 || 2 || 3>> code:: still trying to figure out how to loop the code back around so users can select another option
 while(option == 1 || 2 || 3 || 4 || 5)
 {
     switch(option)
     {

        case 1: {
             //perfect code (in my eyes)
             //Addition
             std::cout << "\n\n Add \n\n";
             std::cout << "Please Enter A Number: ";
             std::cin >> a;
             std::cout << "Please Enter Another Number: ";
             std::cin >> b;
                sum = a + b;
             std::cout << "\n\n\n";
             std::cout << "---------- ";
             std::cout << "Total: " << sum;
             std::cout << " ----------";
             //I mean look at it!
             break;
            }

        case 2: {
             //Subtraction
             std::cout << "\n\n Subtract \n\n";
             std::cout << "Please Enter A Number: ";
             std::cin >> a;
             std::cout << "Please Enter Another Number: ";
             std::cin >> b;
                sum = a - b;
             std::cout << "\n\n\n";
             std::cout << "---------- ";
             std::cout << "Total: " << sum;
             std::cout << " ----------";

            break;
        }

        case 3: {

            std::cout << "\n\n Multiply \n\n";
             std::cout << "Please Enter A Number: ";
             std::cin >> a;
             std::cout << "Please Enter Another Number: ";
             std::cin >> b;
                sum = a * b;
             std::cout << "\n\n\n";
             std::cout << "---------- ";
             std::cout << "Total: " << sum;
             std::cout << " ----------";
            break;

        }

        case 4: {

            std::cout << "\n\n Divide \n\n";
             std::cout << "Please Enter A Number: ";
             std::cin >> a;
             std::cout << "Please Enter Another Number: ";
             std::cin >> b;
                sum = a / b;
             std::cout << "\n\n\n";
             std::cout << "---------- ";
             std::cout << "Total: " << sum;
             std::cout << " ----------";

            break;

        }

            
     }

     }

    return 0;
}