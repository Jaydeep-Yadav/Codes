#include <iostream>
#include <list>

//? List - Double ended linked list
//? random access not possible

using namespace std;
int main()
{
    list<int> l;
    list<int> copy(l);
    list<int> n(5,100); //? 5 elements initialized to 100

    cout << "list n is\n";
    for (int i : n)
        cout << i << " ";
    l.push_back(1);
    l.push_front(2);

    cout << "\nlist is\n";
    for (int i : l)
        cout << i << " ";

    l.erase(l.begin());
    cout<<"\nafter erase\n";
    for (int i : l)
        cout << i << " ";

    // l.pop_back();
    // l.pop_front();
    cout<<"\nSize "<<l.size();
    // l.clear();
    return 0;
}