#include <iostream>

using namespace std;

int fib(){
int i, fn, f1 = 0, f2 = 1;
static int n=1;
n=n+1;
if (n == 0) return 0;
if (n == 1) return 1;
for ( i = 2; i<=n; ++i){
        fn = f1 + f2;
        f2 = f1; f1 = fn;
}

return fn;
}


int main()
{
for(int i=0;i<10;i++)
    cout<<fib()<<endl;
return 0;
}
