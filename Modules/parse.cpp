include "parse.h"



double str_to_double(string s)
 // if possible, convert characters in s to floating-point value
{
 istringstream is {s}; // make a stream so that we can read from s
 double d;
 is >> d;
 if (!is) error("double format error: ",s);
 return d;
}

void my_code(string label, Temperature temp)
{
 // . . .
 ostringstream os; // stream for composing a message
 os << setw(8) << label << ": "
 << fixed << setprecision(5) << temp.temp << temp.unit;
 someobject.display(Point(100,100), os.str().c_str());
 // . . .
}
