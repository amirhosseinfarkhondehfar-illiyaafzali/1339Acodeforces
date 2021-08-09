#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a;
    cin >> a;

    vector<int> result;
    for (int i = 0; i < a; i++)
    {
        int b;
        cin>>b;
        result.push_back(b);
    }
    
    for (int i = 0; i < a; i++)
    {
       cout<<result[i]<<endl;
    }
    
}