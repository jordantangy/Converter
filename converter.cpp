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
cout << " " << endl;

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
cout << " " << endl;
    
}




int main(){

    
    while(1){
    int choice;
    cout << "To convert a number from Decimal to Binary ---> Press 1" << endl;
    cout << "To convert a number from Binary to Decimal ---> Press 2" << endl;
    cout << "To exit the program, press Ctrl+C" << endl;
    cin >> choice;
 
    if (choice == 1){
    
    long num;
    cout << "Enter a decimal number to convert to binary" << endl;
    cin >> num;
    cout << "The decimal number " << num << " in binary is : " ;
    toBinary(num);

    }

        else  if(choice == 2){
        long num2;
        cout << "Enter a binary number to convert to decimal" << endl;
        cin>>num2;
        int flag = 1;
        while(flag){

            try{
            string s = to_string(num2);
            bool b = 1;
            for (size_t i = 0; i < s.length(); i++)
            {
                if(s[i] == '0' || s[i] == '1'){
                    continue;
                }
                else{
                    b = 0;
                    break;
                }
            }

            if(b == 0){
                throw _ERRNO_H;
            }
           else{
               flag = 0;
           }

        }
        catch (int err){
            cout << "The number you entered is not a binary number" << endl;
            cout << "Please, enter a binary number:" << endl;
            cin >>num2;
        }

    }
        cout << "The binary number " << num2 << " in decimal is : " ;
        toDecimal(num2);
    

    }

  }
    
}