//Polymorphism means "many forms".
// Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.
// Compile Time Polymorphism :- function or operator overloading
// Runtime polymorphism :- Overriding
#include <bits/stdc++.h>
using namespace std;
class YoutubeChannel {
    private:
        string name;
    protected:
        string ownername;
        int contentQuality = 0;
    public:
        YoutubeChannel(string cname, string cownername){
            name = cname;
            ownername = ownername;
        }
        void ContentAnalysis(){
            if(contentQuality<3)
            {
                cout<<name<<" has bad quality content"<<endl;
            }
            else
            {
                cout<<name<<" has great content"<<endl;
            }
        }
};
class cookingYoutubeChannel:public YoutubeChannel{
    public:
        cookingYoutubeChannel(string cname,string cownername):YoutubeChannel(cname,cownername)
        {

        }
    void practice (){
        cout<<"cooking Practise"<<endl;
        contentQuality++;
    }

};
class SingerYoutubeChannel:public YoutubeChannel{
    public:
        SingerYoutubeChannel(string cname,string cownername):YoutubeChannel(cname,cownername)
        {
        }
        void practice (){
        cout<<"singing Practise"<<endl;
        contentQuality++;
         }
    
};
int main()
{
    cookingYoutubeChannel cookingYtChannel("kitchen","Nandani");
    SingerYoutubeChannel SingerYtChannel("Voice","Nandini");

    SingerYtChannel.practice();
    SingerYtChannel.practice();
    SingerYtChannel.practice();
    SingerYtChannel.practice();

    
    cookingYtChannel.practice();

    //Pointer of base class can point an object of derived class
    YoutubeChannel*cyt = &cookingYtChannel;
    YoutubeChannel*syt = &SingerYtChannel;
    cyt->ContentAnalysis();
    syt->ContentAnalysis();

    return 0;
}
