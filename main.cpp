#include <iostream>
#include <cmath>
  using namespace std;

int main(){
int num1, num2;
char op;
// user prompt
  cout<<"Enter the first number: ";
  cin>>num1;
  cout<<"Enter operator: ";
  cin>>op;
  cout<<"Enter the second number: ";
  cin>>num2;
//Function to check the math operator 
int results;
  if(op == '+'){
  results = num1 + num2;
  }
  else if(op == '-'){
    resulus = num1 - num2;
  }
  else if(op == '/'){
    results = num1 / num2;
  }
  else if(op == '*'){
    results = num1 * num2;
  }
 else(){
 cout<<"Invalid operator";
 }
//print results
cout<<results
return 0;
}
