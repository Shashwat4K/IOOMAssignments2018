
class String
{
		
	public:
		String(){
			str[0] = '\0';		
		}
		String(char s[]){
			strcpy(str, s);
		}
		void display() const{
			std::cout << str << "\n"; 
		}
		void setStr(const char s[]){
			strcpy(str, s);
		}
		const char* getStr() const{
			return str;
		}
		int getSZ() const;
		//void setSZ(int x);
		void modify(char s[], int start = 0, int end = SZ-1)
		{
			for(int i = start; i < end && str[i]!='\0'; i++){
				str[i] = s[i];
			}	
		}
	private:
		enum e{ SZ = 8 };
		char str[SZ];
		
		
};
int String::getSZ() const{
	return SZ;
}
/*void String::setSZ(int x){
	SZ = x;
}*/
class Pstring : public String
{
	public:
		Pstring():String(){ std::cout << "Inside default constructor\n";}
		Pstring(const char s1[]);
		//~Pstring();
};

Pstring::Pstring(const char s1[]){
	int size = getSZ();
	if(strlen(s1) <= size){
		setStr(s1);
	}else{
		char *t;
		t = new char[size];
		for(int i = 0; i < (size)-1; i++){
			t[i] = s1[i];
		}
		t[size-1] = '\0';
		setStr(t);
		delete[] t;
	}
}

class Pstring2 : public Pstring
{
	public:
		Pstring2():Pstring(){std::cout << "Inside default constructor of Pstring2\n"; }
		Pstring2(const char s[]): Pstring(s) {}
		//~Pstring2();
		Pstring2& left(const Pstring2& s1, int n); // void left(const Pstring2& s1, int n);
		Pstring2& middle(const Pstring2& s1, int s, int n);
		Pstring2& right(const Pstring2& s1,int n);
};

Pstring2& Pstring2::left(const Pstring2& s1, int n) 
{
	int i;
	char temp[getSZ()+1];
	if(n > getSZ()){
		
		for(i = 0; i < getSZ() && s1.getStr()[i] != '\0'; i++){
			temp[i] = s1.getStr()[i];	
		}
		temp[i] = '\0';
	}else{
		for(i = 0; i < n && s1.getStr()[i] != '\0'; i++){
			temp[i] = s1.getStr()[i];
		}
		temp[i] = '\0';
	}
	Pstring2 *p = new Pstring2(temp);
	modify(temp, 0, n);
	return *p;
}

Pstring2& Pstring2::middle(const Pstring2& s1, int s, int n) 
{
	int i;
	char temp[getSZ()+1];
	if(s == 0 && n > getSZ()){
		int j = 0;
		for(i = s; i < getSZ() && s1.getStr()[i] != '\0'; i++){
			temp[j] = s1.getStr()[i]; j++;	
		}
		temp[j] = '\0';
	}else if(s > 0 && n < getSZ()){
		int j = 0;
		for(i = s; i < n && s1.getStr()[i] != '\0'; i++){
			temp[j] = s1.getStr()[i]; j++;
		}
		temp[j] = '\0';
	}
	Pstring2 *p = new Pstring2(temp);
	modify(temp, s, n);
	return *p;	
}

Pstring2& Pstring2::right(const Pstring2& s1,int n)
{
	int i, len, j;
	char temp[getSZ()+1];
	if(n > getSZ() || n >= strlen(s1.getStr())){
		setStr(s1.getStr());
	}else{
		len = strlen(s1.getStr());
		//str[n] = '\0';
		for(i = len-1, j = 0; i >=0 && j < getSZ(); i--, j++){
			temp[j] = s1.getStr()[i];
		}
		modify(temp, len-n, getSZ());
	}
	Pstring2 *p = new Pstring2(temp);
	return *p;
}
