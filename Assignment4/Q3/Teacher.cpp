
class Subject
{
	private:
		char* SubjectName;
		Subject *next;
	public:
		Subject(){
			SubjectName = 0;
			next = 0;		
		}
		Subject(char *sub){
			SubjectName = new char[strlen(sub)+1];
			strcpy(SubjectName, sub);
			next = NULL;
		}
		~Subject(){
			delete[] SubjectName;	
		}
		void printSubject() const{
			std::cout << SubjectName << ", ";
		}
		void setNext(Subject *n){
			next = n;
		}
		void setNull(){
			next = NULL;
		}
		Subject* getNext() const{
			return next;
		}
};

class Teacher : public Person
{
	private:
		int T_id;
		Subject *head;
	public:
		Teacher():Person(){
			T_id = -1;
			head = NULL;
		}
		Teacher(char *n, char *pn, char *e, int tid, Subject *list): Person(n,pn,e) { 
			T_id = tid;
			head = list;
		}
		virtual ~Teacher();
		virtual void printDetails() const;
};

void Teacher::printDetails() const
{
	std::cout << "*************************************\n";
	std::cout << "Name: " << Name << "\n";
	std::cout << "Phone Number: " << Phone_number << "\n";
	std::cout << "E-mail: " << Email << "\n";
	std::cout << "Teacher ID: " << T_id << "\n";
	std::cout << "List of subjects: " << "\n";
	Subject *ptr = head;
	while(ptr!=NULL){
		ptr->printSubject();
		ptr = ptr->getNext();
	}
	std::cout << std::endl;
	std::cout << "*************************************\n";
}

Teacher::~Teacher()
{
	std::cout << "destructor of teacher\n";
	if(head!=NULL){
		Subject *ptr = head;
		while(ptr!=NULL){
			ptr = ptr->getNext();
			delete head;
			head = ptr;
		}
	}
}		
