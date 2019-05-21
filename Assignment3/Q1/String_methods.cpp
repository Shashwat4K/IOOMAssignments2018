#include <string.h>
#include "String.cpp"

String::String(const char *s)
{
	length = strlen(s);
	value = new char[length + 1];
	strcpy(value, s);
}

String::String(int l1, int l2)
{
	length = l1 + l2;
	value = new char[l1 + l2];
}

String::String(const String& s)
{
	this->length = s.length;
	this->value = new char[s.length + 1];
	strcpy(this->value, s.value);
}

String::~String()
{
	delete[] value;
	length = 0;
}

char String::operator[] (int val) const
{
	if(val < 0 || val > length){
		ArrayIndexOutOfBoundException e;
		throw e;
		//std::cout << "Array Index Out of bound!Shashwat\n";
		//return '\0';
	}else{
		//return *(this->value + value); 
		return (this->value)[val];
	}
}

int operator== (const String& s, const String& t)
{
	if(s.value == NULL || t.value == NULL){
		return -1;
	}else{
		return (strcmp(s.value, t.value) == 0);
	}
}

int operator!= (const String& s, const String& t)
{
	if(s.value == 0 || t.value == 0){
		return -1;
	}else{
		return (strcmp(s.value, t.value) != 0);
	}
}
int operator>= (const String& s, const String& t)
{
	if(s.value == 0 || t.value == 0){
		return -1;
	}else{
		return(strcmp(s.value, t.value) >= 0);
	}
}

String operator+ (const String& s, const String& t)
{	
	if(s.value == NULL && t.value == NULL){
		throw NullStringException();
	}
	if(s.value == NULL){
		String S(t);
		return S;
	}else if(t.value == NULL){
		String S1(s);
		return S1;
	}else{
		char* temp = new char[s.length + t.length + 1];
		int i = 0, j = 0;
		while(s[i] != '\0')
	        {
			temp[i] = s[i];
			i++;
		}
		while(t[j] != '\0')
		{
			temp[i] = t[j];
			i++;j++;
		}
		temp[i] = '\0';
		String result(temp);
		return result;
	}
}

void display(const String s)
{
	std::cout << s.value << "\n";
}
