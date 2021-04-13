#include "posts.h"

Posts::Posts()
{
    setPostName("");
    setAddress("");
    setVaccineCount(0);
}

Posts::Posts(string name, string address, int vaccineCount)
{
    setPostName(name);
    setAddress(address);
    setVaccineCount(vaccineCount);
}

Posts::~Posts()
{

}

void Posts::createPost(string name, string address, int vaccineCount)
{
    Posts *p = new Posts(name, address, vaccineCount);
    posts.push_back(p);
}

bool Posts::removePost(string name)
{
    for(auto i: posts){

        if(i->getPostName() == name){
            posts.remove(i);
            return true;
        }
    }
    return false;
}

Posts *Posts::getPost(string name)
{
    for(auto it: posts){
        if(it->getPostName() == name){
            return it;
        }
    }
    return nullptr;
}

bool Posts::updatePost(Posts *pt, string name, string address, int vaccineCount)
{
    for(auto i: posts){
        if(i == pt){
            i->setPostName(name);
            i->setAddress(address);
            i->setVaccineCount(vaccineCount);
            return true;
        }
    }
    return false;
}

void Posts::listPosts()
{

    for(auto it : posts){
        cout<<*it<<endl;
    }
}

string Posts::getPostName() const
{
    return postName;
}

void Posts::setPostName(const string &value)
{
    postName = value;
}

string Posts::getAddress() const
{
    return address;
}

void Posts::setAddress(const string &value)
{
    address = value;
}

int Posts::getVaccineCount() const
{
    return vaccineCount;
}

void Posts::setVaccineCount(int value)
{
    vaccineCount = value;
}

ostream &operator<<(ostream &out, const Posts &p)
{
    out<<p.getPostName()<<", "<<p.getAddress()<<", "<<p.getVaccineCount()<<endl;
    return out;
}
