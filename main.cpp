#include <iostream>

using namespace std;

struct Profile
{
    string fullname;
    string state;
    bool operator==( Profile rhs)
        {if (fullname==rhs.fullname) return true; return false; }
    bool operator!=(Profile rhs)
        {if (fullname!=rhs.fullname) return true; return false; }
};

ostream& operator<< (ostream &out, Profile &user)
{
    out << user.fullname<<"--" <<user.state;
    return out;
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
