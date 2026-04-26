#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(50);
    cout<<"stack size: "<<s.size()<<endl;
    cout<<"Top element: "<<s.top()<<endl;
    cout<<"After popping: "<<endl;
    s.pop();
    cout<<"Top element after popping: "<<s.top()<<endl;
    return 0;
}