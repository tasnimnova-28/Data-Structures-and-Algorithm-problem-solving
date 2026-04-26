#include <bits/stdc++.h>
using namespace std;
int main() {
    queue<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(50);
    cout<<"queue size: "<<s.size()<<endl;
    cout<<"Front element: "<<s.front()<<endl;
    cout<<"After popping: "<<endl;
    s.pop();
    s.pop();
    cout<<"Front element after popping: "<<s.front()<<endl;
    return 0;
}
