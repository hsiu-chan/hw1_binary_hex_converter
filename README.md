# hw1_binary_hex_converter
hw1_binary_hex_converter
## Example
```
input: 255
```   

```
output: 11111111  
        FF
```

## code 
```cpp
#include <iostream>
#include<vector>
#include<string>
#include <map>
using namespace std;


void output(vector<int> arr){
    map<int,char> to_hex={{10,'A'},{11,'B'},{12,'C'},{13,'D'},{14,'E'},{15,'F'}};
    string result;
    for(int i=arr.size();i>0;i--){
        arr[i-1]>9 ? cout<<to_hex[arr[i-1]]:cout<<arr[i-1];
        //cout<<num;
    }
    cout<<'\n';
}


int main(){
    int input;
    cin>>input;
    int i=0;
    vector<int> bi (8,0);
    int input_copy1=input;
    while (input_copy1>0)
    {
        bi[i]=input_copy1%2;
        i++;
        input_copy1>>=1;
    }
    output(bi);

    int input_copy2=input;
    vector<int> hex_format (2,0);
    i=0;
    while (input_copy2>0)
    {
        hex_format[i]=input_copy2%16;
        i++;
        input_copy2>>=4;
    }
    output(hex_format);
}

```
