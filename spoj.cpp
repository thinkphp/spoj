#include <iostream>
#include <stack>
#include <cctype>
#include <cstring>

using namespace std;

stack<char> STACK;
    char str[1000];

//(a+(b*c)) -> abc*+

int main() 
{
  int i, 
      n, 
      howmuch;

  cin>>howmuch;

  for(; howmuch; howmuch--) {

    cin>>str;

    n = strlen(str);

        int len = strlen(str);
     

    for(i = 0; i < n; i++) {

        if( isalpha( str[i] ) ) {

            cout<<str[i];

        } else if(str[i] == ')') {

           cout<<STACK.top();
 
           STACK.pop();  

        } else if( str[i] != '(') {

          STACK.push(str[i]);
        }
    }

    cout<<endl;
  }
        
  return(0);
};

