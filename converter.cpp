#include <iostream>
#include <string>
#include <cmath>
#include <stack>

using namespace std;

void toBinary(long num){

    int rest;
    stack<int> s;
    while(num != 0){
        rest = num%2;
        num /= 2;
        s.push(rest);
    }
    string st;

while(!(s.empty())){
    int a = s.top();
    s.pop();
    st += to_string(a);
}
cout << st << endl;

}

void toDecimal(long num){

    int two = 2;
    int ans = 0;
    string st = to_string(num);
    int len =  st.length();
    int arr[len];
    
    for (int i = len-1 , j = 0 ; i >= 0 ; i-- ,j++)
    {
        arr[j] = st[i] - '0';
    }
    int pref = 0;
    for (size_t i = 0; i <len; i++)
    {
        if(arr[i] == 1){
            pref = 1;
        }
        else{
            pref = 0;
        }
        ans += pref*(pow(two,i));
    }

cout << ans << endl;
    
}



int main(){

    int choice;
    cout << "Decimal to Binary ---> Press 1" << endl;
    cout << "Binary to Decimal ---> Press 2" << endl;
    cin >> choice;
    if (choice == 1){
    
    long num;
    cout << "Enter a decimal number to convert to binary" << endl;
    cin >> num;
    cout << "The decimal number " << num << " in binary is : " ;
    toBinary(num);

    }
    else if(choice == 2){
        long num2;
        cout << "Enter a binary number to convert to decimal" << endl;
        cin>>num2;
        cout << "The binary number " << num2 << " in decimal is : " ;
        toDecimal(num2);
    }
    
    
}