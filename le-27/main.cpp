#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle)
    {
        if(needle.empty())
            return 0;
        else
        {
            auto i=haystack.find(needle);
            if(i!=string::npos)
                return int(i);
            else
                return -1;
        }

    }
};
int main()
{
   Solution a;
   string b="hello";
   string c="he";
   string d="lo";
   string e="re";
   cout<<a.strStr(b,c)<<endl;
   cout<<a.strStr(b,d)<<endl;
   cout<<a.strStr(b,e)<<endl;
}
