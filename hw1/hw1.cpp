# include <iostream>
using namespace std;

int main()
{
  int func;
  int num1;
  int num2;
  int rem = num1 % num2;

  cout << "Enter your first number:";
  cin >> num1;

  cout << "Enter function either 1:+ , 2:- , 3:* , 4:/ ";
  cin >> func;

  cout << "Enter your second number: ";
  cin >> num2;

  if(func == 1)
  {
    cout << num1 + num2;
  }

  else if(func == 2)
  {
    cout << num1 - num2;
  }

  else if(func == 3)
  {
    cout << num1 * num2;
  }

  else if(func == 4)
  {
    if(num2 == 0)
    {
      cout << "You cannot devide by zero!";
    }
    else
    {

      cout <<  num1 / num2;
      cout << "Remainder";
      cout <<  rem;
    }
  }

  return 0;
}
