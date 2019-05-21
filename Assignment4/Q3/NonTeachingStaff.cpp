class NonTeachingStaff : public Person
{
	private:
		int T_id;
		char *JobRole;
	public:
		NonTeachingStaff():Person(){T_id = -1; JobRole = NULL;}
		NonTeachingStaff(char *n, char *pn, char *e, int tid, char *jr):Person(n, pn, e){
			T_id = tid;
			JobRole = new char[strlen(jr) + 1];
			strcpy(JobRole, jr);
		}
		virtual ~NonTeachingStaff(){
			std::cout << "Destructor of Non-teacher staff\n";
			delete[] JobRole;
		}
		virtual void printDetails() const;
};

void NonTeachingStaff::printDetails() const
{
	std::cout << "*************************************\n";
	std::cout << "Name: " << Name << "\n";
	std::cout << "Phone Number: " << Phone_number << "\n";
	std::cout << "E-mail: " << Email << "\n";
	std::cout << "T_id: " << T_id << "\n";
	std::cout << "Job Role: " << JobRole << "\n";
	std::cout << "*************************************\n";
}
