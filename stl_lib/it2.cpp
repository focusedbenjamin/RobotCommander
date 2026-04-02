#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int> v{1,2,3,4,4,1,6,7};
    list<int>::iterator i;

    for(i = v.begin(); i!=v.end(); i++){
        cout << *i << " ";

    }
    cout << "\n";

return 0;
}