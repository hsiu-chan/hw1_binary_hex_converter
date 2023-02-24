# hw1_binary_hex_converter
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
#include <map>
using namespace std;


void output(vector<int> arr){//輸出函數
    map<int,char> to_hex={{10,'A'},{11,'B'},{12,'C'},{13,'D'},{14,'E'},{15,'F'}};//超過10轉ABCEDF
    
    for(int i=arr.size();i>0;i--){
        arr[i-1]>9 ? cout<<to_hex[arr[i-1]]:cout<<arr[i-1];
    }
    cout<<'\n';
}


int main(){
    int input;
    cin>>input;
    if (input==0){//特判0
        cout<<"0\n0";
        return 0;
    }



    int input_copy1=input;
    vector<int> bi_format;//二進制
    while (input_copy1>0)
    {
        bi_format.push_back(input_copy1%2);
        input_copy1>>=1;//input除2
    }
    output(bi_format);

    int input_copy2=input;
    vector<int> hex_format;//十六進制
    while (input_copy2>0)
    {
        hex_format.push_back(input_copy2%16);
        input_copy2>>=4;//input除16
    }
    output(hex_format);
}


```
