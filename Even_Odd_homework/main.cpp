#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    do{

        cout << "Please enter number" << endl;
        cin >> a;

        if(a % 2 == 0){
            cout << "Even" <<endl;
        }else
            cout << "Odd" << endl;



    }while( a != 0);



    //cout << "Hello World!" << endl;

}
