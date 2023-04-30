// (Mussab bin Aziz) mussabpc@gmail.com

#include<iostream>
#include<string>
using namespace std;

//Functions
void menu();
void add();
void display();
void rename();
void del();
void AddSc();
void SearchC();
void delSc();
void disSc();
void registeredC();

//Global Variables
int total=0;
string arr[10][60];
string course[30];
int x;

// Main Function
int main(){
	string choice;
	while(1){
	menu();	
	getline(cin,choice);
	if (choice == "1" || choice == "Add course" || choice == "add course")
	add();
	else if (choice == "2" || choice == "Rename" || choice == "rename")
	rename();
	else if (choice == "3" || choice == "display" || choice == "Display courses")
	display();
	else if (choice == "4" || choice == "Delete course" || choice == "delete course")
	del();
	else if (choice == "5" || choice == "Add student" || choice == "add student to course" ||choice == "add student")
	AddSc();
	else if (choice == "6" || choice == "Delete student" || choice == "delete student")
	delSc();
	else if (choice == "7" || choice == "Display Students" || choice == "display list of students" || choice =="display students")
	disSc();
	else if (choice == "8" || choice == "search" || choice == "Search student" || choice == "Search student by name")
	SearchC();
	else if (choice == "9" || choice == "display all courses" || choice == "display courses" || choice == "Display all registered courses")
	registeredC();
	else if (choice == "10")
	return 0;
	else
	cout<<"\t\t Wrong Input ! \n";
}
	return 0;
}

void add(){
	cout<<"\n \t How many courses you want to Enter: ";
	cin>>x;
	if (cin.fail()) { // check if the input stream fails to read the input
        cout << "\n Invalid input! Please enter an integer.\n";
        cin.clear(); // clear the input stream buffer
        cin.ignore(10000, '\n'); // ignore up to 10000 characters or until a newline character is found
    }
    else{
	
	
	total = total + x;
	if(total == 0){
	cout<<" \t Enter course Name: "<<endl;
	for(int i=0; i<x; i++)
	cin>>course[i];
}
else{
	cout<<"\n \t Enter course Name: "<<endl;
	for(int i=total; i<total+x; i++)
	cin>>course[i];
}
total =total +x;
}
}

void rename(){
	string m,e;
	cout<<"\t Enter the name of course you want to rename: ";
	cin>>e;
	cout<<"\t Enter new name: ";
	cin>>m;
	for(int i=0; i<total; i++){
		if(e==course[i])
		course[i]=m;
	}
	cout<<"\t"<<e<<" has been replaced to "<<m;
	
}
void display(){
	cout<<"\n \t All courses: ";
	for(int i=0; i<total; i++)
	cout<<course[i]<<"  ";
	cout<<endl;
}
void del(){
	string e;
	cout<<"\t Enter the name of course you want to Delete: ";
	cin>>e;
	for(int i=0; i<total; i++){
		if(e==course[i])
		course[i]="";
	}
	cout<<e<<" has been deleted.";
}
void menu(){
	cout<<"\n\t\t-------------------------------------------"<<endl;
	cout<<"\t\t\tStudents Management System "<<endl;
	cout<<"\t\t-------------------------------------------"<<endl<<endl;
	cout<<"1 \tAdd a course \n";
	cout<<"2 \tRename a course \n";
	cout<<"3 \tDisplay list of all courses \n";
	cout<<"4 \tDelete a course \n";
	cout<<"5 \tAdd a student to a course \n";
	cout<<"6 \tDelete a student from a course \n";
	cout<<"7 \tDisplay list of all students of a course \n";
	cout<<"8 \tSearch a student by name \n";
	cout<<"9 \tDisplay all registered courses of a student. \n";
	cout<<"10 \tQuit \n";
	cout<<" \n\tEnter your choice : ";
}


void delSc(){       // Delete a Student From A Course.
	string n,x;
	
 cout<<"\t Enter Name of Course From Which You Want to Delete a Student:  "<<endl;
 cin>>n;
     for (int i =0;i<1;i++){
	 for (int j = 0 ;j<total;j++){
	 	int z=0;
	 	if (n==arr[j][z]){
	 	z=j;
         cout<<"\t Enter Name of Student You Want To Delete From This Course:  "<<endl;
		 cin>>x;
		for (int p = 1;p<=60;p++){
			if (arr[z][p]==x){
				arr[z][p]=" ";
			 }
		   }
		}
 	       }
        } 
       }
       
       
void AddSc(){    // Add Students To a Course
	string n;
	int x,z;
 // for storing the name of courses in first coloum of 2D arry: 
for (int i=0;i<1;i++){
	for (int j = 0;j<total;j++){
		int q=0;
        arr[j][q]=course[j];		
	}
}

 cout<<"\t Enter Name of Course In Which You Want To Add Students: "<<endl;
 cin>>n;
     for (int i =0;i<1;i++){
	 for (int j = 0 ;j<total;j++){
	 	int z=0;
	 	if (n==arr[j][z]){
	 	z=j;
         cout<<"\t Enter Number of Students You Want To Add In This Course: "<<endl;
		 cin>>x;
		for (int p = 1;p<=x;p++){
			cout<<"\t Enter The Name For Student "<<p<<endl;
		  cin>>arr[z][p];
		}
		}
 	  }

     } 
   }
   
   
   void disSc(){   // Display list of all students of a course 
   	string n,x;
	
 cout<<"\t Enter Name of Course Of Which You Want To See All The Students:  "<<endl;
 cin>>n;
     for (int i =0;i<1;i++){
	 for (int j = 0 ;j<total;j++){
	 	int z=0;
	 	if (n==arr[j][z]){
	 	z=j;
		for (int p = 1;p<=60;p++){
				cout<<arr[z][p]<<" ";
			 }
		   
		}
 	  }
    } 
   }
   
   void SearchC(){   //Search Student By Name.
   string s ;
   cout<<"\t Enter Name of Student You Want To Search:"<<endl;
   cin>>s;
   for (int i=0 ;i<total ;i++){
   	for (int j = 0 ;j<60;j++){
   	    if (s==arr[i][j])
   		cout<<s<<endl;
	   }
   }	
   }
   
   void registeredC(){   // For Finding All Registered Courses Of A Student.
       string s ;
       cout<<"\t Enter Name Of Student You Want To Check Registered Courses: "<<endl;
         cin>>s;
        for (int i = 0 ;i<1;i++){
            for (int j = 0 ;j<60;j++){
                int z=0;
                if (arr[z][j]==s){
                    cout<<"\t The student "<<s<<" is present in course "<<arr[0][0];
                }
                int p=1;
                if(arr[p][j]==s){
                    cout<<"\t The student "<<s<<" is present in course "<<arr[1][0]<<endl;
                }
                int q=2;
                if(arr[q][j]==s){
                    cout<<"\t The student "<<s<<" is present in course "<<arr[2][0]<<endl;
                }
                int n=3;
                if(arr[n][j]==s){
                     cout<<"\t The student "<<s<<" is present in course "<<arr[3][0]<<endl;
                }
                int x=4;
                if (arr[x][j]==s){
                      cout<<"\t The student"<<s<<"is present in course"<<arr[4][0]<<endl;
                }
            }
            
        }
       
   }
