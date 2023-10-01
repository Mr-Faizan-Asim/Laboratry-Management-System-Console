#include<iostream>
#include<windows.h>
using namespace std;
int chose_field();
void gotoxy(int x,int y);
void every_page();
int to_enter_record(int option_select);
void to_see_record(int option_select,int num_of_records);
class labortary
{
    public:
    string name,father_name;
    float test_fee;
    string test_name;
    float tests;

};

main()
{
labortary lab;
int option_select,num_of_records;
back1:
every_page();
option_select = chose_field();
if(option_select == 1)
{
    num_of_records = to_enter_record(option_select);
}
else if(option_select == 2)
{
    to_see_record(option_select,num_of_records);
    goto back1;
}
}

void to_see_record(int option_select,int num_of_records)
{

    labortary lab2[100];
    while(option_select == 2)
        {
        for(int i = 0 ; i<num_of_records ; i++)
        {
        cout<<endl<<endl;
        cout<<"Patient Name            :   "<<lab2[100].name<<endl;
        cout<<"Patient Father Name     :   "<<lab2[100].father_name<<endl;
        cout<<"Fee                     :   "<<lab2[100].test_fee<<endl;
        cout<<"_________________________________________________________________________"<<endl;    
        Sleep(100);
        }
        cout<<"Is You want to Enter Another Record(1/0): ";
        cin>>option_select;
}
}

int to_enter_record(int option_select)
{

labortary labor[100];
every_page();
cout<<endl<<endl;
int i = 0;
int n = 0;
  while(option_select == 1  && i < 100 )
        {   cout<<endl<<endl<<endl;
            cout<<"Enter Patient Name: ";
            cin>>labor[i].name;
            cout<<"Enter Patient Father Name: ";
            cin>>labor[i].father_name;
            cout<<"Enter Number of Test: ";
            cin>>labor[i].tests;
            cout<<"Enter Test Fee: ";
            cin>>labor[i].test_fee;
            labor[i].test_fee = labor[i].test_fee*labor[i].tests;
            i = i + 1;
            n = n + 1;
            cout<<"Is You want to Enter Another Record(1/0): ";
            cin>>option_select;
            system("cls");
        }
    return n;
}
        
void every_page()
{
system("cls");
gotoxy(38,5);
cout<<"*********************************************************************************************"<<endl;
gotoxy(38,6);
cout<<"#                                  LABORATORY MANAGEMENT SYTEM                              #"<<endl;
gotoxy(38,7);
cout<<"*********************************************************************************************"<<endl;

}

int chose_field()
{
int field;

cout<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                 #########################################################################"<<endl;
cout<<"                                                 #                                                                       #"<<endl;
cout<<"                                                 #                                                                       #"<<endl;
cout<<"                                                 #                       Choose One Of the Option                        #"<<endl;
cout<<"                                                 #                       _______________________                         #"<<endl;
cout<<"                                                 #                                                                       #"<<endl;
cout<<"                                                 #                         1. Enter New Lab Test                         #"<<endl;
cout<<"                                                 #                                                                       #"<<endl;
cout<<"                                                 #                         2. Details of Lab Tests                       #"<<endl;
cout<<"                                                 #                                                                       #"<<endl;
cout<<"                                                 #                         3. Delete Student Record                      #"<<endl;
cout<<"                                                 #                                                                       #"<<endl;
cout<<"                                                 #                         4. Show Bill of Patient                       #"<<endl;
cout<<"                                                 #                                                                       #"<<endl;
cout<<"                                                 #                        Enter Your Field Number:                       #"<<endl;
cout<<"                                                 #########################################################################"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                                                        EDUCATION MAKE MEN STRONG "<<endl;
cout<<"                                                      _________________________________________________________________"<<endl;
gotoxy(100,27);
cin>>field;
return field;
}

void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);	
}
