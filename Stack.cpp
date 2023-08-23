#include<iostream>
using namespace std;

const int MAX_SIZE = 100;

class Stack {
    private:
        int data[MAX_SIZE];
        int topIndex;
    public:
        Stack(): topIndex(-1){};
        void push(int value) {
            if(topIndex < MAX_SIZE-1){
                data[++topIndex] = value;
            }
            else {
                cout<<"Overflow";
            }
        }
        
        void pop() {
            if(topIndex >= 0) {
                --topIndex;
            }
            else {
                cout<<"Underflow";
            }
        }
        void display () {
            for(int i= 0; i<=topIndex;++i) {
                cout<<data[i]<<"->";
            }
        }
};
int main (){
    Stack st;
    st.push(120);
    st.push(122);
    st.push(123);
    st.push(124);
    st.push(125);
    st.display();
    cout<<"\n";
    st.pop();
    st.display();
}
