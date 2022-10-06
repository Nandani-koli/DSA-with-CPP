#include <iostream>
#include <string>
#include <list>

using namespace std;

struct youtubeChannel
{
    string Name;
    int Subscribers;

    youtubeChannel(string name, int subscribers)
    {
        Name = name;
        Subscribers = subscribers;
    }

    bool operator==(const youtubeChannel &channel) const
    {
        return this->Name == channel.Name;
    }
};

// void operator<< (ostream& COUT, youtubeChannel& ytchannel)
// {
//     COUT<<"Name : "<<ytchannel.Name<<endl;
//     COUT<<"Subscribers : "<<ytchannel.Subscribers<<endl;
// }

// in order to print multiple objects
ostream &operator<<(ostream &COUT, youtubeChannel &ytchannel)
{
    COUT << "Name : " << ytchannel.Name << endl;
    COUT << "Subscribers : " << ytchannel.Subscribers << endl;

    return COUT;
}

// lets overload += operator
struct myCollection
{
    list<youtubeChannel> mychannels;

    void operator+=(youtubeChannel &channel)
    {
        this->mychannels.push_back(channel);
    }

    void operator-=(youtubeChannel &channel)
    {
        this->mychannels.remove(channel);
    }
};

// overload << operator for mycollection type
ostream &operator<<(ostream &COUT, myCollection &mycollection)
{
    for (youtubeChannel ytchannel : mycollection.mychannels)
    {
        COUT << ytchannel << endl;
    }
    return COUT;
}

int main()
{
    youtubeChannel yt = youtubeChannel("Nandani", 2000);
    youtubeChannel yt2 = youtubeChannel("koli", 3000);

    // cout<<yt;
    // cout<<yt<<yt2;

    // we can also invoke operator function just like a regular function
    // operator<<(cout, yt);

    myCollection collection;
    collection += yt;
    collection += yt2;

    collection -= yt2;

    cout << collection;
}