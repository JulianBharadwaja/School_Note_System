#include<fstream> //file stream => it contains all the functions and objects we need to manipulate files from the OS.
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	int sel = 0;
	while(true){
		cout << "School Control\n\n";
		cout << "1.Add Student\n";
		cout << "2.Add Student's Note'\n";
		cout << "3.Search Student\n";
		cout << "4.Read Kardex\n";
		cout << "5.Print Kardex\n";
		cout << "6.Exit\n";
		cout << "Your Choice! : ";
		cin >> sel;
		switch(sel){
			case 1 : AddStudent();break;
			case 2 : AddNote();break;
			case 3 : SearchStudent();break;
			case 4 : ReadKardex();break;
			case 5 : PrintKardex();break;
			case 6 : return 0;break;
			default : break;
		}
	}
	return 0;
}
