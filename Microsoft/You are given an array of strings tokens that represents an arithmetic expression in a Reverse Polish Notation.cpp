
// ques link->https://leetcode.com/problems/evaluate-reverse-polish-notation/description/


typedef long long int lli;

class Solution {
public:
    int evalRPN(vector<string>& tokens)
    {
        vector<lli> operands;   // A vector that stores all the operands

        for(string& token : tokens)
        {
            // If the token represents an operation, then ...
            if(token == "+" || token == "-" || token == "*" || token == "/")
            {
                // ... the last element is taken as op2 ...
                lli operand2 = operands.back();
                operands.pop_back();

                // ... and the element before the last one is taken as op1 ...
                lli operand1 = operands.back();
                operands.pop_back();

                // ... and sent to the evaluation function
                operands.push_back(evaluate(operand1, operand2, token));
            }
            else    // If the token is not an operation, then it is pushed back into the operands vector
                operands.push_back(stoll(token));
        }

        return operands[0];
    }

    // Returns the result of an operation
    lli evaluate(lli op1, lli op2, string& operation)
    {
        if(operation == "+")
            return (op1+op2);
        else if(operation == "-")
            return (op1-op2);
        else if(operation == "*")
            return (op1*op2);
        else
            return (op1/op2);
    }
};
