#include <iostream>
#include <deque>

using namespace std;


int main(int argc, char *argv[])
{
    int a = 0;

    int radix = 0;

    cout << "ENTER AN INTEGER FOR RADIX DIVISION:" ;
    cin>>a;

    cout << "ENTER A RADIX INTEGER BETWEEN  2 AND 16 :" ;
    cin>>radix;

    if(radix < 2 || radix > 16)
    {
        cout<<"Radix is not between 2 and 16"<<endl  ;
return 0;
    }
if (radix>=2  && radix<=10){
    int temp = a;

    deque<int>kdeque;

    while(temp > 0){

kdeque.push_back(temp%radix);

 temp = temp/radix;

    }
     cout<<"RESULT: ";
    for(int i=kdeque.size()-1;i>-1;i--){
        cout<< kdeque[i];}
    return 0;}
    if(radix>10 && radix<=16){

                char HK[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

 int temp = a;

    deque<int>kdeque;

    while(temp > 0){

kdeque.push_back(temp%radix);

 temp = temp/radix;

    }
  cout<<"******************************************************"<<endl;
    cout<<"RESULT: ";
    for(int i=kdeque.size()-1;i>-1;i--){

        int H=kdeque[i];

        cout<<HK[H];

        }
cout<<" "<<endl;
    return 0;}
       }

