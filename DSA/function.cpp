#include <iostream>
using namespace std;

void intsum(int x){
    int size=sizeof(x);
    int rem=0,sum=0;
    for (int i = 0; i <size ; i++)
    {
        rem=x%10;
        sum+=rem;
        x/=10;
    }
    cout<<sum;
    
}

void power(int x , int y){
    long long pow=1;

    for (int i = 0; i < y; i++)
    {
        pow*=x;
    }
    cout<< pow;
    
}

long long ncrv(long long n, long long  r){
    if ((n<=0 || n>=25) && n<r && (r<=0 || r>=25)) 
    {
        cout<<"ncr is not applicable.";
        return 0;
    }
    else{
        long long ncr=0;
        long long nf=1, rf=1, nrf=1, nr=(n-r);
        while (n!=0)
        {
            nf*=n;
            n--;
        }
        while (r!=0)
        {
            rf*=r;
            r--;
        }
        while (nr!=0)
        {
            nrf*=nr;
            nr--;
        }

        ncr= nf/(rf*nrf);
        cout<< ncr;
    }
    return 0;
    
}

int gcd(int x, int y){
    int mod=0;
    int d=x,d1=0;
    while (d!=0)
    {
        mod=d%y;
        d=y;
        y=mod;
        d1=y;
    }
    return d1;
}


void ctdig(int x){
    int ct=0;
    while (x!=0)
    {
        ct++;
        x/=10;   
    }
    cout<<ct;
    
}


void reverse(int n){
    int rev=0;
    int rem=0;
    while (n!=0)
    {
        rem=n%10;
        rev=(rev)*10+ (rem); 
        n/=10;
    }
    cout<<rev;
}

void isprime(int n){
    bool flag=true;
    for (int i = 2; i <(n/2)+2 ; i++)
    {
        if (n%i==0)
        {
            cout<<n<<" is not a prime number."<<endl;
            flag=false;
        }
        if (!flag)
        {
            break;
        }
    }
    if(flag){
        cout<<n<<" is a prime number."<<endl;
    }
    
}

void printprime(int n){
    int ct=0;
    while(n>1){
        bool flag=true;
        ct=0;

        for (int j = 2; j <n-1 ; j++){

            if (n%j==0){
                ct++;
                flag=false;
            }

            if(!flag){
                break;
            }
        }
        n--;

    }
    
}

void sgcd(int x, int y){
    while (x!=y){
        if (x>y)
        {
            x=x-y;
        }
        else if (x<y)
        {
            y=y-x;
        }
    }
    cout<<x;
}

int main(){
    // int x=12345;
    // intsum(x);

    int x=5;
    int y=2;
    sgcd(x,y);
    return 0;
}