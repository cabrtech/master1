#pragma once
#include <string>
using namespace std;
class song
{
public:
	song(string songname, string bandname, double songPrice);
	~song();

	string getSongName() { return title; };
	string getBandName() { return band; };
	double getPrice() { return price; };
	void setPrice(double songPrice);
	string toString();
private:
	string title;
	string band;
	double price;
};

song::song(string songname, string bandname, double songPrice)
{
	title = songname;
	band = bandname;
	price = songPrice;
}

song::~song()
{

}


