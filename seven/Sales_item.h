#ifndef SALESITEM_H
#define SALESITEM_H
#include <iostream>
#include <string>
using namespace std;

class Sales_item {
	public:
		istream& input(istream& in);
		ostream& output(ostream& out)  const;
//		double avg_price() const;
		Sales_item&  add(Sales_item item1, Sales_item item2) const;
		bool same_item(const Sales_item &rhs) const
		{
			return isbn == rhs.isbn;
		}
	private:
		string isbn;
        unsigned units_sold;
		double revenue;
};
#endif
