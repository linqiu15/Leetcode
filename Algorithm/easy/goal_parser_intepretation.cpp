#include <string>
using namespace std;

class Solution {
public:
    string interpret(string command) {
        string rstr="";
        int i=0;
        while(i<command.size()){
            if(command[i]=='G'){
                rstr.push_back(command[i]);
                i++;
            }else if(command[i]=='('){
                if(command[i+1]==')'){
                    rstr.push_back('o');
                    i+=2;
                }else{
                    rstr.append("al");
                    i+=4;
                }
            }
        }
        return rstr;
    }
};