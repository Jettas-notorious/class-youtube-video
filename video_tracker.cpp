#include <iostream>
#include <string>

using namespace std;
class Video
{
  protected:
  string title,uploader,status;
  int views;
  int likes;
   int trend=0;
    int regular=0;
  public:
    void views_int(void)
    {
        cout<<"how many views did your video get?"<<endl;
        cin>>views;
        cout<<"Your video got "<<views<< " views"<<endl;

        cout<<"How many likes did you get?"<<endl;
        cin>>likes;
        cout<<"Your video got "<<likes<< " likes"<<endl;
    }

    void details(void)
    {
        cout<<"Input video title"<<endl;
        cin>>title;

        cout<<"Input video uploader"<<endl;
        getline(cin,uploader);
        }

       void s(void) 
       {
        if(views>1000000)
        {
            cout<<"Trending"<<endl;
          
            cout<<"You have "<<trend<< " trending videos"<<endl;
        }
        else
        cout<<"Regular"<<endl;
        
        cout<<"You have "<<regular<< " regular videos"<<endl;
    }
    
 
 
};


int main()
{
    Video object1,object2,obj3;
    int regular=0,trend=0;
   
    int how_many;
    cout<<"how many videos do you want to track?"<<endl;
    cin>>how_many;
   for(int i=0;i<how_many;i++)
       {

        object1.views_int();
        object2.details();
        obj3.s();
        
       }
       cout<<"you have "<<trend<< " trending videos"<<endl;
       cout<<"you have "<<regular<<" regular videos"<<endl;
       
        
    
    return 0;
    
   


    

}