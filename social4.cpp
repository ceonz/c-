/**
 * Author: Ceon Bang
 * Course: CSCI-136
 * Instructor: Tong Yi
 * Assignment: Lab11D
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

struct Post {
    string username;
    string message;
};

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

    static const int MAX_POSTS = 100;
    int numPosts;          // number of posts
    Post posts[MAX_POSTS]; // array of all posts

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

    // Add a new post
    bool writePost(string usrn, string msg);
    // Print user's "timeline"
    bool printTimeline(string usrn);
};

Network::Network() : numUsers(0), numPosts(0) {
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

bool Network::writePost(string usrn, string msg) {
    if (findID(usrn) == -1) return false;
    if (MAX_POSTS == numPosts) return false;

    Post post{ usrn, msg };
    posts[numPosts++] = post;
    return true;
}

bool Network::printTimeline(string usrn) {
    const int userID = findID(usrn);
    if (userID == -1) return false;

    for (int i = MAX_POSTS - 1; i >= 0; --i) {
        Post post = posts[i];
        if (post.username == usrn) {
            cout << profiles[userID].getFullName() + ": " + post.message << endl;
        }
        for (int j = 0; j < MAX_USERS; ++j) {
            if (following[userID][j]) {
                if (post.username == profiles[j].getUsername()) {
                    cout << profiles[j].getFullName() + ": " + post.message << endl;
                }
            }
        }
    }

    return true;
}

int main() {
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    nw.follow("mario", "luigi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");

    // write some posts
    nw.writePost("mario", "It's a-me, Mario!");
    nw.writePost("luigi", "Hey hey!");
    nw.writePost("mario", "Hi Luigi!");
    nw.writePost("yoshi", "Test 1");
    nw.writePost("yoshi", "Test 2");
    nw.writePost("luigi", "I just hope this crazy plan of yours works!");
    nw.writePost("mario", "My crazy plans always work!");
    nw.writePost("yoshi", "Test 3");
    nw.writePost("yoshi", "Test 4");
    nw.writePost("yoshi", "Test 5");

    cout << endl;
    cout << "======= Mario's timeline =======" << endl;
    nw.printTimeline("mario");
    cout << endl;

    cout << "======= Yoshi's timeline =======" << endl;
    nw.printTimeline("yoshi");
    cout << endl;
}