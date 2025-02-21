#include<iostream>
#include "Calculator.cpp.h"
using namespace std;
int main()
{
	double a,b;//taking variable from user
	char q;
	cout<<"The opteration for sum is '+' "<<endl;
	cout<<"The operation for subtract is '-' "<<endl;
	cout<<"The operation for product is '*' "<<endl;
	cout<<"The operation for Divide is '/' "<<endl;
	cout<<"The operation for square root is 'r' "<<endl;
	cout<<"The operation for exponentional is n "<<endl;
	cout<<"The operation for percantage  is '%' "<<endl;
	cout<<"The operation for factorial is '!' "<<endl;	
    cout<<"The operation for Table is '^' "<<endl;
	cout<<"Enter oprant=";
	cin>>q;
	cout<<"Enter Number=";
	cin>>a;
	if (q != 'r' && q != '!' && q != '^') {
        cout << "Enter second number: ";
        cin >> b;
    }
	switch (q) {//using swiitch condition 
        case '+':
            sum(a, b);
            break; //break condition 
        case '-':
            sub(a, b);
            break;
        case '*':
            pro(a, b);
            break;
        case '/':
            div(a, b);
            break;
        case 'r':
            sqr(a);
            break;
        case 'n':
            exp(a, b);
            break;
        case '%':
            percentage(a, b);
            break;
        case '!':
            factorial(a);
            break;
         case '^':
            Table(a);
            break;
        default:
            cout << "Error! The operator is not correct." << endl;
            break;
    }
}
void sum(double Aa,double Bb)//function definition 
{
	cout<<"sum="<<Aa+Bb<<endl;
}
void sub(double Cc,double Dd)
{
	cout<<"subtraction="<<Cc-Dd<<endl;
}
void pro(double Ee,double Ff)
{
	cout<<"product ="<<Ee*Ff<<endl;
}
void div(double Gg,double Hh)
{
if (Hh != 0) {
        cout << "Result: " << Gg / Hh << endl;
    } else {
        cout << "Error! Division by zero." << endl; //using if else condition show  the output if condition is not satisfied  
    }
}
void sqr(double Ii)
{
        cout << "Result: " << sqrt(Ii) << endl;
}
void exp(double Jj,double Kk)
{
	cout<<"exponatial is ="<<pow(Jj,Kk)<<endl;
}
void percentage(double total, double percent) {
    double result = (percent / 100.0) * total;
    cout << "Result: " << result << endl;
}
void factorial(int Ll) {
    int fact = 1;
    for (int i = 1; i <= Ll; ++i) {
        fact *= i;
    }
    cout << "Factorial of " << Ll << " is: " << fact << endl;
}
void Table(int Mm) {
    cout << "table of " << Mm << ":" << endl;
    for (int i = 1; i <= 10; ++i) {   //table of given number 
        cout << Mm << " * " << i << " = " << (Mm * i) << endl;
    }
}



