//Create a program with four functions.  

//Unless otherwise directed by you instructor, create an addition, subtraction, multiplication, and division function.  (Four separate functions)

//In the main, ask the user for two numbers and if they would like them added, subtracted, multiplied, or divided.

//Based on this input, call the correct function you created, passing the information by value.

//Show your instructor your working program and upload your .ccp files.


#include<iostream>
using namespace std;
int main()
{
  double num1, num2;
  char ans1;
  

  cout << "Enter two Numbers: ";
  cin >> num1 >> num2;

  cout << "Would you like to add, subtract, multiply, or divide?";
  cin >> ans1;
  {
  
    if (ans1 == 'a', "A", 'add', 'Add')
      {
      cout << num1 << "+" << num2 << " = "<< num1+num2 << endl;
      }
     else if (ans1 == 's', 'S', 'subtract', 'Subtract')
      {
      cout << num1 << "-" << num2 << " = "<< num1-num2 << endl;
      }
    if (ans1 == 'm', 'M', 'multiply', 'Multiply')
      {
      cout << num1 << "*" << num2 << " = "<< num1*num2 << endl; 
      }
    else
      {
      cout << num1 << "/" << num2 << " = "<< num1/num2 << endl; 
      }
    }
      
  return 0;
}