#include <iostream>
#include <queue>

//? Priority Queue - Max heap

using namespace std;
int main()
{
    //? Max heap
    priority_queue<int> p;
    p.push(1);
    p.push(5);
    p.push(3);
    cout<<"\nmaxheap  top is "<<p.top()<<endl; //?according to priority
    
    int size = p.size();
    for(int i=0;i<size;i++){
        cout<<p.top()<<" ";
        p.pop();
    }

    //! Min heap
    priority_queue<int, vector<int>,greater<int>> min;
    min.push(3);
    min.push(5);
    min.push(1);
    min.push(3);
    cout<<"\nminheap top is "<<min.top()<<endl; //?according to priority

    int size1 = min.size();
    for(int i=0;i<size1;i++){
        cout<<min.top()<<" ";
        min.pop();
    }
    cout<<"\nif empty "<<min.empty();
    return 0;
}