#ifndef POSTS_H
#define POSTS_H
#include <string>
#include <iostream>
#include <list>
using namespace std;

class Posts
{
public:
    Posts();
    Posts(string name, string address, int vaccineCount=0);
    virtual ~Posts();

    void createPost(string name, string address, int vaccineCount=0);
    bool removePost(string name);
    Posts *getPost(string name);
    bool updatePost(Posts *pt, string name="", string address="", int vaccineCount=-1);
    bool updateVaccineNumber(Posts *pt, int vNumber);
    void listPosts();
    string getPostName() const;
    void setPostName(const string &value);

    string getAddress() const;
    void setAddress(const string &value);

    int getVaccineCount() const;
    void setVaccineCount(int value);

    Posts &operator=(Posts&);
    friend ostream &operator<<(ostream &out, const Posts &p);

protected:
    string postName;
    string address;
    int vaccineCount;
    list<Posts*> posts;
};

#endif // POSTS_H
