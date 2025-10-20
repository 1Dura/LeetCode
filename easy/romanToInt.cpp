#include <iostream>
#include <string>
using namespace std;

int romanToInt(string s) {
    int tmp=0;
    int ans=0;
    for(int i =0;i<s.length(); i++){
        int num;
        switch(s[i]){
            case 'M': num = 1000; break;
            case 'D': num = 500; break;
            case 'C': num = 100; break;
            case 'L': num = 50; break;
            case 'X': num = 10; break;
            case 'V': num = 5; break;
            case 'I': num = 1; break;
        }
        if(tmp<num){
            ans-=tmp;
        }
        else{
            ans+=tmp;
        }
        tmp=num;
    }
    ans+=tmp;
    return ans;
}

int main(){
    string s = "XIV";
    cout << s << " = " << romanToInt(s) << endl;

}