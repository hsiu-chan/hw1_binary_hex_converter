#include <iostream>
#include<vector>
#include<string>
using namespace std;

string output(vector<int> arr){
    string result;
    for(int i=arr.size();i>0;i--){
        result+=arr[i-1];
    }
    return result;
}


int main(){
    int input;
    cin>>input;
    vector<int> bi (8,0);

    int i=0;

    
    while (input>0)
    {
        bi[i]=input%2;
        i++;
        input>>=1;
    }

    string result;
    for(int i=bi.size();i>0;i--){
        result+=char(bi[i-1]);
        cout<<(char(bi[i-1]));
    }
    
}
