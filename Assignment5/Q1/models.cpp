using namespace std;

class i10 : public Hatchback
{
	
	public:
		i10():Hatchback(){ name = new char[strlen("i10")+1]; strcpy(name, "i10"); }
		~i10(){}
		void printName(){
			cout << "* Name of Car: " << name << endl;
		}
		void printMileage(){
			cout << "* Mileage is "<< mileage << endl;
		}	
		void printPower(){
			cout << "* Power: " << power << "hp" << endl;
		}	
		void printGroundClearance(){
			cout << "* Ground Clearance: " << groundClearance << " cm" << endl;
		}
		void printPrice(){
			cout << "* Price: INR " << price << " lac" << endl;
		}

};

class Baleno : public Hatchback
{
	public:
		Baleno():Hatchback(){ name = new char[strlen("Baleno")+1]; strcpy(name, "Baleno"); }
		~Baleno(){}
		void printName(){
			cout << "* Name of Car: " << name << endl;
		}
		void printMileage(){
			cout << "* Mileage is " << mileage << endl;
		}	
		void printPower(){
			cout << "* Power: " << power << "hp" << endl;
		}	
		void printGroundClearance(){
			cout << "* Ground Clearance: " << groundClearance << " cm" << endl;
		}
		void printPrice(){
			cout << "* Price: INR " << price << " lac" << endl;
		}
};

class Kwid : public Hatchback
{
	public:
		Kwid():Hatchback(){ name = new char[strlen("Kwid")+1]; strcpy(name, "Kwid"); }
		~Kwid(){}
		void printName(){
			cout << "* Name of Car: " << name << endl;
		}
		void printMileage(){
			cout << "* Mileage is " << mileage << endl;
		}	
		void printPower(){
			cout << "* Power: " << power << "hp" << endl;
		}	
		void printGroundClearance(){
			cout << "* Ground Clearance: " << groundClearance << " cm" << endl;
		}
		void printPrice(){
			cout << "* Price: INR " << price << " lac" << endl;
		}
};

class Ignis : public Hatchback
{
	public:
		Ignis():Hatchback(){ name = new char[strlen("Ignis")+1]; strcpy(name, "Ignis"); }
		~Ignis(){}
		void printName(){
			cout << "* Name of Car: " << name << endl;
		}
		void printMileage(){
			cout << "* Mileage is " << mileage << endl;
		}	
		void printPower(){
			cout << "* Power: " << power << "hp" << endl;
		}	
		void printGroundClearance(){
			cout << "* Ground Clearance: " << groundClearance << " cm" << endl;
		}
		void printPrice(){
			cout << "* Price: INR " << price << " lac" << endl;
		}
};

class Duster : public SUV
{
	public:
		Duster():SUV(){ name = new char[strlen("Duster")+1]; strcpy(name, "Duster"); }
		~Duster(){}
		void printName(){
			cout << "* Name of Car: " << name << endl;
		}
		void printMileage(){
			cout << "* Mileage is " << mileage << endl;
		}	
		void printPower(){
			cout << "* Power: " << power << "hp" << endl;
		}	
		void printGroundClearance(){
			cout << "* Ground Clearance: " << groundClearance << " cm" << endl;
		}
		void printPrice(){
			cout << "* Price: INR " << price << " lac" << endl;
		}
};

class Scorpio : public SUV
{
	public:
		Scorpio():SUV(){ name = new char[strlen("Scorpio")+1]; strcpy(name, "Scorpio"); }
		~Scorpio(){}
		void printName(){
			cout << "* Name of Car: " << name << endl;
		}
		void printMileage(){
			cout << "* Mileage is " << mileage << endl;
		}	
		void printPower(){
			cout << "* Power: " << power << "hp" << endl;
		}	
		void printGroundClearance(){
			cout << "* Ground Clearance: " << groundClearance << " cm" << endl;
		}
		void printPrice(){
			cout << "* Price: INR " << price << " lac" << endl;
		}
};

class Dzire : public Sedan
{
	public:
		Dzire():Sedan(){ name = new char[strlen("Dzire")+1]; strcpy(name, "Dzire"); }
		~Dzire(){}
		void printName(){
			cout << "* Name of Car: " << name << endl;
		}
		void printMileage(){
			cout << "* Mileage is " << mileage << endl;
		}	
		void printPower(){
			cout << "* Power: " << power << "hp" << endl;
		}	
		void printGroundClearance(){
			cout << "* Ground Clearance: " << groundClearance << " cm" << endl;
		}
		void printPrice(){
			cout << "* Price: INR " << price << " lac" << endl;
		}
};

class i20 : public Hatchback
{
	public:
		i20():Hatchback(){ name = new char[strlen("i20")+1]; strcpy(name, "i20"); }
		~i20(){}
		void printName(){
			cout << "* Name of Car: " << name << endl;
		}
		void printMileage(){
			cout << "* Mileage is " << mileage << endl;
		}	
		void printPower(){
			cout << "* Power: " << power << "hp" << endl;
		}	
		void printGroundClearance(){
			cout << "* Ground Clearance: " << groundClearance << " cm" << endl;
		}
		void printPrice(){
			cout << "* Price: INR " << price << " lac" << endl;
		}
};

class Vitaara : public SUV
{
	public:
		Vitaara():SUV(){ name = new char[strlen("Vitaara")+1]; strcpy(name, "Vitaara"); }
		~Vitaara(){}
		void printName(){
			cout << "* Name of Car: " << name << endl;
		}
		void printMileage(){
			cout << "* Mileage is " << mileage << endl;
		}	
		void printPower(){
			cout << "* Power: " << power << "hp" << endl;
		}	
		void printGroundClearance(){
			cout << "* Ground Clearance: " << groundClearance << " cm" << endl;
		}
		void printPrice(){
			cout << "* Price: INR " << price << " lac" << endl;
		}
};

class WagonR : public Hatchback
{
	public:
		WagonR():Hatchback(){ name = new char[strlen("WagonR")+1]; strcpy(name, "WagonR"); }
		~WagonR(){}
		void printName(){
			cout << "* Name of Car: " << name << endl;
		}
		void printMileage(){
			cout << "* Mileage is " << mileage << endl;
		}	
		void printPower(){
			cout << "* Power: " << power << "hp" << endl;
		}	
		void printGroundClearance(){
			cout << "* Ground Clearance: " << groundClearance << " cm" << endl;
		}
		void printPrice(){
			cout << "* Price: INR " << price << " lac" << endl;
		}
};

class Alto : public Hatchback
{
	public:
		Alto():Hatchback(){ name = new char[strlen("Alto")+1]; strcpy(name, "Alto"); }
		~Alto(){}
		void printName(){
			cout << "* Name of Car: " << name << endl;
		}
		void printMileage(){
			cout << "* Mileage is " << mileage << endl;
		}	
		void printPower(){
			cout << "* Power: " << power << "hp" << endl;
		}	
		void printGroundClearance(){
			cout << "* Ground Clearance: " << groundClearance << " cm" << endl;
		}
		void printPrice(){
			cout << "* Price: INR " << price << " lac" << endl;
		}
};
