#include<iostream>
using namespace std;

int main()
{
    //for(int i = 0; i<=0; i= i+1)
    //{
    //    cout<<"Coder Army\n";
    //}

    //int n;
    //cout<<"Enter the number: ";
    //cin>>n;

    //for (int count = 1; count<=n; count=count+1)
    //{
    //    cout<<count<<" Square is: "<<count*count<<endl;
    //}
    
    
    //int num;
    //cout<<"Enter the number: ";
    //cin>>num;
    //for (int i=1; i<=num; i=i+1)
    //{ 
    //if(i%2==0)
    //{
    //    cout<<i<<" \n";
    //}
    //else{

    //}
//}

     //int i;
     //for(i=101;i<200;i++)
     //{
     //    cout<<i<<endl;
//}
          
          //char name ;
          //or(name ='a' ; name <= 'z' ; name = name +1)
          //{
          //  cout<<name<<" \n";
          //}

          //int n,i;
          //cout<<"Enter the number: ";
          //cin>>n;

          //for(i=n;i>=1;i=i-1)
          //{
          //  cout<<i<<" ";
          //}
          

        //int i;
        //for(i=1; i<=100;i=i+3)
        //{
        //    cout<<i<<" ";
        //}

        //int n, i;
        //cout<<"Enter the table: ";
        //cin>>n;

        //for(i = 1; i<=10; i=i+1)
        //{
        //    cout<<n<<"*"<<i<<"="<<n*i<<endl;
        //}

        //int n, pow, i, num;
        //cout<<"Enter the number: ";
        //cin>>n;
        //cout<<"Enter the power: ";
        //cin>>pow;

        //num = n;
        //for(i=1; i<pow; i=i+1)
        //{
        //    num = num*n;
        //}

        //cout<<num;
        
        //int n , i, sum=0;
        //cout<<"Enter the number: ";
        //cin>>n;

        //cout<<(n*(n+1))/2;


        //int n , i , sum = 1;
        //cout<<"Enter the number: ";
        //cin>>n;

        //for (i = 1; i<=n; i=i*2)
        //{
        //    sum = sum+i;
        //}
        //cout<<sum;

        

      //int n , fact = 1, i;
      //cout<<"Enter the number: ";
      //cin>>n;

      //for(i = 1; i<=n ; i=i+1)
      //{
      //  fact = fact*i;
      //}

      //cout<<fact;

  
     int n , i ;
     cout<<"Enter the number: ";
     cin>>n;

     if(n<2)
     {
        cout<<"Not a prime number\n";
        return 0;
     }
     else{
        for (i = 2; i<n; i = i+1)
        {
            if(n%i==0)
            {
                cout<<"Not a Prime Number\n";
                return 0;
            }
        }
        cout<<"Prime Number\n";
        return 0;
     }


}