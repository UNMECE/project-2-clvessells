#ifndef PROJECT_2
#define PROJECT_2

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


 /* Make a base class Student. Make the base class contain all variables 
	that you believe will be common between the base class and derived 
	classes */
	
class Student{
	
	private:
	
		double gpa;
		
		int grad_year;
		int enrollment_year;
		
		string name;
		string last_name;
		string first_name;
		string grad_semester;
		string current_grad_level;
		string enrollment_semester;
		
		
	public:
		
		// Constructor(s)
		Student();
		Student(string first_name, string last_name, double gpa, int grad_year, 
				int enrollment_year, string grad_semester, string enrollment_semester, 
				string current_grad_level);
			
			
		// Destructor(s)
		~Student(){};
				
		// Function(s) (if any)
		string student_name() const;
		void print() const;
		
		// Getter(s)
		double get_GPA() const;
		
		int get_Grad_Year() const;
		int get_Enrollment_Year() const;
		
		string get_First_Name() const;
		string get_Last_Name() const;
		string get_Grad_Semester() const;
		string get_Current_Grad_Level() const;
		string get_Enrollment_Semester() const;
				
		// Setter(s)
		void set_GPA(double gpa);
		void set_Grad_Year(int grad_year);
		void set_Enrollment_Year(int enrollment_year);
		void set_Name(string first_name, string last_name);
		void set_Grad_Semester(string grad_semester);
		void set_Current_Grad_Level(string current_grad_level);
		void set_Enrollment_Semester(string enrollment_semester);
		
};


// Make two derived classes 


/*For "Art_Student" keep track of additional information that 
includes "art_emphasis" that can be one of three values, 
"Art Studio", "Art History", and "Art Education". */

class Art_Student : public Student{
	
	private:
	
		string art_emphasis;
	
	public:
	
		// Constructor(s)
		Art_Student() : Student(){};
		Art_Student(string first_name, string last_name, double gpa, int grad_year, 
					int enrollment_year, string grad_semester, string enrollment_semester, 
					string current_grad_level, string art_emphasis); 
		
		// Destructor(s)
		~Art_Student(){};
		
		// Function(s) (if any)
		void print() const;
		
		// Getter(s)
		string get_Art_Emphasis() const;
		
		// Setter(s)
		void set_Art_Emphasis(string art_emphasis);	
};


//"Physics_Student"
/*For "Physics_Student" add an additional field of "concentration" 
  that can take on values of, "Biophysics" and "Earth and Planetary 
  Sciences".*/

class Physics_Student : public Student{
	
	private:
		
		string concentration;
		
		
	public:
	
		// Constructor(s)
		Physics_Student() : Student() {}
		Physics_Student(string first_name, string last_name, double gpa, int grad_year, 
						int enrollment_year, string grad_semester, string enrollment_semester, 
						string current_grad_level, string concentration);
		
		// Destructor(s)
		~Physics_Student(){}
		
		// Function(s) (if any)
		void print() const;
	
		// Getter(s)
		string get_Concentration() const;
		
		// Setter(s)
		void set_Concentration(string concentration);	
};
	
	
#endif