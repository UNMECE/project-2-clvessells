#include <iostream>

#include "Project_2.h"

using namespace std;


int main(){
	
	// Create 5 objects of type "Art_Student" and store them in a std::vector
	std::vector<Art_Student *> art_students;
	
	// Student 1
	art_students.push_back(new Art_Student);
	art_students[0]->set_Name("Louise", "Belcher");
	art_students[0]->set_GPA(2.4);
	art_students[0]->set_Grad_Year(2036);
	art_students[0]->set_Grad_Semester("Fall");
	art_students[0]->set_Enrollment_Year(2032);
	art_students[0]->set_Enrollment_Semester("Fall");
	art_students[0]->set_Current_Grad_Level("Undergrad");
	art_students[0]->set_Art_Emphasis("Art Studio");
	
	// Student 2
	art_students.push_back(new Art_Student);
	art_students[1]->set_Name("Bart", "Simpson");
	art_students[1]->set_GPA(1.6);
	art_students[1]->set_Grad_Year(2009);
	art_students[1]->set_Grad_Semester("Summer");
	art_students[1]->set_Enrollment_Year(2004);
	art_students[1]->set_Enrollment_Semester("Fall");
	art_students[1]->set_Current_Grad_Level("Graduate");
	art_students[1]->set_Art_Emphasis("Art History");
	
	// Student 3
	art_students.push_back(new Art_Student);
	art_students[2]->set_Name("Turanga","Leela");
	art_students[2]->set_GPA(4.1);
	art_students[2]->set_Grad_Year(3024);
	art_students[2]->set_Grad_Semester("Fall");
	art_students[2]->set_Enrollment_Year(3021);
	art_students[2]->set_Enrollment_Semester("Spring");
	art_students[2]->set_Current_Grad_Level("Graduate");
	art_students[2]->set_Art_Emphasis("Art Education");
	
	// Student 4
	art_students.push_back(new Art_Student);
	art_students[3]->set_Name("Charlie","Day");
	art_students[3]->set_GPA(0.4);
	art_students[3]->set_Grad_Year(2013);
	art_students[3]->set_Grad_Semester("Spring");
	art_students[3]->set_Enrollment_Year(2022);
	art_students[3]->set_Enrollment_Semester("Sum");
	art_students[3]->set_Current_Grad_Level("Graduate");
	art_students[3]->set_Art_Emphasis("Art History");
	
	// Student 5
	art_students.push_back(new Art_Student);
	art_students[4]->set_Name("Christie","Vessells");
	art_students[4]->set_GPA(3.682);
	art_students[4]->set_Grad_Year(2026);
	art_students[4]->set_Grad_Semester("Spring");
	art_students[4]->set_Enrollment_Year(2020);
	art_students[4]->set_Enrollment_Semester("Summer");
	art_students[4]->set_Current_Grad_Level("Undergraduate");
	art_students[4]->set_Art_Emphasis("Art Education");
	
	
	//Print all Art_Students (auto automatically detects type)
	cout << "\n\n******************************* Art Students *******************************\n" << endl; 
	for (const auto& student : art_students) { 
		student->print(); cout << endl; 
	}
	
	// Create 5 objects of type "Physics Student" and store them in a different std::vector
	std::vector<Physics_Student *> physics_students;
	
	// Student 1
	physics_students.push_back(new Physics_Student);
	physics_students[0]->set_Name("Jane","Goodall");
	physics_students[0]->set_GPA(3.785);
	physics_students[0]->set_Grad_Year(1980);
	physics_students[0]->set_Grad_Semester("Fall");
	physics_students[0]->set_Enrollment_Year(1965);
	physics_students[0]->set_Enrollment_Semester("Fall");
	physics_students[0]->set_Current_Grad_Level("Grad");
	physics_students[0]->set_Concentration("Biophysics");
	
	// Student 2
	physics_students.push_back(new Physics_Student);
	physics_students[1]->set_Name("Kyle", "Richards");
	physics_students[1]->set_GPA(4.0);
	physics_students[1]->set_Grad_Year(1986);
	physics_students[1]->set_Grad_Semester("Fall");
	physics_students[1]->set_Enrollment_Year(1982);
	physics_students[1]->set_Enrollment_Semester("Fall");
	physics_students[1]->set_Current_Grad_Level("Undergraduate");
	physics_students[1]->set_Concentration("Earth and Planetary Sciences");
	
	// Student 3
	physics_students.push_back(new Physics_Student);
	physics_students[2]->set_Name("Nelson","Muntz");
	physics_students[2]->set_GPA(2.253);
	physics_students[2]->set_Grad_Year(1997);
	physics_students[2]->set_Grad_Semester("Summer");
	physics_students[2]->set_Enrollment_Year(2001);
	physics_students[2]->set_Enrollment_Semester("Spring");
	physics_students[2]->set_Current_Grad_Level("Graduate");
	physics_students[2]->set_Concentration("Biophysics");
	
	// Student 4
	physics_students.push_back(new Physics_Student);
	physics_students[3]->set_Name("Miss","Piggy");
	physics_students[3]->set_GPA(4.4);
	physics_students[3]->set_Grad_Year(1978);
	physics_students[3]->set_Grad_Semester("Summer");
	physics_students[3]->set_Enrollment_Year(1972);
	physics_students[3]->set_Enrollment_Semester("Fall");
	physics_students[3]->set_Current_Grad_Level("Undergraduate");
	physics_students[3]->set_Concentration("Earth and Planetary Sciences");
	
	// Student 5
	physics_students.push_back(new Physics_Student);
	physics_students[4]->set_Name("Homer","Simpson");
	physics_students[4]->set_GPA(0.4);
	physics_students[4]->set_Grad_Year(2045);
	physics_students[4]->set_Grad_Semester("Fall");
	physics_students[4]->set_Enrollment_Year(2020);
	physics_students[4]->set_Enrollment_Semester("Spring");
	physics_students[4]->set_Current_Grad_Level("Graduate");
	physics_students[4]->set_Concentration("Biophysics");
	
	
	// Print information for each Physics_Student 
	cout << "\n\n******************************* Physics Students *******************************\n" << endl; 
	for (const auto& student : physics_students) { 
	
		student->print(); cout << endl; 
	}
	
	
	// Open file for writing 
	ofstream outfile("student_info.dat"); 
	
	// Check if the file opened successfully 
	if (!outfile.is_open()) { 
	
		cerr << "Error opening file for writing." << endl; 
		return 1; } 
		
	// Write information for each Art_Student to the file 
	outfile << "Art Students:" << endl; 
	for (const auto& student : art_students) { 
		outfile << "Name: " << student->student_name() << endl; 
		outfile << "GPA: " << student->get_GPA() << endl; 
		outfile << "Graduation Year: " << student->get_Grad_Year() << endl; 
		outfile << "Enrollment Year: " << student->get_Enrollment_Year() << endl; 
		outfile << "Graduation Semester: " << student->get_Grad_Semester() << endl; 
		outfile << "Current Graduation Level: " << student->get_Current_Grad_Level() << endl; 
		outfile << "Enrollment Semester: " << student->get_Enrollment_Semester() << endl; 
		outfile << "Art Emphasis: " << student->get_Art_Emphasis() << endl; outfile << endl; } 
		
	// Write information for each Physics_Student to the file 
	outfile << "Physics Students:" << endl; 
	for (const auto& student : physics_students) { 
	
		outfile << "Name: " << student->student_name() << endl; 
		outfile << "GPA: " << student->get_GPA() << endl; 
		outfile << "Graduation Year: " << student->get_Grad_Year() << endl; 
		outfile << "Enrollment Year: " << student->get_Enrollment_Year() << endl; 
		outfile << "Graduation Semester: " << student->get_Grad_Semester() << endl; 
		outfile << "Current Graduation Level: " << student->get_Current_Grad_Level() << endl; 
		outfile << "Enrollment Semester: " << student->get_Enrollment_Semester() << endl; 
		outfile << "Concentration: " << student->get_Concentration() << endl; 
		outfile << endl; } 
		
	// Close the file 
	outfile.close();
	
	//Delete allocated memory
	
	cout << "\n\n********************************* DELETE ALL MEMORY *********************************" << endl;
	for (auto& student : art_students) { 
	
		delete student; 
		cout << "All Art Student allocated memory has been deleted." << endl;
		
	} 
	
	for (auto& student : physics_students) { 
	
		delete student; 
		cout << "All Physics Student allocated memory has been deleted." << endl;
		
	}
	
	
	
	
}