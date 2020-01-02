#include <iostream>
#include <vector>
using namespace std;
// this function prints all string of given length that have equal opening and closing brackets
// such that at no point in the string the closing brackets are more than the opening
// or or valid bracket
int generateBalanced(int length, int numOfOpen, int numOfClose, vector<char> &balancedBrack)
// use a reference paramter to refer to the vector object to prevent creating copies of the vector
{
    int currentPos = numOfOpen + numOfClose + 1;
    //    cout<<"currentPos"<<currentPos<<endl;
    if (length % 2) //return if length is an odd number
        return 0;
    if (numOfOpen + numOfClose == length) //print the vector once required length is reached
    {
        //        cout<<"printing"<<endl;
        for (int i = 1; i <= length; i++)
            cout << balancedBrack[i];
        cout << endl;
        return 1;
    }
    else if (numOfOpen == (length / 2)) //once length/2 open brackets are inserted insert only closing brackets
    {
        balancedBrack[currentPos] = ')';
        generateBalanced(length, numOfOpen, numOfClose + 1, balancedBrack);
        return 1;
    }
    else if (numOfOpen < length / 2) //2 choices when open brackets are less than half of the length of the required string
    {
        balancedBrack[currentPos] = '(';
        generateBalanced(length, numOfOpen + 1, numOfClose, balancedBrack);
        if (numOfClose < numOfOpen)
        {
            balancedBrack[currentPos] = ')';
            generateBalanced(length, numOfOpen, numOfClose + 1, balancedBrack);
        }
        return 1;
    }
}
int main()
{
    int length;
    cin >> length;
    vector<char> balancedBrack(length + 1); //to enable 1 based indexing of the vector
    generateBalanced(length, 0, 0, balancedBrack);
    return 0;
}
