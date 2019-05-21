#include "array_size.h"
class ComplexInteger
{
	private:
		int real;
		int img;
	public:
		ComplexInteger(){
			real = 0; img = 0;	
		}
		ComplexInteger(int r, int i){
			real = r; img = i;
		}
		ComplexInteger(const ComplexInteger& c){
			real = c.real; img = c.img;
		}
		bool operator== (const ComplexInteger& c);
		

		void print() const;// Prints the complex number in standard format
		int getReal() const{
			return real; 	
		}
		int getImaginary() const{
			return img;
		}
		friend class LinkedList;
		friend class Node;
};	

void ComplexInteger::print() const
{
	(img < 0)? (std::cout << "( " << real << " - " << -img << "i )"):(std::cout << "( " << real << " + " << img << "i )");
}

bool ComplexInteger::operator== (const ComplexInteger& c)
{
	if(real == c.getReal() && img == c.getImaginary()){
		return true;
	}else{
		return false;
	}
}
