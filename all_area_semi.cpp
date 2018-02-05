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
void Compute(int a, int b, int c, double & area, double & semiperimeter);
//Main Program
int main() {
  //Variable Declarations
  int a, b, c;
  double area, semiperimeter;
  string user_response = "y";
  //Magic Formula
  cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
  //Runs program until user enters "n".
  while (user_response == "y" || user_response == "Y")
	{
	    cout<<"Would you like to do another calculation (Y or N): "<<endl;
	    cin>>user_response;
	}



  return 0;
}
