//
//  main.cpp
//  pro1
//
//  Created by Sridhar on 20/08/23.
//

# include <iostream>
using namespace std;
int main()
{
    char opr;
    float n1, n2;
    cout<<"-------------------------------------------\n";
    cout<<"            SIMPLE CALCULATOR\n";
    cout<<"-------------------------------------------\n\n";
    cout<<"Which operation do yo want to perform? (+, -, *, /):";
    cin>>opr;
    cout<<"Enter any two numbers:";
    cin>>n1>>n2;
    switch(opr)
    {
        case '+':
            cout <<n1<<" + "<<n2<<" = "<< n1 + n2<<"\n";
            break;
        case '-':
            cout <<n1<<" - "<<n2<<" = "<< n1 - n2<<"\n";
            break;
        case '*':
            cout <<n1<<" * "<<n2<<" = "<< n1 * n2<<"\n";
            break;
        case '/':
            cout <<n1<<" / "<<n2<<" = "<< n1 / n2<<"\n";
            break;
        default:
            cout << "An Error has occured.";
            break;
  }
  return 0;
}
