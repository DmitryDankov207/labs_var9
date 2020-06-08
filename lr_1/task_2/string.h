#include <string>

using namespace std;


class String
{
public:
    string value;

    String(string i): value(i) {}
    
    friend const String operator+(
        const String& left,
        const String& right
    );
    
    String& operator=(const String& right);
};

