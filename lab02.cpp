
/* Secant method
#include<iostream>
#include<math.h>
#define f(x) (3*x-cos(x)-1)
#define error 0.0001
using namespace std;
int main(){
    float x1,x2,x3;
    cout<<"Enter the two initial guess: ";
    cin>>x1>>x2;
    do{
        x3=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
        x1=x2;
        x2=x3;
    
    }while(fabs((x2-x1)/x2)>error);
    cout<<"The root is "<<x3<<endl;
    return 0;
}
*/


// NR method
#include<iostream>
#include<math.h>
#define f(x) (3*x-cos(x)-1)
#define g(x) (3-sin(x))
#define error 0.0001
using namespace std;
int main(){
    float x1,x2,err;
    do{
        cout<<"Enter a number: ";
        cin>>x1;
    
    }while(g(x1)==0);
    do{
        x2=x1-f(x1)/g(x2);
        err=fabs(x2-x1);
        x1=x2;
    }while(err>error);
    cout<<"The root is "<<x1<<endl;
    return 0;
}

