#include<list>
#include<string>
#include<stdexcept>
using namespace std;
list<string> stack;
string pop()
{
    if(!stack.empty())
    {
        string temps = stack.front();
        stack.pop_front();
        return temps;
    }
    else
    {
        throw runtime_error("in listStack pop()");
        return "";
    }
}

void push(string s)   {stack.push_front(s);return;}