#include<iostream>
#include<vector>
using namespace std;
template <class T>
class Stack {
      private:
        vector<T> data;
        int upper=-1;
      public:
       // push function
        void push(int value)
        {      
         upper++;
         data.push_back(value);
        }
        // pop function
        void pop()
        {
         data.pop_back();
         upper--;
        }  
        // top function 
        T top()
        {
            return data[upper];
        } 
        // size function
        int size()
        {
            return upper+1;
        }
        // check empty or not
        bool empty()
        {
            return data.empty();
        }
} ;


int main()
{
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.top();
    return 0;
}