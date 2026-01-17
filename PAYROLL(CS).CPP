#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void INSERT();
void DELETES();
void SEARCH();
void LIST();
void EDIT();
void quit();
void calculat(int);
void editmenu();
void menu();
void agecalu(int i);
void save();
void loade();
void intro();
void addemployee();

struct employee
{
	string name, adress, id;
	int age, PN;
	float price, TG, tax;
	float Pen, BS, pay;
	float Wh, Wd, NP, D;
	char gen;
	int d, m, y;
	int day, month, year;
} s[300], *add;

int n;
int num, num1 = 300;
int total = 0;
char choice, choice1, choice2;
int cho = 1;
float TA = 300;
int da, mo, ye;

int main()
{
	cout << "\t\tWELCOME TO OUR PROGRAM." << endl;
	cout << "\t\tENTER TODAY INFORMATION.\n";
	cout << " \t\t\t\t\t\tday   :";
	cin >> da;
	cout << "\t\t\t\t\t\tmonth :";
	cin >> mo;
	cout << " \t\t\t\t\t\tyear  :";
	cin >> ye;

	loade();
	if (cho != 0)
		intro();
	add = new employee[num1];

	while (cho)
	{
		menu();
		switch (choice)
		{
		case 'I':
		case 'i':
			INSERT();
			break;
		case 'D':
		case 'd':
			DELETES();
			break;
		case 'S':
		case 's':
			SEARCH();
			break;
		case 'L':
		case 'l':
			LIST();
			break;
		case 'E':
		case 'e':
			EDIT();
			break;
		case 'A':
		case 'a':
			addemployee();
			break;
		case 'Q':
		case 'q':
			quit();
			break;
		default:
			cout << "\t\tInvalid try again !";
			break;
		}
		save();
	}
}

void addemployee()
{
	cout << "\n ______________________________________________________\n";
	cout << "|  THE SYSTEM CAPACITY IS " << num1 << " EMPLOYEES DATA TAKE AND  |" << endl;
	cout << "|  STORED BUT DO YOU WANT INCREASE THE CAPACITY ?      |" << endl;
	cout << "| _____________________________________________________|\n";
	cout << "\t _______________________________________";
	cout << "\n\t| For yes --------->press Y\t\t|";
	cout << "\n\t| For No ---------->press N\t\t|";
	cout << "\n\t| Enter your choice===> ";
	cin >> choice;
	if (choice == 'Y' || choice == 'y')
	{
		cout << "\t| Enter the number increased by :";
		cin >> num;
		add = new employee[num];
		num1 = num + num1;
	}
	cout << "\t|_______________________________________|\n";
}

void intro()
{
	string x;
	cout << "\n _______________________________________________________\n";
	cout << "|\t       THIS PAYROLL MANAGEMENT SYSTEMS          |";
	cout << "  ";
	cout << " \n|\t\tFROM COMPUTER SCINCE STUDENTS           |";
	cout << " \n|\t \t       GROUP SIX MEMBERS                |";
	cout << "\n|   FULL NAME  \t\t\t  ID NO \t\t|";
	cout << "\n| 1.WONDMAGEGN      MERKEB     13D1679                  |";
	cout << "\n| 2.FASIKAW         YSMAW      1303896                  |";
	cout << "\n| 3.TSEHAYNESH      DEMEKE     1308201                  |";
	cout << "\n| 4.FITSUM          MULATU     1304829                  |";
	cout << "\n| 5.ATSEDE          AZMERAW    1305720                  |";
	cout << "\n| 6.HERMELA         ABEBE      1401950                  |";
	cout << "\n|\t\t\t\t\t\t \t|";
	cout << "\n|\t\t\t\t\t\t \t|";
	cout << "\n|\t\t\tsubmit to Ms : BIRUK            |";
	cout << "\n|\t\t\tsubmit date  : ";
	cout << da << "/" << mo << "/" << ye << "\t|";
	cout << "\n| ENTER ANY KEY TO START  ===>";
	cin >> x;
	cout << "|_______________________________________________________|\n\n";
}

void quit()
{
	cout << "\n| press 0---------->TO STOP THE PROGRAM                  |";
	cout << "\n| press 1---------->TO CONTINUE THE PROGRAM              |";
	cout << "\n| Select your option  ===>";
	cin >> cho;
	if (cho == 0)
	{
		cout << "ARE YOU SURE (Y/N)  -------> ";
		cin >> choice2;
		switch (choice2)
		{
		case 'Y':
		case 'y':
			cout << "\t\tTANKS FOR USED MY PROGRAM";
			cout << "\n\t\t\tGOOD BAY ";
			break;
		case 'N':
		case 'n':
			cho = 1;
			break;
		}
	}
}

void menu()
{
	cout << "\n _______________________________________________________\n";
	cout << "|\t\t*****Payroll management system*****     |";
	cout << "\n| press I---------->TO INSERT NEW DATA                  |";
	cout << "\n| press D---------->TO DELETE RECORD DATA               |";
	cout << "\n| press E---------->TO EDIT RECORD DATA                 |";
	cout << "\n| press S---------->TO SEARCH SPECIFIC FOR DITAL DATA   |";
	cout << "\n| press L---------->TO LIST THE BASIC DATA ALL RECORD   |";
	cout << "\n| press A---------->TO INCREASE  CAPACITY OF THE  SYSTEM|";
	cout << "\n| press Q---------->TO QUIT FROM THE PROGRAM            |";
	cout << "\n| Select your option  ===>";
	cin >> choice;
	cout << "|_______________________________________________________|\n\n";
}
/*This function is work to insert the new data*/
void INSERT()
{
	int choice;
	int check = 0;
	string code;
	cout << "\n _______________________________________________________\n";
	cout << "|\tHow many employee do you want to enter : ";
	cin >> choice;
	for (int i = 1 + total; i <= choice + total; i++)
	{
		cout << "|\t\tEnter the data of employee :" << i;

		cout << "\n| Enter the id number :";
		cin >> code;
		for (int i = 1; i <= total; i++)
		{
			if (code == s[i].id)
			{
				check++;
			}
		}
		if (check == 1)
		{
			cout << "|" << endl;
			cout << "| \tThe id already exist." << endl;
			cout << "| \tTry another id !" << endl;
			cout << "|" << endl;
			check--;
			i--;
		}
		else
		{
			cout << "| Full Name           :";
			cin >> s[i].name;
			cout << "| Gender              :";
			cin >> s[i].gen;
			cout << "| birth DAY           :";
			cin >> s[i].d;
			cout << "| birth month         :";
			cin >> s[i].m;
			cout << "| Birth year          :";
			cin >> s[i].y;
			s[i].id = code;
			cout << "| Phone number        :+2519";
			cin >> s[i].PN;
			cout << "| address             :";
			cin >> s[i].adress;
			cout << "| Enter working hours per days    :";
			cin >> s[i].Wh;
			cout << "| Enter working days per month    :";
			cin >> s[i].Wd;
			cout << "| Enter the pay per hours         :";
			cin >> s[i].pay;
			calculat(i);
			agecalu(i);
			cout << "|\t\tRECORDED SUCCESFULLY CONGRA\n";
		}
	}
	cout << "| ________________________________________________________\n";
	total = choice + total;
}
/*This function is work to list the basic data*/
void LIST()
{
	if (total == 0)
	{
		cout << "\tNo data is enterd to list";
	}
	else
	{
		cout << "\t|*******************************|" << endl;

		for (int i = 1; i <= total; i++)
		{
			cout << "\t|\tdata of employee   :" << i << "   |" << endl;
			cout << "\t| Id no    : " << s[i].id;
			cout << "\t\t|" << endl;
			cout << "\t| Name     : " << s[i].name;
			cout << "\t\t|" << endl;
			cout << "\t| Gender   : " << s[i].gen;
			cout << "\t\t\t|" << endl;
			cout << "\t| age      : " << s[i].age;
			cout << "\t\t\t|" << endl;
			cout << "\t| Net Pay  : " << s[i].NP;
			cout << "\t\t|" << endl;
		}
		cout << "\t*********************************" << endl;
	}
	cout << endl;
}
/*This function is work to edit  the data*/
void EDIT()
{
	if (total == 0)
	{
		cout << "\tNo data in enterd to edit";
	}
	else
	{
		int a = 1;
		string code;
		cout << "Enter id of employee which want to edit :";
		cin >> code;
		for (int i = 1; i <= total; i++)
		{
			if (code == s[i].id)
			{
				cout << "\t\tEdit data of employee :" << i;
				while (a)
				{
					editmenu();
					switch (choice1)
					{
					case 'N':
					case 'n':
						cout << "\nnew Full name   :";
						cin >> s[i].name;
						break;
					case 'G':
					case 'g':
						cout << "\nnew Gender  :";
						cin >> s[i].gen;
						break;
					case 'A':
					case 'a':
						cout << "BIRTH DAY   :";
						cin >> s[i].d;
						cout << "BIRTH month :";
						cin >> s[i].m;
						cout << "BIRTH year  :";
						cin >> s[i].y;
						agecalu(i);
						break;
					case 'C':
					case 'c':
						cout << "\nEnter the new id  : ";
						cin >> s[i].id;
						break;
					case 'P':
					case 'p':
						cout << "\nnew Phone number  : +251";
						cin >> s[i].PN;
						break;
					case 'B':
					case 'b':
						cout << "\nnew  address   :";
						cin >> s[i].adress;
						break;
					case 'H':
					case 'h':
						cout << "\nnew working hours per days :";
						cin >> s[i].Wh;
						cout << "new working days per month   :";
						cin >> s[i].Wd;
						cout << "new pay per hours     :";
						cin >> s[i].pay;

						calculat(i);
						break;
					case 'Q':
					case 'q':
						a = 0;
						break;
					default:
						cout << "Invalid try again" << endl;
						break;
					}
				}
			}
		}
	}
}

/*This function work when the edit function call and the function does what part of the data you edit*/

void editmenu()
{
	cout << "\n _______________________________________________________\n";
	cout << "|\t\twhat do you want edit                   |";
	cout << "\n| press N------------>to edit name                      |";
	cout << "\n| press G------------>to edit Gender                    |";
	cout << "\n| press A------------>to edit birth information         |";
	cout << "\n| press C------------>to edit code                      |";
	cout << "\n| press P------------>to edit Phone number              |";
	cout << "\n| press B------------>to edit address                   |";
	cout << "\n| press H------------>to edit salary information        |";
	cout << "\n| press q------------>quit from the edit menu           |";
	save();
	cout << "\n| Enter your choice ===>  ";
	cin >> choice1;
	cout << "|_______________________________________________________|\n\n";
}

/*This function is work to delete the data*/

void DELETES()
{
	if (total == 0)
	{
		cout << "\t No data is enterd to delete";
	}
	else
	{
		int num;
		cout << "\t________________________________________";
		cout << "\n\t| Press to [1] delete full record \t|";
		cout << "\n\t| Press to [2] delete specifiy record \t|";
		cout << "\n\t| Enter your choice :";
		cin >> num;
		cout << "\t|______________________________________|\n\n";
		if (num == 1)
		{
			char check;
			cout << "\t________________________________________\n";
			cout << "\t| Are you shure delete all record(Y/N)  |";
			cout << "\n\t| For yes --------->press Y\t\t|";
			cout << "\n\t| For No ---------->press N\t\t|";
			cout << "\n\t| Enter your choice===> ";
			cin >> check;
			cout << "\t|_______________________________________|\n\n";
			switch (check)
			{
			case 'Y':
			case 'y':
				cout << "\t\tAll recorded data deleted..... !!";
				total = 0;
				break;
			case 'N':
			case 'n':
				cout << "\t\tNo recorded data deleted....!!";
				break;
			}
		}
		else if (num == 2)
		{
			string code;
			int check = 0;
			cout << "Enter id of employee which want to delete :";
			cin >> code;
			for (int i = 1; i <= total; i++)
			{
				if (code == s[i].id)
				{
					for (int j = i; j < total; j++)
					{
						s[j].name = s[j + 1].name;
						s[j].gen = s[j + 1].gen;
						s[j].id = s[j + 1].id;
						s[j].Wh = s[j + 1].Wh;
						s[j].d = s[j + 1].d;
						s[j].m = s[j + 1].m;
						s[j].y = s[j + 1].y;
						s[j].Wd = s[j + 1].Wd;
						s[j].pay = s[j + 1].pay;
						s[j].adress = s[j + 1].adress;
						s[j].PN = s[j + 1].PN;
					}
					check++;
					total--;
				}
			}
			if (check == 1)
			{
				cout << "\t\tYour required record is deleted...!!";
				check--;
			}
			else if (check == 0)
			{
				cout << "\tYou enter id number is not found to delete";
			}
		}
		else
		{
			cout << "\nInvalid input you are enterd";
		}
	}
}

/*This function is to work to search dital data for particular employee*/

void SEARCH()
{
	if (total == 0)
	{
		cout << "\tNo data is enterd to search ";
	}
	else
	{
		string code;
		int check = 0;
		cout << "\n _______________________________________________________\n";
		cout << "| Enter id of employee which want to search :";
		cin >> code;
		for (int i = 1; i <= total; i++)
		{
			if (code == s[i].id)
			{
				check++;
			}
		}
		if (check == 1)
		{
			for (int i = 1; i <= total; i++)
			{
				if (code == s[i].id)
				{
					cout << "|\t\t Data of employee :" << i << endl;
					cout << "| Full Name           : " << s[i].name << endl;
					cout << "| Gender              : " << s[i].gen << endl;
					cout << "| Id no               : " << s[i].id << endl;
					cout << "| BIRTH DATE          : "
						 << s[i].day << "/" << s[i].month << "/" << s[i].year << endl;
					cout << "| age                 : " << s[i].age << endl;
					cout << "| Basic salary        : " << s[i].BS << endl;
					cout << "| pension             : " << s[i].Pen << endl;
					cout << "| Transport allowance : " << TA << endl;
					cout << "| Tax                 : " << s[i].tax << endl;
					cout << "| Net Pay             : " << s[i].NP << endl;
					cout << "| _______________________________________________________\n";
					check--;
				}
			}
		}
		else if (check == 0)
		{
			cout << "\tYou enter id number is not found to search";
		}
	}
}

/*This function calculat tax on our country tax system and it does the work the insert and edit function call*/

void calculat(int i)
{
	s[i].BS = s[i].Wh * s[i].Wd * s[i].pay;
	s[i].TG = s[i].BS + TA;
	s[i].Pen = s[i].BS * 0.1;

	if (s[i].TG > 0 && s[i].TG <= 600)
	{
		s[i].tax = 0;
	}
	else if (s[i].TG > 600.00 && s[i].TG <= 1650.00)
	{
		s[i].tax = s[i].TG * 0.1 - 60;
	}
	else if (s[i].TG > 1650.00 && s[i].TG <= 3200.00)
	{
		s[i].tax = s[i].TG * 0.15 - 142.50;
	}
	else if (s[i].TG > 3200.00 && s[i].TG <= 5250.00)
	{
		s[i].tax = s[i].TG * 0.2 - 302.50;
	}
	else if (s[i].TG > 5250.00 && s[i].TG <= 7800.00)
	{
		s[i].tax = s[i].TG * 0.25 - 565;
	}
	else if (s[i].TG > 7800.00 && s[i].TG <= 10900.00)
	{
		s[i].tax = s[i].TG * 0.3 - 955;
	}
	else if (s[i].TG > 10900.00)
	{
		s[i].tax = s[i].TG * 0.35 - 1500;
	}
	s[i].D = s[i].tax + s[i].Pen;
	s[i].NP = s[i].TG - s[i].D;
}

/*This function calculat age  the insert and edit function call*/

void agecalu(int i)
{
	s[i].day = s[i].d;
	s[i].month = s[i].m;
	s[i].year = s[i].y;
	if (s[i].d > da)
	{
		s[i].d = s[i].d - da;
		s[i].m++;
	}
	else if (s[i].d < da)
	{
		s[i].d = da - s[i].d;
	}
	else if (s[i].d == da)
	{
		s[i].d = da;
	}
	if (s[i].m > mo)
	{
		s[i].m = s[i].m - mo;
		s[i].y++;
	}
	else if (s[i].m < mo)
	{
		s[i].m = mo - s[i].m;
	}
	else if (s[i].m == mo)
	{
		s[i].m = mo;
	}
	if (s[i].y < ye)
	{
		s[i].y = ye - s[i].y;
	}
	s[i].age = s[i].y;
}

/*This function save the information into file when it  does  the work the function called*/

void save()
{
	ofstream file;
	file.open("payroll.txt", ios::out);
	if (file.is_open())
	{
		file << num1 << endl;
		file << total << endl;
		for (int i = 1; i <= total; i++)
		{
			file << s[i].name << endl;
			file << s[i].gen << endl;
			file << s[i].id << endl;
			file << s[i].day << endl;
			file << s[i].month << endl;
			file << s[i].year << endl;
			file << s[i].age << endl;
			file << s[i].Pen << endl;
			file << s[i].tax << endl;
			file << s[i].BS << endl;
			file << s[i].NP << endl;
		}
		file.close();
	}
}

/*This function loade the information into the program 
 when it  does  the work the function called*/

void loade()
{
	ifstream file;
	file.open("payroll.txt", ios::in);
	if (file.is_open())
	{
		file >> num1;
		file >> total;
		if (total > 0)
		{
			for (int i = 1; i <= total; i++)
			{
				file >> s[i].name;
				file >> s[i].gen;
				file >> s[i].id;
				file >> s[i].day;
				file >> s[i].month;
				file >> s[i].year;
				file >> s[i].age;
				file >> s[i].Pen;
				file >> s[i].tax;
				file >> s[i].BS;
				file >> s[i].NP;
			}
		}

		else
		{
			cout << "\n\n";
			cout << "THE PAYROLL FILE DOES NOT EXIST.";
			cout << "\n\n";
			cho = 0;
		}
	}
}
