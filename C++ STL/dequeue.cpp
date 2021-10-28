#include <iostream>
#include <deque>

//? Double ended queue

using namespace std;
int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    cout << "deque is\n";
    for (int i : d)
        cout << i << " ";

    d.pop_front();
    d.pop_back();

    cout << "\ndeque is\n";
    for (int i : d)
        cout << "deque is" << i << " ";

    d.push_front(3);
    d.push_front(4);
    d.push_back(9);
    cout << "deque is\n";
    for (int i : d)
        cout << i << " ";

    cout << "\nPrint first index element " << d.at(1) << endl;

    cout << "\nFirst Element " << d.front();

    cout << "\nLast Element " << d.back();
    cout << "\nEmpty or not " << d.empty();

    //? delete first element
    cout << "\ndeque is\n";
    for (int i : d)
        cout << i << " ";
    cout << "\ndeleting first";
    d.erase(d.begin(), d.begin() + 1);
    cout << "\ndeque is\n";
    for (int i : d)
        cout << i << " ";

    cout << "\nBefore clear " << d.size();
    d.clear();
    cout << "\nAfter clear " << d.size();

    
    return 0;
}