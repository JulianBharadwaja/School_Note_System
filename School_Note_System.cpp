#include<fstream> //file stream => it contains all the functions and objects we need to manipulate files from the OS.
#include<iostream>
#include<string>
#include<vector>
using namespace std;


void AddStudent(){
	string temp;
	vector<string>Data;
	cout << "Enter Student's First Name: ";
	cin >> temp;
	Data.push_back(temp);
	cout << "Enter Student's Last Name: ";
	cin >> temp;
	Data.push_back(temp);
	cout << "Enter Student's Phone Numbers: ";
	cin >> temp;
	Data.push_back(temp);	
	cout << "Enter Student's ID Numbers: ";
	cin >> temp;
	Data.push_back(temp);
	string fileName;
	fileName = Data[3]+".dat";
	ofstream file;
	file.open(fileName.c_str());
	file << Data[0] << endl;
	file << Data[1] << endl;
	file << Data[2] << endl;
	file << Data[3] << endl;
	file.close();
}
void AddNote(){
	vector<string> Subject;
	vector<string> Note;
	string temp;
	string student;
	int z = 0;
	cout << "Enter student ID to add note: ";
	cin >> student;
	while(true){
		cout << "\nEnter subject: "; 
		cin >> temp;
		Subject.push_back(temp);
		cout << "Enter note: ";
		cin >> temp;
		Note.push_back(temp);
		cout << "Do you want to continue?[0]Yes[1]No ";
		cin >> z; 
		if(z!=0){
			break;
		}
	}
	string fileName;
	fileName = student + ".cal";
	ofstream file;
	file.open(fileName.c_str());
	for(int i = 0; i != Subject.size() ;i++){
		
	}
	file.close();
}
void SearchStudent(){
	string number;
	cout << "Insert student ID: ";
	cin >> number;
	string fileName;
	fileName = number+".dat";
	ifstream file;
	file.open(fileName.c_str());
	vector<string>data;
	if(file.is_open()){
		file << Subject[i] << " " << Note [i] << endl;
	string in;
	while(!file.eof()){
		file >> in;
		data.push_back(in);
	}
	cout << "First Name: " << data[0] << endl;
	cout << "Last Name: " << data[1] << endl;
	cout << "Phone Number: " << data[2] << endl;
	cout << "Student Number: "<< data[3] << endl;
	file.close();
	}else {
		
	}
	
}
void ReadKardex(){
	
}
void PrintKardex(){
	
}
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
