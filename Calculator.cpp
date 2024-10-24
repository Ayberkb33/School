#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main(){

    double num1, num2, total;
    const double PI = 3.14159265359;
    char section;
    string operation;
    
        cout << "Enter the section (A for basic operations) (B for complicated) (C for trigonometric) = ";
        cin >> section;
    
        switch (section){
        
            case 'B':
            case 'b':

                    cout << "Enter the operation (root, log, power)";
                    cin >> operation;

                if (operation == "root"){
                    cout << "Enter number = ";
                    cin >> num1;
                    total = sqrt(num1);
                    cout << "Total is = " << total << endl;
                }

                else if (operation == "power"){
                    cout << "Enter number = ";
                    cin >> num1;
                    total = pow(num1, 2);
                    cout << "Total is = " << total << endl;
                }

                else if (operation == "log"){
                    cout << "Enter number = ";
                    cin >> num1;
                    total = log10(num1);
                    cout << "Total is = " << total << endl;
                }

                else{
                    cout << "Enter a valid response" << endl;
                }
            break;

            case 'C':
            case 'c':

                    cout << "Enter the operation (sin, cos, tan, cot)";
                    cin >> operation;

                    if (operation == "sin"){
                        cout << "Enter number = " ;
                        cin >> num1;
                        total = sin(num1 * PI / 180.0) ;
                        cout << "Total is = " << total << endl;
                }

                    else if (operation =="cos"){
                        cout << "Enter number = ";
                        cin >> num1;
                        total = cos(num1 * PI / 180.0);
                        cout << "Total is = " << total << endl;
                }

            
                    else if (operation =="tan"){
                        cout << "Enter number = ";
                        cin >> num1;
                        total = tan(num1 * PI / 180.0);
                        cout << "Total is = " << total << endl;
                }

            
                    else if (operation =="cot"){
                        cout << "Enter number = ";
                        cin >> num1;
                        total = 1 / tan(num1 * PI / 180.0);
                        cout << "Total is = " << total << endl;
                }
                
                    else{
                        cout << "Enter a valid operation" << endl;
                }
            break;

            case 'A':
            case 'a':

                cout << "Enter the operation (add, minus, multip, divide) = ";
                cin >> operation;

                if(operation == "add"|| operation == "+"){
                    cout << "Enter first number to add = ";
                    cin >> num1;
                    cout << "Enter second number = ";
                    cin >> num2;
                    total = num1 + num2;
                    cout << "Total is = " << total << endl;
                }

                else if (operation == "minus" || operation == "-"){
                    cout << "Enter first number to erase = ";
                    cin >> num1;
                    cout << "Enter second number = ";
                    cin >> num2;
                    total = num1-num2;
                    cout << "Total is = " << total << endl;
                }

                else if (operation == "divide" || operation == "/"){
                    cout << "Enter first number = ";
                    cin >> num1;
                    cout << "Enter second number = ";
                    cin >> num2;
                    total = num1/num2;
                    cout << "Total is = " << total << endl;
                }

                else if (operation == "multip" || operation == "*"){
                    cout << "Enter first number = ";
                    cin >> num1;
                    cout << "Enter second number = ";
                    cin >> num2;
                    total = num1*num2;
                    cout << "Total is = " << total << endl;
                }

                else{
                    cout << "Enter a valid operation" << endl;
                }
            break;


            default:
                cout << "Enter a valid please section" << endl;
        }

    system("pause");
    return main();
}