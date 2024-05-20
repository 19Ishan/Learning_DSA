# include<iostream>

using namespace std;

void printRowWise(int arr[][3]){
    for(int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 3 ; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

// void printColWise(int arr[][3]){
//     for(int col = 0 ; col < 3 ; col++){
//         for(int row = 0 ; row < 3 ; row++){
//             cout << arr[col][row] << " ";
//         }
//         cout << endl;
//     }
// }


int main() {
    
    // int arr[3][4]; //initializing

    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // int arr[3][4] = { {1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

    //taking input in the 2d array -> row wise
    /*
    for(int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 4 ; col++){
            cin >> arr[row][col];
        }
    }
    */

    //taking input in the 2d array -> col wise
    /*
    for(int col = 0 ; col < 4 ; col++){
        for(int row = 0 ; row < 3 ; row++){
            cin >> arr[row][col];
        }
    }
    */

    //printing the output of the array
    /*
    for(int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 4 ; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    */
    
/* 
    int arr[3][4];

    for(int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 4 ; col++){
            cin >> arr[row][col];
        }
    }
*/

//CODE HELP

    //initialisation
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


//printing the 2D array
/*
    //A. Row Wise Printing
    for(int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 3 ; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    //B. Column Wise Printing
    for(int col = 0 ; col < 3 ; col++){
        for(int row = 0 ; row < 3 ; row++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
*/

//Taking Input Row Wise

    int brr[3][3];

    for(int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 3 ; col++){
            cout << "Enter the input for row index: " << row << " and column index: " << col << " ";
            cin >> brr[row][col];
        }
        cout << endl;
    }

    printRowWise(brr);


    return 0;
}