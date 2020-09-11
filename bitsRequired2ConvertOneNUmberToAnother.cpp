#include <iostream>
#include <bitset>
using namespace std;
int main() {
    int  a,b;
    cin>>a>>b;
    int ans = 0;
    for(int c = a ^ b;c != 0;c = c >> 1){
        ans += c & 1;
    }
    cout<<ans<<endl;
    cout<<bitset<8>(10).to_string()<<endl;
    cout<<bitset<8>(20).to_string();
}
