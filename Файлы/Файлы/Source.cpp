#include<iostream>
#include<fstream>
#include<string>

#define MAX 100
int N;

using namespace std;

struct BookStore
{
	string name;
	string author;
	int publicYear;
};

void menu(BookStore book[], int &n);
void addBook(BookStore book[], int &n);
void findBook();

void addBook(BookStore book[], int &n)
{
	ofstream fileOut;
	fileOut.open("C:/Users/trson/Desktop/Input.txt");
	fileOut << "Name Of Book \t\t| Author \t\t| Public Year \t\t|" << endl;

	int numberBook;
	cout << "\nHow many book do you want to add?" << endl;
	cout << "Please input number: ";
	cin >> numberBook;

	for (int i = 1; i <= numberBook; i++)
	{
		cin.ignore();
		cout << "Please input name of book " << i << ": ";
		getline(cin, book[i].name);
		cout << "Please input name of author: ";
		getline(cin, book[i].author);
		cout << "Please input public year: ";
		cin >> book[i].publicYear;
		cout << endl;

		fileOut << book[i].name << " \t\t |" << book[i].author << " \t\t| " << book[i].publicYear << " \t\t|" << endl;
	}

	fileOut.close();
}

void findBook()
{
	BookStore book[100];

	

	string findAuthor;
	int find;
	do
	{
		cout << "---------We have 2 ways to find your book---------" << endl;
		cout << "\t1- Find with public year." << endl;
		cout << "\t2- Find with name of author." << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "Please input what way you want (1/2): ";
		cin >> find;
		cout << endl;
	} while (find <= 0 && find >= 3);
	
	switch (find)
	{
	case 1:
		int year;

		cout << "FIND WITH PUBLIC YEAR!" << endl;
		cout << "Please input public year of book you want to find: ";
		cin >> year;

		for (int i = 0; i < 5; i++)
		{
			if (book[i].publicYear == year)
			{
				cout << "We have found your book!" << endl;
				cout << "Author: " << book[i].author << endl;
				cout << "Name of book: " << book[i].name << endl;
				cout << "Public year: " << book[i].publicYear << endl;
			}
		}
		break;
	case 2:
		cout << "FIND WITH NAME OF AUTHOR!" << endl;
		cout << "Please input name of author: " << endl;
		cin.ignore();
		getline(cin, findAuthor);

		for (int i = 0; i < 5; i++)
		{
			if (book[i].author.compare(findAuthor) == 0)
			{
				cout << "We have found your book!" << endl;
				cout << "Author: " << book[i].author << endl;
				cout << "Name of book: " << book[i].name << endl;
				cout << "Public year: " << book[i].publicYear << endl;
			}
		}

		break;
	default:
		break;
	}

}

void menu(BookStore book[], int &n)
{
	string word;
	int search_index;

	do
	{
		cout << "---------------Menu------------------" << endl;
		cout << "\t1. Add a new book." << endl;
		cout << "\t2. Find a book." << endl;
		cout << "\t3. Find by word." << endl;
		cout << "-------------------------------------" << endl;
		cout << "Your choose: ";
		cin >> n;
	} while (n <= 0 && n >= 4);

	switch (n)
	{
	case 1:
		addBook(book, n);
		break;
	case 2:
		findBook();
		break;
	case 3:
		cout << "FIND BY WORD!" << endl;
		cout << "Please input your word: ";
		cin.ignore();
		getline(cin, word);


		for (int i = 0; i < 3; i++)
		{
			search_index = book[i].name.find(word);
			if (search_index == -1)
			{
				cout << word << " is not exits in any name of book!" << endl;
			}
			else
			{
				cout << "We find book have this word!" << endl;
				cout << "Author: " << book[i].author << endl;
				cout << "Public year: " << book[i].publicYear << endl;
			}
		}
		break;
	default:
		break;
	}
	
}


int main()
{   
	BookStore book[100];
	int n, numberOfBook;

	ifstream in("C:/Users/trson/Desktop/Input.txt");

	if (!in) {
		cerr << "File can't be opened! " << endl;
		system("PAUSE");
		exit(1);
	}
	for (int i = 0; i < 100; i++) {
		in >> book[i].author >> book[i].name >> book[i].publicYear;
	}
	for (int i = 0; i < 100; i++) {
		cout << book[i].author << "  ";
		cout << book[i].name << " ";
		cout << book[i].publicYear << "  ";
	}


	system("pause");
	return 0;
}