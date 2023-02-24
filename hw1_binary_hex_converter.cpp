#include <iostream>
#include<vector>
#include <map>
using namespace std;


void output(vector<int> arr){
    map<int,char> to_hex={{10,'A'},{11,'B'},{12,'C'},{13,'D'},{14,'E'},{15,'F'}};
    for(int i=arr.size();i>0;i--){
        arr[i-1]>9 ? cout<<to_hex[arr[i-1]]:cout<<arr[i-1];
    }
    cout<<'\n';
}


int main(){
    int input;
    cin>>input;
    if (input==0){
        cout<<"0\n0";
        return 0;
    }

    int i=0;
    vector<int> bi;
    int input_copy1=input;
    while (input_copy1>0)
    {
        bi.push_back(input_copy1%2);
        i++;
        input_copy1>>=1;
    }
    output(bi);


    int input_copy2=input;
    vector<int> hex_format;
    i=0;
    while (input_copy2>0)
    {
        hex_format.push_back(input_copy2%16);
        i++;
        input_copy2>>=4;
    }
    output(hex_format);
}
