#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {
        cout<<"Base class display."<<endl;
    }
};
class CWHVideos : public CWH
{
protected:
    float vidlength;

public:
    CWHVideos(string s, float r, float v) : CWH(s, r)
    {
        vidlength = v;
    }
    void display()
    {
        cout << "The title of the video is: " << title << endl;
        cout << "The rating of the video is: " << rating << endl;
        cout << "The length of the video is: " << vidlength << endl;
    }
};

class CWHText : public CWH
{
protected:
    int textlength;

public:
    CWHText(string s, float r, int t) : CWH(s, r), textlength(t)        //CAN BE DONE LIKE THIS ALSO
    {
        // textlength = t;
    }
    void display()
    {
        cout << "The title of the article is: " << title << endl;
        cout << "The rating of the article is: " << rating << endl;
        cout << "The length of the text is: " << textlength << endl;
    }
};

int main()
{

    string title;
    float rating, vidlength;
    int textlength;

    title = "Python Tutorial";
    rating = 4.7;
    vidlength = 2.57;
    CWHVideos pytVid(title, rating, vidlength);

    title = "Python Articles";
    rating = 3.9;
    textlength = 256;
    CWHText pytArti(title, rating, textlength);

    CWH *base_ptr[2];
    base_ptr[0] = &pytVid;
    base_ptr[1] = &pytArti;

    base_ptr[0]->display();
    base_ptr[1]->display();

    // pytVid.display();
    // pytArti.display();
    return 0;
}