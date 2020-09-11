#include <iostream> 
#include <bitset>
#include<cstring>
using namespace std;
int main() {
    int a,b;
    cin >> a,b;
    // for integer to string
    string binary1 = bitset<8>(4).to_string();
    string binary2 = bitset<8>(8).to_string();
    cout<<binary1<<endl;
    cout<<binary2<<endl;
    // for string to integer
    int ans1 = stoi(binary2,0,2);
    cout<<ans1<<endl;
    

    // BItwise XOR operator
    unsigned int num1 = 3;
    unsigned int num2 = 9;
    int num3  = 0; 
  
    num3 = num1 ^ num2;
    cout<<num3<<endl;
    return 0;

}
