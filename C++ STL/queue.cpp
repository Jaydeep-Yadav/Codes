#include <iostream>
#include <queue>

//? Queue - First in First out

using namespace std;
int main()
{
    queue<string> q;
    q.push("jay");
    q.push("deep");
    q.push("yadav");

    cout<<"\nFirst element "<<q.front();
    cout<<"\nsize before "<<q.size();
    q.pop();
    
    cout<<"\nFirst element "<<q.front();
    cout<<"\nsize after "<<q.size();

    return 0;
}