#ifndef SAFEINT_H_INCLUDED
#define SAFEINT_H_INCLUDED
    #include <iostream>
    using namespace std;

extern const int ma;
extern const int mi;

class outofrange{};

class safeint
{
    friend safeint operator+(const safeint&a, const safeint&b);
    friend safeint operator-(const safeint&a, const safeint&b);
    friend safeint operator*(const safeint&a, const safeint&b);
    friend safeint operator/(const safeint&a, const safeint&b);
    friend ostream & operator<<(ostream & os,const safeint &n);
private:
    int number;
public:
    safeint(int i=0){number=i;}
    safeint&operator=(const safeint &num){number=num.number;}
};


#endif // SAFEINT_H_INCLUDED
