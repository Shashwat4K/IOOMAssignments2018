#include<bits/stdc++.h>
using namespace std;

template<class Y>
class Print
{
	private:
		int size;
	    Y *Array;
	public:
		Print():size(-1), Array(NULL){}
		
		Print(int _size , Y *_Array):size(_size)
		{
			try{
				Array = new Y[size];
				for(int i = 0 ; i < size ; i++)
				{
					Array[i] = _Array[i];
				}
			}catch(...){
				cout << "Exception occured in Print() constructor\n";
			}		
		}
		~Print()
		{
			delete[] Array;
		}
		void doPrint()
		{
			for(int i = 0 ; i < size ; i++)
			{
				cout<<" "<<Array[i]<<" ";
			}
			cout<<endl;
		}			
};

template <class X> 
class Swap
{
	private:
		X x;
		X y;
	public:
		Swap(){}
		
		Swap(X xx, X yy):x(xx),y(yy){}
		
		void doSwap(X &x, X &y) 
		{ 
			X temp = x; 
			x = y; 
			y = temp; 
		}	 	
};


template <class T>
class DynArray 
{	
	private:
	    int size;
	    T *DynamicArray;
	public:
	    DynArray(){size = -1; DynamicArray = NULL;}
	    
	    DynArray(int s);
		
	    void Sort();
	    
	    void displayArray();
	    
	    ~DynArray()
	     {
			//cout<<"Destructor of Dynamic Array class !";
			delete[] DynamicArray;
	     }
};

template <class T>
DynArray<T>::DynArray(int s):size(s)
{
    DynamicArray = new T[size];
    //read input
    for (int i = 0; i<size; i++) 
    {
        cout << "Element " << i << ": ";
        cin >> DynamicArray[i];
    }
}


template <class T>
void DynArray<T>::displayArray()
{
	Print<T>(size,DynamicArray).doPrint();
}

template <class T>
void DynArray<T>::Sort()
{
try{
    int flag = 1;
    for (int i = 0; i < size - 1 && flag ; i++) 
	{
		flag = 0;
		for (int j = size - 1; i < j; j--) 
		{
			if (DynamicArray[j] < DynamicArray[j - 1]) 
			{
				flag = 1;
				Swap<T>().doSwap(DynamicArray[j],DynamicArray[j-1]); // Calling custom made 'swap' function (doSwap()) here by creating an instance of 'Swap<T>' class.
			}
		}
	}
    }catch(...){
	cout << "Excetion occured in 'Sorting'\n";
    }		 
}


int main() 
{
    try{
	    int sizeOfArray, option, done = 0;
	    cout << "Enter size of Array: ";
	    cin >> sizeOfArray;

	    while(!done){
		    cout << "1) Int 2) Float 3) string 0) Exit\n";
		    cin >> option;
		    switch(option)
		    {
			case 1:{
		
				DynArray<int> intArray(sizeOfArray); // can we write d obj = d(); ?
				cout << "before sorting: "; 
				intArray.displayArray();
				cout << "\nAfter sorting: ";
		    		intArray.Sort();
				intArray.displayArray();
				cout << endl;
				break;
			}
			case 2:{
		
				DynArray<float> floatArray(sizeOfArray); // d obj = d();
				cout << "before sorting: ";
				floatArray.displayArray(); 
				cout << "\nAfter sorting: ";
		    		floatArray.Sort();
				floatArray.displayArray();
				cout << endl;
				break;
			}
			case 3:{
		
				DynArray<string> stringArray(sizeOfArray); // d obj = d();
				cout << "before sorting: "; 
				stringArray.displayArray();
				cout << "\nAfter sorting: ";
		    		stringArray.Sort();
				stringArray.displayArray();
				cout << endl;
				break;
			}
			case 0: done = 1; break;

		    }

    	   }

    }catch(...){
	cout << "ERROR!\n";
    }

    return 0;
}
