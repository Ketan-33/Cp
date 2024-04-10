#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;
// My code
// bool isValid(string s)
// {
//     stack<char> st;
//     for (char c : s)
//     {
//         if (c == '(' || c == '{' || c == '[')
//         {
//             st.push(c);
//         }
//         else
//         {
//             if (st.empty())
//                 return false;
//             char top = st.top();
//             if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '['))
//             {
//                 return false;
//             }
//             st.pop();
//         }
//     }
//     return st.empty();
// }

// int main()
// {

//     string s = "()";

//     if (isValid(s))
//     {
//         cout << "Valid String" << endl;
//     }
//     else
//     {
//         cout << "Invalid String" << endl;
//     }

//     return 0;
// }

//Optimized code
bool isValid(string s)
{
    stack<char> st;
    unordered_map<char, char> bracketMap = {
        {')', '('},
        {'}', '{'},
        {']', '['}};

    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else if (c == ')' || c == '}' || c == ']')
        {
            if (st.empty() || st.top() != bracketMap[c])
            {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}
