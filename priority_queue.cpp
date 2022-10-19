
class compare{
    public:
    bool operator()(pair<string,int> A,pair<string,int> B)
    {
        if(A.second==B.second)
            return A.first<B.first;
        else
        return A.second>B.second;
    }
};

// we can also use struct instead of class
// pair,class,struct ,vector,anything can be compared



