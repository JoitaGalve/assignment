#include <iostream>
using namespace std;

int main(){
  char operation;
  double num1, num2, result;

  cout << "Hola!! This is a simple calculator" << endl;
  cout << endl;
    
  cout << "------------------------------------------------------"<< endl;
  cout << endl;
  
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  cout <<"Enter an operation(+, -, *, /): ";
  cin >> operation;

  switch(operation){
    case '+':
        result = num1 + num2;
        break;

    case'-':
    result = num1 - num2;
    break;

    case'*':
        result = num1 * num2;
        break;

    case'/':
      if(num2 != 0){
        result = num1/num2;
      }
    else{
      cout <<"Error: Division by zero is restricted" << endl;
      return 1;
    }
    break;
    default:
          cout <<"Invalid operator" << endl;
          return 1;
  }

  cout << "Result is: " << result << endl;
  return 0;
}