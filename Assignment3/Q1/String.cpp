class String
{
	private:
		char *value;
		int length;
	public:
		//Constructors and Destructor
		String(){
			length = 0;
			value = 0;
		}
		String(const char *s); //Parametrized constructor
		String(int l1, int l2);
		String(const String& s); //Copy constructor
		~String();
		//Operator Overloading methods
		friend String operator+ (const String& s, const String& t);
		friend int operator>= (const String& s, const String& t);
		friend int operator== (const String& s, const String& t);
		friend int operator!= (const String& s, const String& t);
		char operator[](int val) const;

		//Other methods
		friend void display(const String s);
		int getLength() const{
			return length;
		}
		char* getString() const{
			return value;
		}
};
class ArrayIndexOutOfBoundException
{
	
	public:
		void printErrorMessage(){
			std::cout << "Array index Out of Bound!\n";
		} 
};
class NullStringException
{
	
	public:
		void printErrorMessage(){
			std::cout << "Can't operate on Null strings!\n";
		} 
};
