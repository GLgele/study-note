#include<string>
#include<stdexcept>
using namespace std;
const string after = "after";
const string before = "before";
#define After after
#define Before before

void insertChars(string& source,int times,string types,string ch="0")
{
    if(types == before)
        for(int i=1;i<=times;i++)
            source.insert(0,ch);
    else
        if(types == after)
            for(int i=1;i<times;i++)
                source.append(ch);
    else
        throw runtime_error("in insertChars()");
}

string getLow(string s,int m)
{
    string temps = "";
    for(size_t i=s.length()-1;i>=s.length()-1-m;i--)
        temps.append(s.substr(i,i));
    return temps;
}

string getHigh(string s,int m)
{
    return s.substr(0,m);
}