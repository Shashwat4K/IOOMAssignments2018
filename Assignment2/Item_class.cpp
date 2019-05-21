class Item
{
	private:
		int ID;
		int QUANT;
		char LABEL[10];
		
	public:
		Item();
		Item(int id, int quant, char label[]); // Constructor
		Item(const Item &i);
		int getId();
		int getQuant();
		void getLabel(char *s);	
		void setId(int i){
			ID = i;
		}
		void setQuant(int q)
		{
			QUANT = q;
		}
		void setLabel(char l[]);
		void printDetails();
};
