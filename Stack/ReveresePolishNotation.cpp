/**
 * @file ReveresePolishNotation.cpp
 * @author Mitesh Tank (codewithmitesh)
 * @brief
 * @version 0.1
 * @date 2022-06-22
 *
 * @copyright Copyright (c) 2022
 *
 */
// Same as Post Prifix Evaluation :- )
/**
int evalRPN(vector<string> &tokens)
{
    stack<int> s1;
    for (int i = 0; i < tokens.size(); i++)
    {
        if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
        {
            int num1 = s1.top();
            s1.pop();
            int num2 = s1.top();
            s1.pop();

            if (tokens[i] == "+")
            {
                s1.push(num1 + num2);
            }
            else if (tokens[i] == "-")
            {
                s1.push(num2 - num1);
            }
            else if (tokens[i] == "*")
            {
                s1.push(num1 * num2);
            }
            else if (tokens[i] == "/")
            {
                s1.push(num2 / num1);
            }
        }
        else
        {
            s1.push(stoi(tokens[i]));
        }
    }

    return s1.top();
}
*/