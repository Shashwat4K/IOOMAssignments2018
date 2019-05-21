using namespace std;

class Car
{
	protected:
		char *name;
		char *type;
		float price;
		float groundClearance;
		float mileage;
		float power;
	public:
		Car(){
			name = 0; type = 0;
		}
		Car(char *n, char *t){
			name = new char[strlen(n)+1];
			strcpy(name,n);
			type = new char[strlen(t)+1];
			strcpy(type,t);
		}
		Car(const Car& c){
			name = new char[strlen(c.name)+1];
			strcpy(name,c.name);
			type = new char[strlen(c.type)+1];
			strcpy(type,c.type);
		}
		virtual ~Car(){
			//cout << "Destructor of 'Car'\n";
			delete[] name;
			delete[] type;		
		}

		virtual void setAttributes();
		virtual void printName() = 0;
		virtual void printType() = 0;

};
void Car::setAttributes()
{

	cout << "Enter Price (in lac INR):"; 
	cin >> price; 

	cout << "Enter Power (in hp): ";
	cin >> power; 

	cout << "Enter Mileage: "; 
	cin >> mileage; 

	cout << "Enter Ground Clearance (in cm): "; 
	cin >> groundClearance; 
}

class SUV : public Car
{
	public:
		SUV():Car(){ type = new char[strlen("SUV")+1]; strcpy(type, "SUV"); }
		SUV(char *n, char *t):Car(n,t){}
		~SUV(){ /*cout << "Destructor of 'SUV'\n";*/ }
		virtual void printType(){
			cout << "* Type of Car: " << type << endl;
		}
		virtual void printMileage() = 0;
		virtual void printPrice() = 0;
		virtual void printPower() = 0;
		virtual void printGroundClearance() = 0;
};

class Sedan : public Car
{
	public:
		Sedan():Car(){ type = new char[strlen("Sedan")+1]; strcpy(type, "Sedan"); }
		Sedan(char *n, char *t):Car(n, t){}
		~Sedan(){ /*cout << "Destructor of 'Sedan'\n";*/ }
		virtual void printType(){
			cout << "* Type of Car: " << type << endl;
		}
		virtual void printMileage() = 0;
		virtual void printPrice() = 0;
		virtual void printPower() = 0;
		virtual void printGroundClearance() = 0;
};

class Hatchback : public Car
{
	public:
		Hatchback():Car(){ type = new char[strlen("Hatchback")+1]; strcpy(type, "Hatchback"); }
		Hatchback(char *n, char *t):Car(n, t){}
		~Hatchback(){ /*cout << "Destructor of 'Hatchback'\n";*/ }
		virtual void printType(){
			cout << "* Type of Car: " << type << endl;
		}
		virtual void printMileage() = 0;
		virtual void printPrice() = 0;
		virtual void printPower() = 0;
		virtual void printGroundClearance() = 0;
};
