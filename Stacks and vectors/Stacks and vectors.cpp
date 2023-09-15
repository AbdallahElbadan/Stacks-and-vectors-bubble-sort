//Abdallah Elbadan



using namespace std;
#include <stack>
#include <string>
#include <iostream>
#include <vector>


bool isBalanced(string Values) {

    //create a stack
    stack <char> temp;

    //make a for loop to start pushing valuse to the stack
    for (int i = 0; i < Values.length(); i++) {

        if (temp.empty()) {

            //if the stack empty just puch the first practe
            temp.push(Values[i]);
        }
        //make a else code in case if it found the other side of the
        //prantaces you can pop the other side from the stack
        else if (temp.top() == '(' && Values[i] == ')' ||
            temp.top() == '{' && Values[i] == '}' || temp.top() == '[' && Values[i] == ']')
        {
            temp.pop();
        }
        //if there is no other prantacies that match add the value to the satck and skip all other charechtares
        else if (Values[i] == '(' || Values[i] == ')' ||
            Values[i] == '{' || Values[i] == '}' || Values[i] == '[' || Values[i] == ']')
        {
            temp.push(Values[i]);
        }
    }
    // if there is nothing left in the stack you can return true which means all prantacies match, if not return false
    if (temp.empty()) {
        return true;
    }
    else {
        return false;
    }

}

//Using Bubble sort
template <typename T>

void swapSort(vector<T>& array) {

    //making a bool to test if we made any swaps in the vector
    bool didswap = true;

    while (didswap)
    {
        //switch to false in case we don't make any changes 
        didswap = false;

        //making a for loop to run through the vector
        for (int i = 0; i < array.size() - 1; i++) {

            if (array[i] > array[i + 1]) {

                //swaping the arrays
                swap(array[i], array[i + 1]);
                didswap = true;
            }
        }
    }
}

//making a swap function to swap beween values in the vector
void swap(int& a, int& b) {
    \

        int dummyvalue;

    dummyvalue = a;

    a = b;

    b = dummyvalue;
}





int main()
{
    //Test
    string Values = "(a[()9])";
    cout << Values << endl;
    if (isBalanced(Values)) {
        cout << "True\n";
    }
    else {
        cout << "false\n";
    }
    Values = "(((([t(k7)]";
    cout << Values << endl;
    if (isBalanced(Values)) {
        cout << "True\n";
    }
    else {
        cout << "false\n";
    }
    Values = "){(ab)[]}(";
    cout << Values << endl;
    if (isBalanced(Values)) {
        cout << "True\n";
    }
    else {
        cout << "false\n";
    }
    Values = "(3)(m)[{}]";
    cout << Values << endl;
    if (isBalanced(Values)) {
        cout << "True\n";
    }
    else {
        cout << "false\n";
    }
    Values = "(n)([()]2{5})";
    cout << Values << endl;
    if (isBalanced(Values)) {
        cout << "True\n";
    }
    else {
        cout << "false\n";
    }


    //Test 2

    vector<int> array{ 70, 8, 1, 4, 0, 55 };
    cout << "this is the vector before swap: \n";

    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    swapSort(array);

    cout << "this is after the swap\n";

    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;



}
