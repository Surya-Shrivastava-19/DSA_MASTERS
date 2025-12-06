#include <iostream>
using namespace std;
class User {
    int id;
    string username;
    string passward;
    string bio;
    public:
    // setter
    void setid(int id) {
        this -> id = id;
    }
    void setusername(string username) {
        this -> username = username;
    }
    void setpassward(string passward) {
        this -> passward = passward;
    }
    void setbio(string bio) {
        this -> bio = bio;
    }
    // getter
    int getid() {
        return id;
    }
    string getusername() {
        return username;
    }
    string getpassward() {
        return passward;
    }
    string getbio() {
        return bio;
    }
};

int main() {
    User u1;
    u1.setid(102);
    u1.setusername("SURYA SHRIVASTAVA");
    u1.setpassward("XYZA");
    u1.setbio("hii guys");
    cout << u1.getid() << "\n";
    cout << u1.getusername() << "\n";
    cout << u1.getpassward() << "\n";
    cout << u1.getbio() << "\n";
    return 0;
}