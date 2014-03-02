#include <iostream>
#include "Sales_item.h"
using namespace std;

Sales_item & Sales_item::add(Sales_item &other)  const
{
	revenue += other.revenue;
	units_sold += other.units_sold;
    return this;
}

 istream& Sales_item::input(istream& in)
{
	double price;

	in >> isbn >> units_sold >> price;

	if(in)
	  revenue = units_sold * price;
    else{
		units_sold = 0;
		revenue = 0.0;
	}

	return in;
}

ostream& Sales_item::output(ostream& out)   const
{
	out << isbn << "\t" << units_sold << "\t" <<revenue << "\t" << endl;
	return out;
}


int main()
{
      Sales_item  item;

	  cout << "enter some transactions(ctrl+z to end" << endl;
       
	  while(item.input(cin)) {
		  cout << "the transaction readed is: " <<item.output(cout);
		  cout << endl;
	  }

	  return 0;
}

      
