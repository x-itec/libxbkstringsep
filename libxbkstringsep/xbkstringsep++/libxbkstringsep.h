#ifndef XBKSTRINGSEP_
#define XBKSTRINGSEP_

#include<string>

using namespace std;

class xbkstringsep
{
private:
string result;

public:
string inputstring;
string separator;

int count();

string& operator[](int x);
};
#endif

