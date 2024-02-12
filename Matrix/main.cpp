#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "enter matrix size";
    cin >> n;
    int matrix[100][100];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << "enter matrix elemn in row"   << i <<   "and col "   << j << endl;
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << matrix[i][j];
        }
    }

    cout << endl;

}
