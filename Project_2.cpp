//   PROJECT 2              Christie Vessells

#include <iostream>
#include "Project_2.h"

using namespace std;
	
// Student Base Class
	
// Constructor(s)
Student::Student() : first_name("UNKNOWN"), last_name("UNKNOWN"), gpa(0.0), grad_year(1999), 
					 enrollment_year(1999), grad_semester("TBD"), enrollment_semester("TBD"), 
					 current_grad_level("Undergrad") {}
	
Student::Student(string first_name, string last_name, double gpa, int grad_year, 
				 int enrollment_year, string grad_semester, string enrollment_semester, 
				 string current_grad_level) 
			 : first_name(first_name), last_name(last_name), gpa(gpa), grad_year(grad_year), 
			   enrollment_year(enrollment_year), grad_semester(grad_semester), 
			   enrollment_semester(enrollment_semester), current_grad_level(current_grad_level) {}	



// Function(s) (if any)
string Student::student_name()const { 

	return first_name + " " + last_name; 
	
}

void Student::print() const { 
	
	cout << "Name: " << student_name() << endl; 
	cout << "GPA: " << gpa << endl; 
	cout << "Graduation Year: " << grad_year << endl; 
	cout << "Enrollment Year: " << enrollment_year << endl; 
	cout << "Graduation Semester: " << grad_semester << endl; 
	cout << "Current Graduation Level: " << current_grad_level << endl; 
	cout << "Enrollment Semester: " << enrollment_semester << endl; 
}


// Getter(s)
double Student::get_GPA() const {
	
	return gpa;
	
}

int Student::get_Grad_Year() const {
	
	return grad_year;
}

int Student::get_Enrollment_Year() const {
	
	return enrollment_year;
}

string Student::get_First_Name() const {
	
	return first_name;
	
}

string Student::get_Last_Name() const {
	
	return last_name;
}

string Student::get_Grad_Semester() const {
	
	return grad_semester;
}

string Student::get_Current_Grad_Level() const {
	
	return current_grad_level;
}

string Student::get_Enrollment_Semester() const {
	
	return enrollment_semester;
	
}


// Setter(s)
void Student::set_GPA(double gpa){
	
	this->gpa = gpa;
	
}

void Student::set_Grad_Year(int grad_year){
	
	this->grad_year = grad_year;
	
}

void Student::set_Enrollment_Year(int enrollment_eear){
	
	this->enrollment_year = enrollment_year;
}

void Student::set_Name(string first_name, string last_name){
	
	this->first_name = first_name; 
	this->last_name = last_name; 
	this->name = first_name + " " + last_name;
	
}

void Student::set_Grad_Semester(string grad_semester){
	
	this->grad_semester = grad_semester;
	
}

void Student::set_Current_Grad_Level(string current_grad_level){
	
	this->current_grad_level = current_grad_level;
	
}

void Student::set_Enrollment_Semester(string enrollment_semester){
	
	this->enrollment_semester = enrollment_semester;
	
}
	
	
// Art Student Derived Class

// Constructor(s)
Art_Student::Art_Student(string first_name, string last_name, double gpa, int grad_year, 
						 int enrollment_year, string grad_semester, string enrollment_semester, 
						 string current_grad_level, string art_emphasis) 
					: Student(first_name, last_name, gpa, grad_year, enrollment_year, 
							  grad_semester, enrollment_semester, current_grad_level), 
							  art_emphasis(art_emphasis) {}


/* Destructor 
Art_Student::~Art_Student() {} */

//Print FUnction
void Art_Student::print() const { 
	
	Student::print(); cout << "Art Emphasis: " << art_emphasis << endl; 
	
}

// Getter(s)
string Art_Student::get_Art_Emphasis() const { 

	return art_emphasis; 
	
}


// Setter(s)
void Art_Student::set_Art_Emphasis(string art_emphasis) { 

	this->art_emphasis = art_emphasis; 
	
}	
  
 
// Physics Student Derived Class	
	
// Constructor(s)
Physics_Student::Physics_Student(string first_name, string last_name, double gpa, 
								 int grad_year, int enrollment_year, string grad_semester, 
								 string enrollment_semester, string current_grad_level, 
								 string concentration) 
					   : Student(first_name, last_name, gpa, grad_year, enrollment_year, 
								 grad_semester, enrollment_semester, current_grad_level), 
								 concentration(concentration) {}

/* Destructor 
Physics_Student::~Physics_Student() {}*/

// Print function 
void Physics_Student::print() const { 

	Student::print(); cout << "Concentration: " << concentration << endl; 
	
}


// Getter(s)
string Physics_Student::get_Concentration() const {
	
	return concentration;
	
}

// Setter(s)
void Physics_Student::set_Concentration(string concentration) { 

	this->concentration = concentration; 
	
}

