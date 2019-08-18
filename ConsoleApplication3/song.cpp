#include "song.h"



void song::setPrice(double songPrice)
{
	price = songPrice;
}

string song::toString()
{
	return("\""+title+"\"by"+band+"cost S"+price);
}
