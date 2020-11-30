#include <vector>
#include <string>
using namespace std;


class pair {
private:
    int id;
    string str;
public:
    pair(int id,string str):id(id),str(str){}
};

class OrderedStream {
private:
    vector<pair> vec;
public:
    OrderedStream(int n) {
        vec;

    }
    
    vector<string> insert(int id, string value) {

    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(id,value);
 */