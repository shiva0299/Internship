#include<iostream>
#include<math.h> 
using namespace std;

class Demo
{
    int num, len=0;

    public:
        Demo()
        {
            readNo();
        }
        
        void factorial()
        {
            int a = num;
            int i = 1;
            while(a>0)
            {
                i = i * a;
                a--;
                len++;
            }
            cout<<"Factorial of "<<num<<" is "<<i;
        }

        void reverse()
        {
            int a = num;
            int rev = 0;
            while(a>0)
            {
                rev = rev*10 + a%10;
                a /= 10;
            }
            cout<<"\nReverse of "<<num<<" is "<<rev;
        }

        void isPalindrome()
        {
            int a = num;
            int rev = 0;
            while(a>0)
            {
                rev =rev*10 + a%10;
                a /= 10;
            }
            if(rev == num)
            {
                cout<<"\nYes!!! It is a Paliindrome number";
            }
            else
            {
                cout<<"\nNo!!! It is NOT a Paliindrome number";
            }
        }

        void isArmstrong()
        {
            int a = num;
            int n = num;
            int rem = 0, rsl=0;

            while(a>0)
            {
                a/=10;
                len++; 
            }
            while(n>0)
            {
                rem = n%10;
                rsl += pow(rem,len);
                n /= 10;
            }
            if(rsl == num)
            {
                cout<<"\nYes!!! It is an Armstrong number";
            }
            else
            {
                cout<<"\nNo!!! It is NOT an Armstrong number";
            }
        }

    private:

        void readNo()
        {
            cout<<"Enter any number : ";
            cin>>num;
        }
};

//itvoyagers.in

int main()
{
    Demo d = Demo();
    d.factorial();    
    d.reverse();
    d.isPalindrome();
    d.isArmstrong();
    return 0;
}