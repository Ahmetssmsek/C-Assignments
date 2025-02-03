//#include <iostream>
//#include "Linkedlist.h"
//using namespace std;
//
//int main() {
//
//    string prob;
//    int result = 1;
//    cout << "enter the string to check if balanced\n";
//    cin >> prob;
//    LlStack myStack;
//
//    outer:
//    while (result == 1)
//    {
//        
//        for (int i = 0; i < prob.length(); i++) {
//            char ch = prob[i];
//
//            if (ch == '(' || ch == ')' || ch == '{' || ch == '}' || ch == '[' || ch == ']') {
//                
//                if (ch == '(' || ch == '{' || ch == '[') {
//                    myStack.push(ch);
//                }
//
//                else {
//                    if (myStack.isEmpty()) {
//                        result = 0;
//                        goto outer;
//                    }
//                    else {
//                        if (myStack.getTop() == '(' && ch == ')') {
//                            myStack.pop();
//                        }
//                        else if (myStack.getTop() == '{' && ch == '}') {
//                            myStack.pop();
//                        }
//                        else if (myStack.getTop() == '[' && ch == ']') {
//                            myStack.pop();
//                        }
//                        else {
//                            result = 0;
//                            goto outer;
//                        }
//
//                    }
//                }
//
//            }
//            else {
//                cout << "Error: Invalid character entered." << endl;
//                result = 0;
//                break;
//            }
//        }
//        break;
//    }
//    if (myStack.isEmpty()!=1) {
//        result = 0;
//    }
//    if (result == 1) {
//        cout << "Balanced\n"; }
//    else {
//        cout << "not Balanced\n";}
//
//    return 0;
//}
