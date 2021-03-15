#include <iostream>
using namespace std;

class Student {
	private:
		int Att, Qui, Ass, Mid, Fin, Grade;
		string Nama;
	public:
		Student() {
			Att = Qui = Ass = Mid = Fin = Grade = 0;
		}
		void Input() {
			cout<<"Nama \t\t: "; cin>>Nama;
			cout<<"Attendance \t: "; cin>>Att;
			cout<<"Quiz \t\t: "; cin>>Qui;
			cout<<"Assignemtn \t: "; cin>>Ass;
			cout<<"Mid Exam \t: "; cin>>Mid;
			cout<<"Final Exam \t: "; cin>>Fin;
		}
		void Output1() {
			cout<<"Nama \t\t: "<<Nama<<endl;
			cout<<"Attendance \t: "<<(Att*10)/100<<endl;
			cout<<"Quiz \t\t: "<<(Qui*10)/100<<endl;
			cout<<"Assignment \t: "<<(Ass*20)/100<<endl;
			cout<<"Mid Exam \t: "<<(Mid*30)/100<<endl;
			cout<<"Final Exam \t: "<<(Fin*30)/100<<endl;
		}
		void Output2() {
			cout<<Nama<<" \t | \t "; Grade_Calc();
		}
		void Grade_Calc() {
			Grade = ((Att*10)/100) + ((Qui*10)/100) + ((Ass*20)/100) + ((Mid*30)/100) + ((Fin*30)/100);
			cout<<Grade<<" (";
			switch (Grade) {
				case 91 ... 100:
					cout<<"A";
					break;
				case 85 ... 90:
					cout<<"A-";
					break;
				case 82 ... 84:
					cout<<"B+";
					break;
				case 78 ... 81:
					cout<<"B";
					break;
				case 75 ... 77:
					cout<<"B-";
					break;
				case 70 ... 74:
					cout<<"C+";
					break;
				case 67 ... 69:
					cout<<"C";
					break;
				case 60 ... 66:
					cout<<"C-";
					break;
				case 40 ... 59:
					cout<<"D";
					break;
				case 0 ... 39:
					cout<<"F";
					break;
			} 
		}
};

int main () {
	
	int Total = 0;
	cout<<"Input student : "; cin>>Total; cout<<"\n";
	
	Student St[Total];
	
	// Input
	for (int x=0; x<Total; x++) {
		cout<<"Input student's "<<x+1<<" Data \n";
		St[x].Input(); cout<<"\n";
	} cout<<"\n\n";
	
	// Output 1
	for (int x=0; x<Total; x++) {
		cout<<"Student's "<<x+1<<" Data \n";
		St[x].Output1(); cout<<"\n";
	} cout<<"\n\n";
	
	// Output 2
	for (int x=0; x<Total; x++) {
		St[x].Output2();
	} cout<<"\n\n\n";
	
	return 0;
}
