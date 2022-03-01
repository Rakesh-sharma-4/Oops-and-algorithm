#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

template<class T>
class stack{
    vector<T> elements;
    public:
    void push(T val){
        elements.push_back(val);
    }
    T pop(){
        T temp=elements.back();
        elements.pop_back();
        return temp;
    }
    bool empty(){
        return elements.empty();
    }
};

int main(){
    stack<char> s;
    char b[10];
    cout<<"Enter the string\n";
    cin>>b;
    int n=strlen(b);
    for(int i=0;i<n;i++){
        s.push(b[i]);
    }
    while(!s.empty()){
        cout<<s.pop();
    }

    return 0;
}