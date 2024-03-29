#include <iostream>
using namespace std;

int main() {
    char letters[] = {'S', 'H', 'A', 'R', 'U', 'K'};
    int i = 0;

    while (i < 6) {
        char letter = letters[i];
        cout << letter << endl;

        switch (letter) {
            case 'S':
                for (int row = 0; row < 7; row++) {
                    for (int col = 0; col < 5; col++) {
                        if ((row == 0 && col > 0 && col < 4) || (row == 3 && col < 4) || (row == 6 && col > 0 && col < 5) || (col == 0 && (row > 0 && row < 3)) || (col == 4 && (row > 3 &&< 6))) row 
                            cout << "*";
                        else
                            cout << " ";
                    }
                    cout << endl;
                }
                break;
            case 'H':
                for (int row = 0; row < 5; row++) {
                    for (int col = 0; col < 5; col++) {
                        if (col == 0 || col == 4 || row == 2)
                            cout << "*";
                        else
                            cout << " ";
                    }
                    cout << endl;
                }
                break;
            case 'A':
                for (int row = 0; row < 7; row++) {
                    for (int col = 0; col < 5; col++) {
                        if ((row == 0 && col > 0 && col < 4) || (row == 3 && col == 0) || (row == 3 && col == 4) || (col == 0 && (row > 0 && row < 3)) || (col == 4 && (row > 0 && row < 3)))
                            cout << "*";
                        else
                            cout << " ";
                    }
                    cout << endl;
                }
                break;
            case 'R':
                for (int row = 0; row < 5; row++) {
                    for (int col = 0; col < 5; col++) {
                        if (col == 0 || (row == 0 && col < 4) || (row == 2 && col < 4) || (row == col && row > 0))
                            cout << "*";
                        else
                            cout << " ";
                    }
                    cout << endl;
                }
                break;
            case 'U':
                for (int row = 0; row < 5; row++) {
                    for (int col = 0; col < 5; col++) {
                        if ((col == 0 || col == 4) || (row == 4 && col > 0 && col < 4))
                            cout << "*";
                        else
                            cout << " ";
                    }
                    cout << endl;
                }
                break;
            case 'K':
                for (int row = 0; row < 5; row++) {
                    for (int col = 0; col < 5; col++) {
                        if (col == 0 || (row + col == 2) || (row - col == 2))
                            cout << "*";
                        else
                            cout << " ";
                    }
                    cout << endl;
                }
                break;
        }
        
        cout << endl;
        i++;
    }

    return 0;
}
