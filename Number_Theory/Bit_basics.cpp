#include <bits/stdc++.h>
using namespace std;
void printDecimalToBinary(int num)
{
  int i =30;
  while(i >= 0)
  {
      cout<< ((num>>i) & 1);
      i--;
  }
  cout<<"\n";
  
}

int binaryToDecimal(const std::string& str) {
    int sum = 0;
    int length = str.size();

    for (int i = 0; i < length; i++) {
        int bit = str[i] - '0';
        if (bit == 1) {
            sum = sum +  (1 << (length - 1 - i));
        
        }
    }

    return sum;
}
int main()
{   
    string str;
    cin>>str;
    cout<<binaryToDecimal(str);
  
}
    