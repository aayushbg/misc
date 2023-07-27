#include <iostream>

using namespace std;

int btodecimal(string n, int b1){
    int sum = 0;
    int pow = 1;
    string num = n;
    for(int i = num.size()-1; i>=0; i--){
        char c = num[i];
        if(c>='0' and c<='9'){
            int x = c - '0';
            sum += (x*pow);
            pow*=b1;
        }
        else if(c>='A' and c<='Z'){
            int x = c - 'A' + 10;
            sum += (x*pow);
            pow*=b1;
        }
    }
    return sum;
}

string decimaltob(int n, int b2){
    int num = n;
    int b = b2;
    string s1 = "";
    while(n!=0){
        int a = n%b;
        if(a>=0 and a<=9){
            s1+=('0'+a);
        }
        else{
            s1+=(a+'A'-10);
        }
        n/=b;
    }
    string s2 = "";
    for(int i = s1.size()-1; i>=0; i--){
        s2+=(s1[i]);
    }
    return s2;
}

int main(){
    string n; 
    int b1, b2;
    cin >> n >> b1 >> b2;
    int a = btodecimal(n, b1);
    string b = decimaltob(a, b2);
    cout << "Final Converted Number is " << b;
}
