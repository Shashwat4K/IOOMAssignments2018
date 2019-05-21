class Student : public Person
{
	private:
		char *RollNo;
		float CGPA;
	public:
		Student():Person(){
			CGPA = 0.0;
			RollNo = 0;
		}
		Student(char *n, char *pn, char *e, char *rn, float cgpa): Person(n, pn, e){
			RollNo = new char[strlen(rn) + 1];
			strcpy(RollNo, rn);
			CGPA = cgpa;
		}
		virtual ~Student(){
			std::cout << "Destructor of Student\n";
			delete[] RollNo;
		}
		virtual void printDetails() const{
			std::cout << "*************************************\n";
			std::cout << "Name: " << Name << "\n";
			std::cout << "Phone Number: " << Phone_number << "\n";
			std::cout << "E-mail: " << Email << "\n";
			std::cout << "Roll Number: " << RollNo << "\n";
			std::cout << "CGPA: " << CGPA << "\n";
			std::cout << "*************************************\n";
		}
};
