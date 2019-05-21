
class Person
{
	protected: // Changed to protexted from private
		char* Name;
		char* Phone_number;
		char* Email;
	public:
		Person();
		Person(char* Name, char* Phone_number, char* Email);
		Person(const Person& p);
		virtual ~Person();
		virtual void printDetails() const;
};

Person::Person(){
	Name = 0;
	Phone_number = 0;
	Email = 0;
}

Person::Person(char* n, char* pn, char* e)
{
	Name = new char[strlen(n)+1];
	strcpy(Name, n);
	Phone_number = new char[strlen(pn)+1];
	strcpy(Phone_number, pn);
	Email = new char[strlen(e)+1];
	strcpy(Email, e);	
}

Person::Person(const Person& p)
{
	Name = new char[strlen(p.Name)+1];
	strcpy(Name, p.Name);
	Phone_number = new char[strlen(p.Phone_number)+1];
	strcpy(Phone_number, p.Phone_number);
	Email = new char[strlen(p.Email)+1];
	strcpy(Email, p.Email);	
}

Person::~Person(){
	std::cout << "Destructor of Person\n";
	delete[] Name;
	delete[] Phone_number;
	delete[] Email;
}

void Person::printDetails() const{
	std::cout << "*************************************\n";
	std::cout << "Name: " << Name << "\n";
	std::cout << "Phone Number: " << Phone_number << "\n";
	std::cout << "E-mail: " << Email << "\n";
	std::cout << "*************************************\n";
}
