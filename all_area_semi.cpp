/***********************************************************
Name:  Juan Perez   Z#: 23026404
Course: Foundations of Computer Science (COP3014)
Professor: Dr. Lofton Bullard
Due Date: 02/6/18      Due Time: 11:59 PM
Total Points: 10     Assignment 1: all_area_semi

Description: This program computes the area of an arbitrary triangle
*************************************************************/
//Libraries
#include <iostream> //standard library for i/o
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
//Function Prototype
//Function that computes the area and perimeter of a triangle
//based on the length of the sides.
//The function should use five parameters –
//three call by value parameters (a, b, c) that provide the
//lengths of the edges and two call by reference parameters
//(area, semiperimeter) that stores the computed area and perimeter.
void Compute(double a, double b, double c, double & area, double & semiperimeter);
//Main Program
int main() {
  //Variable Declarations
  double a, b, c, area, semiperimeter;
  string user_response = "y";
  //Magic Formula
  cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
  //Runs program until user enters "n".
  while (user_response == "y" || user_response == "Y")
	{
      //Function Call.
      Compute(a, b, c, area, semiperimeter);

	    cout<<"Would you like to do another calculation (Y or N): "<<endl;
	    cin>>user_response;
	}
  return 0;
}
//Function Definitions
//Name:  Compute
//Precondition: The varialbes a, b, c, area, and semiperimeter have not been initialized
//Postcondition: The variables have been initialized by the user and prints results.
//Description: Get input values from user and uses first three parameters
//that initializes three sides. The three sides are used to calcuate the semiperimeter
//and the area.
void Compute(double a, double b, double c, double & area, double & s){

  std::cout << "Please enter the first side" << '\n';
  std::cin >> a;
  std::cout << "Please enter the second side" << '\n';
  std::cin >> b;
  std::cout << "Please enter the third side" << '\n';
  std::cin >> c;
  //Condition statements that one side must be
  //greater that the sum of two other sides
  if ((a+b) > c
      && (b+c) > a
      && (a+c) > b) {
        //calculations
        s = (a+b+c)/2;
        area = sqrt(((s-a)*(s-b)*(s-c))*s);
        //Printed outputs
        std::cout << "The semiperimeter of the triangle is: " << s << '\n';
        std::cout << "The area of the " << area << '\n';
  } else {
    std::cout << "You have entered invalid sides" << '\n';
  }
  return;
}
