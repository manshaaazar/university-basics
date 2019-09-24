#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
class UB
{
public:
	void  gesture_UB()
	{
		cout << "Welcome To University Basics";
	}
	void ch()
	{
		cout << "1 :For Transport\n"
			<< "2 :For Library\n";
	}
};
class transport :public UB
{
public:
	void about_us()
	{
		cout << setw(10) << "About University Transport Faculty::" << endl
			<< "Deputy Director:" << setw(4) << "Asad Umer" << endl
			<< "Assistant Director:" << setw(4) << "Usman Shanwari" << endl
			<< "Transport Office:" << setw(4) << "Aqib Javed" << endl;


	}
};
class Data :public transport
{
protected:
	string name, fname, roll_n, section, ph, email, cty, comment1, comment2, comps, comp;
	int num, day, month, year;
	char choice;
public:
	void get_data()
	{
		cin.ignore();
		cout << "Enter name\n" << endl;
		getline(cin, name);
		cout << "Enter father Name\n" << endl;
		getline(cin, fname);
		cout << "Enter roll number\n" << endl;
		cin >> roll_n;
		cout << "Enter section\n" << endl;
		cin >> section;
		cout << "Enter Semester Number\n" << endl;
		cin >> num;
		cout << "Enter Personal Phone Number\n" << endl;
		cin >> ph;
		cout << "Enter Email Address\n" << endl;
		cin >> email;
		cout << "Enter City Name for transport\n" << endl;
		cin >> cty;
		cout << "Enter current Date(day/month/year):\n" << endl;
		cin >> day >> month >> year;
	}
	void get_compdata()
	{
		cout << "Enter complain subject" << endl;
		cin.ignore();
		getline(cin, comps);
		cout << "Enter Your Complain\n\n";
		getline(cin, comp);
	}
	void get_comment()
	{
		cin.ignore();
		cout << "Write Reason why are you leaving university transport\n";
		getline(cin, comment1);
	}
	void gesture()
	{
		cout << "Thank you for using our services" << endl;
	}


	void show_routes()
	{
		cout << "Route Names::\n"
			<< "-->Gujrat General bus stand" << setw(30)
			<< "-->Gujrat Fawara chowk\n"
			<< "-->Gujrat Sargodha Road" << setw(34)
			<< "-->Gujrat Railway Road\n"
			<< "-->Gujrat Shadiwal Road" << setw(25)
			<< "-->Jalaal Pur\n"
			<< "-->Bhimbher" << setw(38)
			<< "-->Head Marala\n"
			<< "-->Chopala" << setw(43)
			<< "-->Mandi Bhawaldin\n"
			<< "-->Kharian" << setw(32)
			<< "-->Dina\n"
			<< "-->Gujranwala" << setw(31)
			<< "-->Jhelum\n"
			<< "-->Daska" << setw(37)
			<< "-->Sialkot\n"
			<< "-->Ali Pur Chatha" << setw(30)
			<< "-->Wazirabad\n";
	}

};

class forms :public Data
{
public:
	void create_joinform()
	{
		ofstream obj;
		obj.open("student_Transport_joinform.text", ios::out);
		obj << setw(60) << "UOG TRANSPORT FORM\n";
		obj << "Form Type: Transport Hiring form\n";
		obj << setw(19) << "Date:" << day << "-" << month << "-" << year << "\n";
		obj << setfill('-') << setw(100) << "\n\n";
		obj << setfill('-') << setw(100) << "\n\n";
		obj << "Student Details::\n";
		obj << "Student Name:" << name << "\n";
		obj << "Student Father Name:" << fname << "\n";
		obj << "Student Roll Number:" << roll_n << "\n";
		obj << "Student Section:" << section << "\n";
		obj << "Student Ongoing Semester:" << num << "\n";
		obj << "Student Personal Phone Number:" << ph << "\n";
		obj << "Student Email:" << email << "\n";
		obj << "Student Selected city for transport:" << cty << "\n";
		obj << setfill('-') << setw(100) << "\n\n";
		obj << setfill('-') << setw(100) << "\n\n";
		obj << "Payment Method::" << endl << "\n";
		obj << "Transport Fee:" << "Rs/6000 per semester" << "\n";
		obj << "Please submit fee in any bank situated in university along form" << "\n";
		obj << "Bank stamp:" << "________" << "\n\n\n";
		obj << setfill('-') << setw(100) << "\n\n";
		obj << setfill('-') << setw(100) << "\n\n";
		obj << "Required Signatures:\n";
		obj << "Student Signatures:" << "________\n" << "\n";
		obj << "Transport Controller signatures:" << "________\n";
		obj << "Note: Please After payment submit form to transport reception\n";
		obj.close();
	}
	void creat_leaveform()
	{
		ofstream obj;
		obj.open("Student_transport_leave_form.text", ios::out);
		obj << setw(60) << "UOG TRANSPORT FORM\n"
			<< "Form Type: Transport leaving form\n"
			<< setw(19) << "Date:" << day << "-" << month << "-" << year << "\n"
			<< setfill('-') << setw(100) << "\n\n"
			<< setfill('-') << setw(100) << "\n\n"
			<< "Student Details::\n"
			<< "Student Name:" << name << "\n"
			<< "Student Father Name:" << fname << "\n"
			<< "Student Roll Number:" << roll_n << "\n"
			<< "Student Ongoing Semester:" << num << "\n"
			<< "Student Personal Phone Number:" << ph << "\n"
			<< "Student Email:" << email << "\n"
			<< "Student Selected city for transport:" << cty << "\n"
			<< setfill('-') << setw(100) << "\n\n"
			<< setfill('-') << setw(100) << "\n\n"
			<< "Reason why Student leaving university transport:\n"
			<< comment1 << endl
			<< setfill('-') << setw(100) << "\n\n"
			<< setfill('-') << setw(100) << "\n\n"
			<< "Required Signatures::\n"
			<< "Student Signatures:" << "________\n"
			<< "Transport Controller signatures:" << "________\n"
			<< "Note: Please After payment submit form at transport reception\n";
		obj.close();

	}
	void complain_form()
	{
		ofstream obj;
		obj.open("complain_form.text", ios::out);
		obj << setw(60) << "Transport Form\n\n"
			<< setw(10) << "Form type: Complain Form\n\n"
			<< setw(10) << "Date:" << day << "/" << month << "/" << "year\n\n"
			<< setfill('-') << setw(100) << "\n\n"
			<< setfill('-') << setw(100) << "\n\n"
			<< "Complaint Subject:\n\n" << comps
			<< "Student Complain:\n\n" << comp
			<< "\n\n\nNote: Please submit this at transport reception\n\n";
		obj.close();

	}

};
class choicess :public forms
{
private:
	int num;
public:
	void choices()
	{
		choicess c;
		c.show_routes();
		cout << "\nEnter your choice::" << endl
			<< "\nIF your city exist in above table PRESS (y)" << endl
			<< "\nIF NOT  PRESS(n)" << endl
			<< "\nTo leave university transport Press (l)" << endl
			<< "\nFor complain PRESS (c)" << endl
			<< "\nAbout transport Faculty Press (a)" << endl;
		cin >> choice;

		switch (choice)
		{
		case 'y':
		{  system("CLS");
		cout << "Please fill the form::" << endl;
		c.get_data();
		c.create_joinform();
		c.gesture();
		cout << "\n\n\nTo go transport menu (Press 1 )\n"
			<< "To exit (Press 2)";
		cin >> num;
		if (num == 1)
		{
			system("CLS");
			c.choices();
		}
		else if (num == 2) {
			break;
		}
		break;
		}
		case 'n':
		{   system("CLS");
		cout << "Transport is not available in your area" << endl;
		cout << "\n\n\nTo go transport menu (Press 1 )\n"
			<< "To exit (Press 2)";
		cin >> num;
		if (num == 1)
		{
			system("CLS");
			c.choices();
		}
		else if (num == 2) {
			break;
		}
		break;
		}
		case 'l':
		{   system("CLS");
		cout << "Please fill the form" << endl;
		c.get_data();
		c.get_comment();
		c.creat_leaveform();
		c.gesture();
		cout << "\n\n\nTo go transport menu (Press 1 )\n"
			<< "To exit (Press 2)";
		cin >> num;
		if (num == 1)
		{
			system("CLS");
			c.choices();
		}
		else if (num == 2) {
			break;
		}
		break;
		}
		case 'a':
		{   system("CLS");
		c.about_us();
		cout << "\n\n\nTo go transport menu (Press 1 )\n"
			<< "To exit (Press 2)";
		cin >> num;
		if (num == 1)
		{
			system("CLS");
			c.choices();
		}
		else if (num == 2) {
			break;
		}
		break;
		}
		case 'c':
		{

			system("CLS");
			c.get_compdata();
			c.complain_form();
			c.gesture();
			cout << "\n\n\nTo go transport menu (Press 1 )\n"
				<< "To exit (Press 2)";
			cin >> num;
			if (num == 1)
			{
				system("CLS");
				c.choices();
			}
			else if (num == 2) {
				break;
			}
			break;
		}
		default:
			cout << "Invalid Entry";
		}
	}
};
class library :public UB
{
protected:
	int num2, num3;
	string f;
public:

	void security()
	{
		{    system("CLS");
		cout.width(106);
		cout << "Welcome to Library" << endl;
		cout.width(54);
		cout << "List of Library Functions  " << endl;
		cout.width(71);
		cout << "1:For the issue of book" << endl;
		cout.width(64);
		cout << "2:To return book" << endl;
		cout.width(81);
		cout << "3:To became the Member of library" << endl;
		cout.width(82);
		cout << "4:For the Issue Of MemberShip Card" << endl;
		cout.width(75);
		cout << "5:To Check Library Website " << endl;
		cout << "Enter number according to list : ";
		cout.width(72);
		cin >> num3;
		}
	}
};
class lib :public library
{
private:
	string name, r, department, section, smester, pass, roll_no, book_name, father_name, fee, site = "hec.digital.library.uogonthehub";
	long int fine;
	int num2;
public:
	void librarian()
	{
		if (num3 == 1)
		{
		options:
			system("CLS");
			cout.width(82);
			cout << "Enter the Name of the Candidate : ";
			cin.ignore();
			getline(cin, name);
			cout.width(70);
			cout << "Enter the Book Name : ";
			getline(cin, book_name);
			cout.width(81);
			cout << "Enter the Roll No of Candidate : ";
			cin >> roll_no;

			cout << endl;
			cout.width(88);
			cout << "Successfully Book issued to Candidate : " << name << endl;
			cout.width(58);
			cout << "Roll No : " << roll_no << endl;
			cout.width(64);
			cout << "And Book Name : " << book_name << endl;
			cout.width(63);
			cout << "For 14 days ,OK" << endl;
			cout << "do you want issue again a book (press 1) or press 2 for menu" << endl;
			cin >> num3;
			if (num3 == 1)
			{
				goto options;
			}
			else {
				lib obj1;
				obj1.security();
				obj1.librarian();
			}

		}
		else if (num3 == 2)
		{
		option:
			system("CLS");
			cout.width(63);
			cout << "Book Name is : ";
			cin.ignore();
			getline(cin, book_name);
			cout.width(66);
			cout << "Name of Student : ";
			getline(cin, name);
			cout.width(73);
			cout << "Roll No of the student : ";
			getline(cin, roll_no);
			cout.width(75);
			cout << "Book returned in 14 days : ";
			cin >> r;

			if (r == "yes")
			{
				cout.width(70);
				cout << "OK ,Student Discharged" << endl;
			}
			else
			{

				cout << "Enter over days of issued book : ";
				cin >> num3;
				cout.width(63);
				cout << "Student Name : " << name << endl;
				cout.width(58);
				cout << "Roll NO : " << roll_no << endl;
				cout.width(88);
				fine = 1;
				fine = 50 * num3;

				cout << "Has been Charged of 50 rupees par day : " << fine << endl;
			nope:
				cout << "Received Fine or Not : ";
				cin >> r;
				if (r == "yes")
				{
					cout.width(62);
					cout << "Ok ,Discharged" << endl;
				}
				else
				{
					cout.width(63);
					cout << "Complain to HOD" << endl;
					goto nope;
				}
			}

			cout << "do you want return again a book (press 1) or press 2 for menu" << endl;
			cin >> num3;
			if (num3 == 1)
			{
				goto option;
			}
			else {
				lib obj1;
				obj1.security();
				obj1.librarian();
			}
		}
		else if (num3 == 3)
		{
		member:
			system("CLS");
			cout.width(75);
			cout << "Enter the candidate Name : ";
			cin.ignore();
			getline(cin, name);
			cout.width(78);
			cout << "Enter the candidate Roll No : ";
			getline(cin, roll_no);
			cout.width(78);
			cout << "Enter Candidate Father Name : ";
			getline(cin, father_name);
			cout.width(69);
			cout << "Enter Your Smester : ";
			getline(cin, smester);
			cout.width(72);
			cout << "Enter your Department : ";
			getline(cin, department);
			cout.width(69);
			cout << "Enter Your Section : ";
			getline(cin, section);
		pay:
			cout << "Pay Fee OF Membership Of 6 Months 6260 : ";
			cin >> r;
			if (r == "yes")
			{
				cout.width(63);
				cout << "Student Name : " << name << endl;
				cout.width(62);
				cout << "Father Name : " << father_name << endl;
				cout.width(61);
				cout << "In Smester : " << smester << endl;
				cout.width(58);
				cout << "Roll No : " << roll_no << endl;
				cout.width(65);
				cout << "In Department  : " << department << endl;
				cout.width(61);
				cout << "In Section : " << section << endl;
				cout.width(93);
				cout << "Became the Member of UOG Library Successfully" << endl;
				cout.width(91);
				cout << "Get Your Membership Card from admin office " << endl;
			}
			else
			{
				cout.width(77);
				cout << "First pay 6260 rupees fee,Sir" << endl;
				goto pay;
			}
			cout << "do you want issue membership again  (press 1) or press 2 for menu" << endl;
			cin >> num3;
			if (num3 == 1)
			{
				goto member;
			}
			else {
				lib obj1;
				obj1.security();
				obj1.librarian();
			}
		}
		else if (num3 == 4)
		{
		card:
			system("CLS");
			cout.width(97);
			cout << "1:Did't get Card after completing Membership Form" << endl;
			cout.width(64);
			cout << "2:You Lost Card " << endl;
			cout.width(68);
			cout << "3:Some other reason " << endl;
		fax:
			cout << "Enter any number to continue : ";
			cin >> num2;
			if (num2 == 1)
			{
				cout.width(100);
				cout << "A message Sent to Admin,Please get your card ,thankx" << endl;
			}
			else if (num2 == 2)
			{
				cout.width(76);
				cout << "Pay Charges of 260 Rupees,ok" << endl;
			nest:
				cout << "Did You received the charges of 260 rupees : ";
				cin >> r;
				if (r == "yes")
				{
					cout.width(76);
					cout << "Get your Card From Admin ,OK" << endl;
				}
				else
				{
					cout.width(81);
					cout << "Please pay charges of 260 rupees " << endl;
					goto nest;
				}
			}
			else if (num2 == 3)
			{
				cout.width(76);
				cout << "Pay Charges of 260 Rupees,ok" << endl;
			test:
				cout << "Did You received the charges of 260 rupees : ";
				cin >> r;
				if (r == "yes")
				{
					cout.width(76);
					cout << "Get your Card From Admin ,OK" << endl;
				}
				else
				{
					cout.width(81);
					cout << "Please pay charges of 260 rupees " << endl;
					goto test;
				}
			}
			else
			{
				cout << "Enter invalid entery..please ";
				goto fax;
			}
			cout << "do you want issue membership card again  (press 1) or press 2 for menu" << endl;
			cin >> num3;
			if (num3 == 1)
			{
				goto card;
			}
			else {
				lib obj1;
				obj1.security();
				obj1.librarian();
			}
		}
		else if (num3 == 5)
		{
		web:
			system("CLS");
			cout.width(69);
			cout << "Library Website is : " << site << endl;
			cout << "\n\n\ndo you want see again website address  (press 1) or press 2 for transport  menu" << endl;
			cin >> num3;
			if (num3 == 1)
			{
				goto web;
			}
			else {
				lib obj1;
				obj1.security();
				obj1.librarian();
			}

		}

	}
};

int main()
{
	int nmbr;
	choicess object;
	object.gesture_UB();
	cout << endl;
	object.ch();
	cin >> nmbr;
	switch (nmbr)
	{
	case 1:
	{   system("CLS");
	object.choices();
	break;
	}

	case 2:
	{
		system("CLS");
		lib obj;
		obj.security();
		obj.librarian();
		break;
	}
	}
	return 0;
}
