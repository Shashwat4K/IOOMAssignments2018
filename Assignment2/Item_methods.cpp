#include <string.h>
Item::Item()
{
	ID = -1;
	QUANT = -1;
	LABEL[0] = '\0';	
}

Item::Item(int id, int quant, char label[])
{
	ID = id;
	QUANT = quant;
	strcpy(LABEL, label);
}

Item::Item(const Item& i)
{
	ID = i.ID;
	QUANT = i.QUANT;
	strcpy(LABEL, i.LABEL);	
}

int Item::getId()
{
	return ID;
}

int Item::getQuant()
{
	return QUANT;
}

void Item::getLabel(char *s)
{
	strcpy(s, LABEL);
}

void Item::setLabel(char l[])
{
	strcpy(LABEL, l);
}
