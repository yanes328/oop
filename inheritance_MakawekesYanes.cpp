#include <iostream>


using namespace std;

class Person  {
	private:
		string name;
		char gender;
	
	public:
		Person();
		void setName (string name);
		void setGender (char gender);
		string getName();
		char getGender();
};

class Teacher {
	private:
		int nik;
		string faculty;
	
	public:
		void setNik (int nik);
		int getNik();
		void SetFaculty (string faculty);
		string getFaculty();
		void setData();
		void displayData();
};

class Student {
	private:
		int nim;
		string registration_number;
		string prodi;
	
	public:
		void setNim (int nim);
		void SetRegistrationNumber (string registration_number);
		void setProdi (string prodi);
		int getNim();
		string getRegistrationNumber();
		string getProdi();
};


int main () {
	
	
	
	return 0;
}
