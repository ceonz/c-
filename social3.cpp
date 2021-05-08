/**
 * Author: Ceon Bang
 * Course: CSCI-136
 * Instructor: Tong Yi
 * Assignment: Lab 11C
 *
 * Here, briefly, at least in one or a few sentences
 * describe what the program does.
 */

#include <cctype>
#include <iostream>
using namespace std;

class Profile {
private:
    string username;
    string displayname;

public:
    // Profile constructor for a user (initializing
    // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    string getUsername();
    // Return name in the format: "displayname (@username)"
    string getFullName();
    // Change display name
    void setDisplayName(string dspn);
};

Profile::Profile(string usrn, string dspn) : username(usrn), displayname(dspn) {
}

Profile::Profile() : username(""), displayname("") {
}

string Profile::getUsername() {
    return username;
}

string Profile::getFullName() {
    return displayname + " (@" + username + ")";
}

void Profile::setDisplayName(string dspn) {
    displayname = dspn;
}

class Network {
private:
    static const int MAX_USERS = 20; // max number of user profiles
    int numUsers;                    // number of registered users
    Profile profiles[MAX_USERS];     // user profiles array:
                                     // mapping integer ID -> Profile

    bool following[MAX_USERS][MAX_USERS]; // friendship matrix:
    // following[id1][id2] == true when id1 is following id2

    // Returns user ID (index in the 'profiles' array) by their username
    // (or -1 if username is not found)
    int findID(string usrn);

public:
    // Constructor, makes an empty network (numUsers = 0)
    Network();
    // Attempts to sign up a new user with specified username and displayname
    // return true if the operation was successful, otherwise return false
    bool addUser(string usrn, string dspn);

    // Make 'usrn1' follow 'usrn2' (if both usernames are in the network).
    // return true if success (if both usernames exist), otherwise return false
    bool follow(string usrn1, string usrn2);

    // Print Dot file (graphical representation of the network)
    void printDot();
};

Network::Network() : numUsers(0) {
    for (int i = 0; i < MAX_USERS; ++i) {
        for (int j = 0; j < MAX_USERS; ++j) {
            following[i][j] = false;
        }
    }
}

int Network::findID(string usrn) {
    for (int i = 0; i < numUsers; ++i) {
        if (profiles[i].getUsername() == usrn) {
            return i;
        }
    }
    return -1;
}

bool Network::addUser(string usrn, string dspn) {
    if (usrn.length() == 0) return false;
    if (findID(usrn) != -1) return false;
    if (MAX_USERS == numUsers) return false;
    for (auto ch : usrn) {
        if (!isdigit(ch) and !isalpha(ch)) return false;
    }

    Profile profile{ usrn, dspn };
    profiles[numUsers++] = profile;

    return true;
}

bool Network::follow(string usrn1, string usrn2) {
    const int userID1 = findID(usrn1);
    if (userID1 == -1) return false;
    const int userID2 = findID(usrn2);
    if (userID2 == -1) return false;

    following[userID1][userID2] = true;
    return true;
}

void Network::printDot() {
    cout << "digraph {" << endl;

    for (auto profile : profiles) {
        string usrn = profile.getUsername();
        if (usrn != "") cout << "\t\"@" + usrn + "\"" << endl;
    }

    cout << endl;

    for (int i = 0; i < MAX_USERS; ++i) {
        for (int j = 0; j < MAX_USERS; ++j) {
            string usrn1 = profiles[i].getUsername();
            string usrn2 = profiles[j].getUsername();
            if (following[i][j]) {
                cout << "\t\"@" + usrn1 + "\" -> \"@" + usrn2 + "\"" << endl;
            }
        }
    }

    cout << "}" << endl;
}

int main() {
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw.addUser("wario", "Wario");

    // add clone users who follow @mario
    for (int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw.follow("mario2", "luigi");

    nw.printDot();
}