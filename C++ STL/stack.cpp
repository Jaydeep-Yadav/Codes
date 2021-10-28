#include <iostream>
#include <stack>

//? Stack - Last in First out

using namespace std;
int main()
{
    stack<string> s;
    stack<int> n;
    n.push(1);
    n.push(2);
    s.push("jay");
    s.push("deep");
    s.push("yadav");

    cout<<"Top element "<<s.top();
    cout<<"\nsize is "<<s.size();
    s.pop();
    
    cout<<"\nTop element "<<s.top();
    cout<<"\nsize is "<<s.size();

    cout<<"\nEmpty or not "<<s.empty();
    return 0;
}