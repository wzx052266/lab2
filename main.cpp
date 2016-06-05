//Most of the comment are actual code that support user input, for this assignment those feature were disabled for command line input.

#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    double answer=0;

    if (argc != 4){
        cout << "The input command is not available!" << endl;//false if the input have other
                                                                   // than 3 variables in command line.
        return 1;
    }
    cout << argv[1] << argv[2] << argv[3] << endl;//testing.
    char operate = argv[2][0];//I'm not sure what is argv[0] used here for.
    double first_number=atof(argv[1]);
    double second_number=atof(argv[3]);
    //cout << "Please enter the operator for this simple calculator:" << endl;
    //cin >> operate;
    //if(operate == '/'){
        //cout << "Now enter the numerator:" << endl; //to be clear for the user how to enter
                                                      // the number for dividing equation.
        //cin >> first_number;
        //cout << "And the denominator:" << endl;
        //cin >> second_number;
   // }
    //else{
    //    cout << "Enter the first number in this operation:" << endl;
   //     cin >> first_number;
   //     cout << "Enter the second number:" << endl;
    //    cin >> second_number;
   // }

    switch (operate) {
        case '+': {
            answer = first_number + second_number;
            cout << "The answer for this calculation is " << answer << endl;
            break;
        }
        case '-': {
            answer = first_number - second_number;
            cout << "The answer for this calculation is " << answer << endl;
            break;
        }
        case '*': {
            answer = first_number * second_number;
            cout << "The answer for this calculation is " << answer << endl;
            break;
        }
        case '/': {
            if(second_number == 0){
                cout << "The denominator cannot be 0" << endl;
                return 1;
            }
            answer = first_number / second_number;
            cout << "The answer for this calculation is " << answer << endl;
            break;
        }
    }
}